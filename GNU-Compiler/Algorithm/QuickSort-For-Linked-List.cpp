#include <bits/stdc++.h>
using namespace std;

typedef struct node node;
struct node{
    int value;
    node * next;
};

typedef struct list list;
struct list{
    node * head, *last;
};

list* make_list()
{
    list * L=(list *)malloc(sizeof(list));
    L->head=L->last=NULL;
    return L;
}

node* make_node(int value)
{
    node* n = (node *)malloc(sizeof (node));
    assert(n);
    n->value = value;
    n->next = NULL;
    return n;
}

node* append(list * L, int value)
{
// them vao cuoi danh sach, tra ve node dc tao thanh 
    node* newNode = make_node(value);
    if (L->head == NULL)
    {
        L->head = L->last = newNode;
    }
    else
    {
        L->last->next = newNode;
        L->last = newNode;
    }
    return newNode;
}

void* free_list(list * L)
{
    node* p = L->head;
    while(p)
    {
        node* t = p->next;
        free(p);
        p = t;
    }
    L->head = L->last = NULL;
}

void print_list(list *L)
{
    node* p = L->head;
    while(p)
    {
        printf("%d -> ",p->value);
        p = p->next;
    }
    printf("\n");
}

void quick_sort(list *L)
{
    if(!L->head || !L->head->next)
    {
        return;
    }
    list* lower = make_list();
    list* upper = make_list();
    int pivot = L->head->value;
    node* p;
    
    for (p = L->head->next; p != NULL; p = p->next){
        if(p->value >= pivot)
        {
            append(upper,p->value);
        }
        else
        {
            append(lower,p->value);
        }
    }
    quick_sort(lower);
    append(lower,pivot);
    quick_sort(upper);
    lower->last->next = upper->head;
    lower->last = upper->last;
    free_list(L);
    L->head = lower->head;
    L->last = lower->last;
}

int main()
{
    list* L = make_list();
    append(L,1);
    append(L,3);
    append(L,2);
    append(L,5);
    append(L,4);
    puts("# before quick sort:");
    print_list(L);
    
    quick_sort(L);
    puts("# after quick sort: ");
    print_list(L);

    return 0;
}