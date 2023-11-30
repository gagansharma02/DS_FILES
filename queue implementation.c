#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
#define Size 10


struct Queue {
    char item[10];
    int Rear;
    int Front;
}Q;


void Initialize(){
    Q.Front=0;
    Q.Rear=-1;
}



int IsEmpty(){
    if((Q.Rear-Q.Front+1)==0){
        printf("Queue Underflows");
        exit(1);
    }
    else{
        return FALSE;
    }
}

void EnQueue(char x){
    if(Q.Rear==(Size-1)){
        printf("Queue Overflows");
        exit(1);
    }
    else{
        Q.Rear=Q.Rear+1;
        Q.item[Q.Rear]=x;
    }
}

char DeQueue(){
    if(IsEmpty()){
        printf("Queue UnderFlows");
        exit(1);
    }
    else{
        char x;
        x=Q.item[Q.Front];
        Q.Front=Q.Front+1;
        return x;
    }
}



int main(){
    char x;
    Initialize();
    EnQueue('A');
    EnQueue('B');
    x=DeQueue();
    printf("DELETED ELEMENTED IS =====>    %c\n",x);
    EnQueue('C');
    EnQueue('D');
    x=DeQueue();
    printf("DELETED ELEMENTED IS =====>    %c\n",x);
    EnQueue('E');
    EnQueue('G');
    EnQueue('F');
    x=DeQueue();
    printf("DELETED ELEMENTED IS =====>    %c\n",x);
    EnQueue('H');
    x=DeQueue();
    printf("DELETED ELEMENTED IS =====>    %c\n",x);

}

