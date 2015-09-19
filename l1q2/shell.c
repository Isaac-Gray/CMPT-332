#include <stdlib.h>
#include <stdio.h>
#include <string.h>



#define MAX_COMMAND_LENGTH 100
#define MAX_NUMBER_OF_PARAMS 10

char opString[MAX_COMMAND_LENGTH+1];
char* Token[MAX_NUMBER_OF_PARAMS+1];

void parseOp(char*OP,char **Token);

void printToken(char** Token);


int main(void) {
 //char *opString = malloc(100 * sizeof(char));
  
  //opString=;
 while ((strcmp("quit\n",opString)!=0) && (strcmp("Quit\n",opString)!=0)){
   //printf(opString);
   //printf(" pre opstring above\n");
   printf("osh>");
   fgets(opString, sizeof(opString), stdin);
   parseOp(opString,Token);
   //printf(opString);
   printToken(Token);
    //printf("\n");
  }
  return 0;
} 

void parseOp(char* OP, char** Token){ 
  int i;
    for(i = 0; i < MAX_NUMBER_OF_PARAMS; i++) { 
      Token[i] = strsep(&OP, "|");
      if(Token[i] == NULL) return;
        
    }
}

void printToken(char** Token){
  printf("SizeOf(Token): %d\n",sizeof(Token));
  int i=0;
  while(Token[i] != NULL) { 
      printf("Token %d: %s\n", i, Token[i]);
      i=i+1;
  }
  return;
}

//http://codereview.stackexchange.com/questions/67746/simple-shell-in-c