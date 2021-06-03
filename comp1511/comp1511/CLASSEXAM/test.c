#include <stdio.h>
#include <stdlib.h>

// Adds a new item to the queue
Queue add(Queue q, int addItem);

// Removes and returns the item that should leave the queue next
int remove(Queue q);


int main(void) {
    add(myQueue, 3);
    int a = remove(myQueue);
    add(myQueue, 2);
    add(myQueue, 1);
    int b = remove(myQueue);
    printf("%d, %d\n",a,b);
}
