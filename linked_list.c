/*
CH-230-A
a7 p3.[c]
Laert Iskurti
l.iskurti@jacobs-university.de
*/
#include "linked_list.h"
#include<stdio.h>
#include<stdlib.h>


//this function adds the new value newVal to the end of the linked list
struct list * addToEnd ( struct list * nrList, int newVal )
{
    struct list * cursor=nrList;
    //a newnode is created and dynamically allocated
    struct list* newNode = ( struct list *) malloc ( sizeof ( struct list ));
    if ( newNode == NULL )
    {
        printf (" Error allocating memory \n");
        return nrList ;
    }
    //add the value to the new node
    newNode -> info = newVal ;
    newNode -> next = NULL ;
    if ( nrList == NULL )
        return newNode ;
    //go to the end of the list using the pointer cursor
    while ( cursor -> next != NULL )
        cursor = cursor -> next ;
    //newnode is now at the end of the list
    cursor -> next = newNode ;
    return nrList ;
}
//this function adds the new value newVal to the beginning of the linked list
struct list * addToBeginning ( struct list * nrList, int newVal )
{   
    //a newnode is created and dynamically allocated
    struct list * newNode ;
    newNode = ( struct list *) malloc ( sizeof ( struct list ));
    if ( newNode == NULL )
    {
        printf (" Error allocating memory \n");
        return nrList;
    }
    newNode -> info = newVal ;
    newNode -> next = nrList ;
    return newNode ;
}
/*
this function deletes the first element from the linked list
it returns the new list without the first element
*/
struct list* delFirstElem(struct list* nrList){
    if(nrList == NULL){
        return nrList;
    }else{
    struct list* newList = nrList->next;
    return newList;
    }


}
//this function prints the list
void print_list ( struct list * nrList )
{
    struct list * p ;
    for ( p = nrList ; p ; p = p -> next )
    {
        printf ("%d ", p -> info ) ;
    }
    printf("\n");
}
//this function disposes the list
void dispose_list ( struct list * nrList )
{
    struct list * nextelem ;
    while ( nrList != NULL )
    {
        nextelem = nrList -> next ;
        free ( nrList ) ;
        nrList = nextelem ;
    }
}