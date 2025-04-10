#include "dlinkedlist.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    dlist_t l = dlist_new();
    dnode_t *it;
    for (int i = 0; i < 10; i++) {
        int *value = malloc(sizeof(int));
        *value = i;
        dlist_append(&l, value);
    }

    it = l.last;
    do {
        printf("Value %d\n", *(int *) it->value);
        it = dnode_prev(it);
    } while (it != l.last);

    // Free memory
    it = l.first;
    do {
        free(it->value);
        it = dnode_next(it);
    } while (it != l.first);

    dlist_free(&l);
}
