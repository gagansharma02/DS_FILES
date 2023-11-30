// LINKED  LIST POLYNOMIAL ADDITION

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

struct node{
    int coef;
    int exp;
    struct node* next;
};

struct node* Getnode()
{
    struct node* p;
    p=(struct node*)malloc(sizeof(struct node));
    p->next=NULL;
    return p;
};

void InsBegin(struct node **list,int x,int y){
    struct node*P;
    P=Getnode();
    P->coef=x;
    P->exp=y;
    P->next=*list;
    (*list)=P;
}

void Traverse(struct node *list){
    struct node*p;
    p=list;
    while(p!=NULL){
        printf("%dx^%d + ",p->coef,p->exp);
        p=p->next;
    }
}


struct node* Multiply(struct node*poly1,struct node*poly2)
{

};

struct node *AddPoly(struct node*poly1,struct node*poly2)
{
    struct node*p,*q;
     p=poly1;
    q=poly2;
    struct node*poly3=NULL;
    while(p!=NULL && q!=NULL)
    {
        if(p->exp==q->exp)
        {
            int x=p->exp;
            int y=p->coef+q->coef;
            InsBegin(&poly3,y,x);
            p=p->next;
            q=q->next;
        }
        else
        {
            if(p->exp>q->exp)
            {
                int x=p->exp;
                int y=p->coef;
                InsBegin(&poly3,x,y);
                p=p->next;
            }
            else
            {
                int x=q->exp;
                int y=q->coef;
                InsBegin(&poly3,x,y);
                q=q->next;
            }
        }
    }
    return poly3;
}

struct node *Subtract(struct node*poly1,struct node*poly2)
{
    struct node*p,*q,*poly3;
    p=poly1;
    q=poly2;
    while(poly1!=NULL)
    {
        poly1->coef=poly1->coef*(-1);
    }
    p=poly1;
    poly3=AddPoly(p,q);
    return poly3;
}

int main(){
    struct node *poly1=NULL, *poly2=NULL,*poly3=NULL;

    InsBegin(&poly1,1,1);
    InsBegin(&poly1,2,2);
    InsBegin(&poly1,3,3);
    InsBegin(&poly1,4,4);


    InsBegin(&poly2,1,1);
    InsBegin(&poly2,5,2);
    InsBegin(&poly2,3,4);
    InsBegin(&poly2,4,5);

    Traverse(poly1);
    printf("\n\n\n");
    Traverse(poly2);
    poly3=AddPoly(poly1,poly2);
    printf("\n\n\n");
    Traverse(poly3);
    printf("\n\n\n");
    poly3=Subtract(poly1,poly2);
    Traverse(poly3);
    return 0;
}
