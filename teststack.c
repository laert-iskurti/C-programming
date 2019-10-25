/*
CH-230-A
a7 p7.[c]
Laert Iskurti
l.iskurti@jacobs-university.de
*/
#include "stack.h"
#include<stdio.h>
#include<stdlib.h>

int main(){
      struct stack* myStack = (struct stack*)malloc(sizeof(struct stack));
      myStack->count=0;
      while(1){
         char c;
         int n;
         scanf("%c", &c);
         switch(c){
              case 's':
              //pushes the number into the stack
              scanf("%d", &n);
              push(myStack, n);
              break;
              case 'p':
              //pops a number on top off the stack
              pop(myStack);
              break;
              case 'e':
              //empties the stack
              empty(myStack);
              break;
              case 'q':
              //quits the execution of the program
              quit();
              break;
          }
          getchar();
      }
}