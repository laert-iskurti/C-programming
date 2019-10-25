struct stack {
      unsigned int count;
      int array[12]; // Container
};
void push(struct stack *myStack, int n);
void pop (struct stack *myStack);
void empty(struct stack* myStack);
int isEmpty(struct stack * myStack);
void quit();
