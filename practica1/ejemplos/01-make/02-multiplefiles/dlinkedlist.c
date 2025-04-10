#include "dlinkedlist.h"
#include <stdlib.h>

dlist_t dlist_new()
{
    dlist_t l;
    l = (dlist_t){.first = NULL, .last = NULL, .len = 0};
    return l;
}

void *dlist_append(dlist_t *l, void *v)
{
    dnode_t *node = malloc(sizeof(dnode_t));
    node->value = v;
    if (l->last == NULL) {
        // Insert in empty list
        l->first = l->last = node;
        node->prev = node->next = node;
        l->len = 1;
        return v;
    }
    // Insert at the end of the list
    l->last->next = node;
    l->first->prev = node;
    node->prev = l->last;
    node->next = l->first;
    l->last = node;
    return v;
}

void dlist_free(dlist_t *l)
{
    dnode_t *node = l->first;
    dnode_t *next;
    do
    {
        if (node == NULL)
            break;
        next = node->next;
        free(node);
        node = next;
    } while (node != l->first);
    l->first = l->last = NULL;
    l->len = 0;
}

dnode_t *dnode_next(dnode_t *n)
{
    return n->next;
}

dnode_t *dnode_prev(dnode_t *n)
{
    return n->prev;
}
