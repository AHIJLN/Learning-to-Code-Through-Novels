#include <stdio.h>
#define DATASIZE 1001
void brainfuck(char *command_pointer, char *input) {
  int bracket_flag;
  char command;
  char data[DATASIZE] = {0};
  char *dp;   /* data pointer */ 
  /* Move dp to middle of the data array */
  dp = &data[DATASIZE/2];
  
  while (command = *command_pointer++)
    switch (command) {
    case '>':   /* Move data pointer to next address */
      dp++;
      break;
    case '<':   /* Move data pointer to previous address */
      dp--;
      break;
    case '+':   /* Increase value at current data cell by one */
      (*dp)++;
      break;
    case '-':   /* Decrease value at current data cell by one */
      (*dp)--;
      break;
    case '.':   /* Output character at current data cell */
      printf("%c", *dp);
      break;
    case ',':   /* Accept one character from input pointer ip and
                   advance to next one */
      *dp = *input++;
      break;
    case '[':   /* When the value at current data cell is 0,
                   advance to next matching ] */
      if (!*dp) { 
        for (bracket_flag=1; bracket_flag; command_pointer++)
          if (*command_pointer == '[')
            bracket_flag++;
          else if (*command_pointer == ']')
            bracket_flag--;
      } 
      break;
    case ']':    /* Moves the command pointer back to matching
                    opening [ if the value of current data cell is
                    non-zero */
      if (*dp) {
        /* Move command pointer just before ] */   
        command_pointer -= 2;  
        for (bracket_flag=1; bracket_flag; command_pointer--)
          if (*command_pointer == ']')
            bracket_flag++;
          else if (*command_pointer == '[')
            bracket_flag--;
        /* Advance pointer after loop to match with opening [ */
        command_pointer++;     
      }
      break;  
    }
  /* Adding new line after end of the program */
  printf("\n");
}
int main(int rc,char *rv[]) {
 FILE *fp;
int c;
  char f[50000],*s=f;
   fp = fopen(rv[1],"r");
   while((c = fgetc(fp))>0) 
*s++=c;*s=0;  
char *input = "";
  brainfuck(f, input);
   fclose(fp);

}
