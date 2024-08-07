// traversing linked lists

#include <stdio.h>

int main(void) {

    struct entry {
        int value;
        struct entry *next;
    };

    struct entry n1, n2, n3;
    struct entry *listPtr = &n1; // leader

    n1.value = 100;
    n1.next = &n2;

    n2.value = 200;
    n2.next = &n3;

    n3.value = 300;
    n3.next = (struct entry *) 0; // null pointer marks the end of the list

    while (listPtr != (struct entry *) 0) {
        printf("%i\n", listPtr->value);
        listPtr = listPtr->next;
    }

    return 0;

}