#include<stdio.h>
int circular[10];
int l= -1;
int r= -1;
int size=10;
void add_to_queue(int val){
    if (  (l==0 && r== size-1 ) || (r==(l-1)%(size-1)) ){
        printf("queue is full cant add elemnts\n");
        return;
    } // full condition
    if (l==-1){
        l=0;
        r=0;
        circular[0]=val;
        return;
    }
    else if (l != 0 && r == size-1){

        r = 0;
        circular[0] =val;
    }
    else{
        circular[++r]=val;
    }
}

void print(){
    if (l==-1)
    {
        printf("queue is empty\n");
        return;
    }
    if (r >= l)
    {
        for (int i = l; i <= r; i++)
            printf("%d ",circular[i]);
        
    }

    else{
        for (int i=l;i<size;i++){
            printf("%d \t",circular[i]);
        }
        for (int i=0;i<=r;i++){
            printf("%d \t",circular[i]);

        }
    }
    printf("\n");
}

int remove_from_queue(){
    int ret;
    if (l==-1)
    {
        printf("cannot remove, queue is empty\n");
        return -1;
    }
    else{
        ret=circular[l];
        if (l==r)
        {
            l=-1;
            r=-1;
        }
        else if (l==size-1) // if the left pointer is in the last since it is circular it should go to the front
        {
            l=0;
        }
        else //normal case
        {
            l++;
        }
    }
    return ret;
}




int main(){
    printf("A simple queue of size 10 is created\n");
    printf("adding elements 1 2 3 4 5 6 7 8 9 10\n");
    for (int i=1;i<11;i++){
        add_to_queue(i);
    }
    printf("printing queue:\n");
    print();

    printf("adding to queue when it is full:\n");
    add_to_queue(11);
    
    printf("removing the first element from queue\n");
    int temp=remove_from_queue();
    printf("the remove element is %d\n",temp);

    printf("printing queue:\n");
    print();

    printf("adding 11 to queue:\n");
    add_to_queue(11);

    printf("printing queue:\n");
    print();

    printf("removing all elements from queue\n");
    for (int i=0;i<=9;i++)
    {
         temp=remove_from_queue();
         printf("the removed elemnt is %d\n",temp);

    }
    printf("printing queue:\n");
    print();

    printf("removing from quueue when it is empty\n");
    temp=remove_from_queue();


    printf("adding 12 to queue:\n");
    add_to_queue(12);
    
    printf("printing queue:\n");
    print();
    return 0;
}