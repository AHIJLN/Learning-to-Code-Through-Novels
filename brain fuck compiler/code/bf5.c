
// A brainfuck interpreter in C
// Jared Henry Oviatt

// good brief description of brainfuck
// http://learnxinyminutes.com/docs/brainfuck/

// + : Increments the value at the current cell by one.
// - : Decrements the value at the current cell by one.
// > : Moves the data pointer to the next cell (cell on the right).
// < : Moves the data pointer to the previous cell (cell on the left).
// . : Prints the ASCII value at the current cell (i.e. 65 = 'A').
// , : Reads a single input character into the current cell.
// [ : If the value at the current cell is zero, skips to the corresponding ] .
//     Otherwise, move to the next instruction.
// ] : If the value at the current cell is zero, move to the next instruction.
//     Otherwise, move backwards in the instructions to the corresponding [ .


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{

///////////////////////////// declare and initialize variables ////////////////////////

  int *cells = NULL;   // brainfuck cells 
  int i = 0;           // current cell (index)
  char *bf;            // string containing brainfuck to be interpretted 

  char ch = '\0';      // current char to be working on
  int size = 1;        // total current cells being used
  int n = 0;           // counter value
  
  FILE *inFile = NULL; // file to read brainfuck from
  int fileSize = 0;    // length of file text
  
  int bracket = 0;     // to find paired brackets
  
///////////////////////////// check command line args /////////////////////////////////

  if(argc != 2)
  {
    printf("ERROR: wrong number of arguments\n");
    return 1;
  }
  
  //printf("%s", argv[1]); // print the string in argv[1] // for debugging

///////////////////////////// read files, memory allocation ///////////////////////////

  // calloc initial memory for cells
  cells = (int *)calloc(1, sizeof(int));

  // open input file
  inFile = fopen(argv[1], "r"); 
  if(!inFile)
    printf("ERROR: file not opened properly\n");

  // count the length of the file string

  while(fgetc(inFile) != EOF)
    fileSize++;

  // malloc string array
  bf = (char *)malloc(sizeof(char) * (fileSize + 1 + 1)); // one for space one for null

  // rewind input file to beginning
  rewind(inFile);  

  // put file in bf string
  for(n = 0; n < fileSize; n++)
    *(bf + n) = fgetc(inFile);
  *(bf + n - 1) = '\0';

  // close input file
  fclose(inFile);

  //printf("%s\n", bf);  // print the string of bf // for debugging
  //return 0;                                      // for debugging

///////////////////////////// interpret brainfuck /////////////////////////////////////

  for(n = 0; bf[n]; n++) 
  {
    ch = bf[n];
    if(isspace(ch)) // skip whitespace 
      continue;

    //interpret brainfuck
    switch (ch){
      case '+': // increment pointer value
        cells[i]++;
        break;
      case '-': // decrement pointer value
        cells[i]--;
        break;
      case '>': // increment pointer
        if(i + 1 != size) // check if next is initialized
          i++;
        else
        {
          cells = (int *)realloc(cells, sizeof(int) * ++size);
          i++;
          cells[i] = 0;
        }
        break;
      case '<': // decrement pointer
       if(i > 0)
          i--;
        else
        {
          printf("ERROR: tried to access invalid (less than 0) cell\n");
          return 1;
        }
        break;
      case '.': // output pointer value
        putchar(cells[i]);
        break;
      case ',': // read in value
        cells[i] = getchar();
        break;
      case '[': // start bracket loop // loops could probably be faster
        if(!cells[i])
        {
          bracket++;
          while(bracket)
          {
            n++;
            if(bf[n] == ']')
              bracket--;
            else if(bf[n] == '[')
              bracket++;
          }
        }
        break;
      case ']': // end bracket loop
        if(cells[i])
        {
          bracket++;
          while(bracket)
          {
            n--;
            if(bf[n] == '[')
              bracket--;
            else if(bf[n] == ']')
              bracket++;
          }
        }
        break;
      default:
        printf("ERROR: non-brainfuck character encountered: %d\n", (int)ch); 
        // print error and ascii of error causing character
        // change this later to allow for comments
        return 1;
    }
  }

///////////////////////////// free memory, be done ////////////////////////////////////

  free(cells);
  free(bf);

  return 0;

}
