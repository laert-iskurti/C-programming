#include "stack.h"
#include<stdio.h>
#include<stdlib.h>

void push(struct stack *myStack, int n){
      /* 
      pushes the number n to the stack pointed by the pointer
      struct stack* myStack
      */
     if(myStack -> count < 12){
          printf("Pushing %d\n", n);
          myStack -> count += 1;
          //incrementing count
          myStack -> array[myStack->count - 1] = n;
          //storing the new element in the array
     }else{
          //if stack is full
          printf("Pushing Stack Overflow\n");
     }
}
void pop (struct stack *myStack){
      /* 
      pops a number on the top off the stack pointed by the pointer
      struct stack* myStack and prints it on the standard output
      */
     if(isEmpty(myStack))
     //if stack is empty
         printf("Popping Stack Underflow");
     else{
     printf("Popping %d", myStack -> array[myStack->count - 1]);
     myStack -> count--;
     //decrementing count
     }   
     printf("\n");
}
void empty(struct stack* myStack){
      /* 
      empties the stack by popping one element after the other
      and printing them on the standard output
      */
     printf("Emptying Stack ");
     for(int i = myStack-> count -1; i>= 0; i--){
     printf("%d ", myStack -> array[i]);
     }
     myStack->count = 0;
     //by setting count to 0, the stack is now empty
     printf("\n");
}
int isEmpty(struct stack * myStack){
     //returns 1 if  myStack is empty
     //returns 0 if myStack is not empty
     if(myStack -> count == 0) return 1; 
     else return 0;
}
void quit(){
     //quits the execution of the program
     printf("Quit\n");
     exit(0);
}
