// CIRCULAR QUEUE
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
#define Size 10


struct CQueue {
    char item[10];
    int Rear;
    int Front;
}CQ;


void Initialize(){
    CQ.Front=0;
    CQ.Rear=0;
}



int IsEmpty(){
    if((CQ.Front-CQ.Rear+1)==0){
        printf("Queue Underflows");
        exit(1);
    }
    else{
        return FALSE;
    }
}

void EnQueue(char x){
    if(((CQ.Rear+1)%Size)==(CQ.Front)){
        printf("Circular Queue Overflows");
        exit(1);
    }
    else{
        CQ.Rear=(CQ.Rear+1)%Size;
        CQ.item[CQ.Rear]=x;
    }
}

char DeQueue(){
    if(IsEmpty()){
        printf("Queue UnderFlows");
        exit(1);
    }
    else{
        char x;
        CQ.Front=(CQ.Front+1)%Size;
        x=CQ.item[CQ.Front];
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
