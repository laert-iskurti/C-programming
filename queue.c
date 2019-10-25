/**
 * @file queue.c
 */

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

void initialize_queue(Queue *pq)
{
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
	return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
	return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
	return pq->items;
}

int enqueue(Item item, Queue *pq)
/*
 *  Add a new item to the queue, item The item to add to the queue.
 *  pq The pointer to the queue structure.
 *  Returns the value 0 if successful and the value -1 in case
 *  an error occurred ( memory allocation failed).
 */
{
	 Node *newNode=(Node*)malloc(sizeof(Node));
     //create a new node
     if(newNode == NULL){
         return -1;
         exit(1);
     }
     newNode -> item = item;
     newNode->next = NULL;
     if(queue_is_empty(pq)){
         pq->front= newNode; 
         pq->rear = newNode;
         //if que is empty the front and rear node of the queue are the same
     }else{
         pq->rear->next= newNode;
         //current rear node’s next pointer to new node i
         pq->rear=newNode;
         //Set rear pointer to new node
     }
     pq->items++;
     return 0;
}

int dequeue(Item *pitem, Queue *pq)
{/**
 *  Remove an item from the queue.
 *  pitem- The pointer to memory where the item can be returned.
 *  pq- The pointer to the queue structure.
 *  Returns the value 0 if successful and the value -1 in case
 *  an error occurred (e.g., the queue is empty).
 */
     if(queue_is_empty(pq)){
         return -1;
     }
     Node*cursor;
     *pitem = pq->front->item;
     cursor = pq->front;
     pq->front=pq->front->next;
     //the front of the queue is the node next to the current front
     free(cursor);
     if(pq->items == 1){
         pq->front = pq->rear = NULL;
         
    }
     pq->items--;
     return 0;
}



void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}
