#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/mman.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void error(char *msg) {
    fprintf(stderr, "Error: %s\n", msg);
}

enum { MEMSIZE = 30000 };

//unsigned char *mem;
unsigned char mem[MEMSIZE];
unsigned char *ptr;
unsigned char *prog;
size_t progsize;

int init(char *progname) {
    int f,r;
    struct stat fs;
    ptr = mem;// = calloc(MEMSIZE, 1);
    f = open(progname, O_RDONLY);
    assert(f != -1);
    r = fstat(f, &fs);
    assert(r == 0);
    prog = mmap(NULL, progsize = fs.st_size, PROT_READ, MAP_PRIVATE, f, 0);
    assert(prog != NULL);
    return 0;
}

/* As requested, a little more commentary on this, admittedly bizarre, function.
findmatch receives the current instruction-pointer and a bracket character 
for which the "match" is desired. It returns a new instruction-pointer.
*/
int findmatch(int ip, char src){
    char *q, *p="[]";
    int i, defer, dir[]= { 1, -1 };
    i = strchr(p,src)-p;  // at this point, if(src=='[') i=0; else if(src==']') i=1;
    ip+=dir[i];           // ie. if(src=='[') ++ip else if(src==']') --ip
                          // so dir[i] tells us which direction we're going
    // next, we reuse the same idiom to check each character as we scan.
    // defer counts up or down as we encounter [ and ] and finally reaches 0
    // when the match is found.
    for (defer=dir[i]; defer!=0; ip+=dir[i]) {
        if (ip<0||ip>=progsize) error("mismatch");   // check exceeded bounds
        if (q = strchr(p,prog[ip])) {   // if the char is a bracket
            int j = q-p;                // j is 0 or 1
            defer+=dir[j];              // adjust the 'defer' level
        }
    }
    return ip - dir[i];  // return new ip value (one past the matched bracket)
}

int run() {
    int ip;
    for(ip = 0; ip>=0 && ip<progsize; ip++)
        switch(prog[ip]){
        case '>': ++ptr; break;
        case '<': --ptr; break;
        case '+': ++*ptr; break;
        case '-': --*ptr; break;
        case '.': putchar(*ptr); break;
        case ',': *ptr=getchar(); break;
        case '[': /*while(*ptr){*/
                  if (!*ptr)
                      ip=findmatch(ip,'[')-1; // modified because run does ip++ 
                  break;
        case ']': /*}*/
                  if (*ptr)
                      ip=findmatch(ip,']')-1;
                  break;
        }

    return 0;
}

int cleanup() {
    //free(mem);
    ptr = NULL;
    return 0;
}

int main(int argc, char *argv[]) {
    init(argc > 1? argv[1]: NULL);
    run();
    cleanup();
    return 0;
}
