#include<stdio.h>
int f=0; //front

int r=0; //right
int queue[10];
int size=10;
void add_to_queue(int val){
    if (r<size)
        queue[r++]=val;
    else 
        printf("cant add as queue is full\n");

}
void print(){
    if (r==f){
        printf("queue is empty\n");
        return;
    }
    for (int i=f;i<r;i++)
        printf("%d\t",queue[i]);
    printf("\n");
}
int remove_from_queue(){
    int ret;
    if (f==r)
        {
            printf("there are no elemts to remove");
            return -1;
        }
    else{
        ret=queue[f++];
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

    printf("removing all elements from queue\n");
    for (int i=0;i<9;i++)
    {
         temp=remove_from_queue();
         printf("the removed elemnt is %d\n",temp);

    }

    printf("removing from quueue when it is empty\n");
    temp=remove_from_queue();
    return 0;
}