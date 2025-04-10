#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct dnode dnode_t;
struct dnode
{
    void *value;
    dnode_t *next;
    dnode_t *prev;
};

typedef struct dlist
{
    dnode_t *first;
    dnode_t *last;
    unsigned len;
} dlist_t;

dlist_t dlist_new();
void *dlist_append(dlist_t *l, void *v);
void dlist_free(dlist_t *l);
dnode_t *dnode_next(dnode_t *n);
dnode_t *dnode_prev(dnode_t *n);

#endif
