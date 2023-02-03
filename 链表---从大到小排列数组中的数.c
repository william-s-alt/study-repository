

#include <stdio.h>

#include<malloc.h>

struct Link

{
    int data;

    struct Link* next;

};

void InsertList(struct Link* H, int n)

{
    struct Link* p, * q, * s;

    s = (struct Link*)malloc(sizeof(struct Link));//seprate 中间转换值

    s->data = n;

    q = H; p = H->next;

    while (p && n > p->data)
    { 
        q = p; 
        p = p->next;
    }
    
    s->next = q->next;
    q->next = s;//插入

    

}

void main()

{
    int a[] = { 12,3,45,67,7,65,10,20,35,55 }; int i;

    struct Link* H, * p;

    H = (struct Link*)malloc(sizeof(struct Link));

    H->next = NULL;

    for (i = 0; i < 10; i++) InsertList(H, a[i]);

    p = H->next;

    while (p)

    {

        printf(" % 4d", p->data);

        p = p->next;

    }

    printf("\n");

}
