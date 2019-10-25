struct list
{
    int info ;
    struct list * next ;
};
struct list * addToEnd ( struct list * nrList, int newVal );
struct list * addToBeginning ( struct list * nrList, int newVal );
struct list* delFirstElem(struct list* nrList);
void print_list ( struct list * nrList );
void dispose_list ( struct list * nrList );

