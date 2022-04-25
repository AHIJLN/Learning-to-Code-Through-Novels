#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MEMORY_UNIT char
#define INITIAL_MEMORY 1024*sizeof(MEMORY_UNIT)
#define MEMORY_INCREASE 1024*sizeof(MEMORY_UNIT)

typedef struct {

char type;
long quantity;
void *loop;
void *next;
} Instruction;

FILE *programFile;
MEMORY_UNIT *memory,*limit,*p;
INstruction *program;


void initialize_memory(size_t size){
(memory = (MEMORY_UNIT *)malloc(size))||die("Cannot allocate memory");

limit =memory +size;
memset(memory,0,size);
}

void expand_memory(size_t size){

   size_t memsize =limit -memory +size;
   size_t =_relative = p-memory;




}
