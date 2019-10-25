/*
CH-230-A 
a7 p3.[c] 
Laert Iskurti
l.iskurti@jacobs-university.de
*/
#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct list* nrList = NULL;

    while(1){
       char c;
       int a,b;
       scanf("%c",&c);
       switch(c){
         case 'a':
            scanf("%d",&b);
            nrList = addToEnd(nrList,b);
            break;
         case 'b':
            scanf("%d",&a);
            nrList = addToBeginning(nrList,a);
            break;
           
         case 'r':
            nrList = delFirstElem(nrList);
            break;
         case 'p':
            print_list(nrList);
            break;
         case 'q':
            dispose_list(nrList);
            exit(1);
            break;
       }
    }

    return 0;
}
