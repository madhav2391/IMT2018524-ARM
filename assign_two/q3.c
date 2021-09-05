#include<stdio.h>
int afstack[10];
int size=10;
int sp=-1;
void push(int val){
    if (sp==size-1)
    {
        printf("Stack is full cant add any elements\n");
        return;
    }
    else{
        afstack[++sp]=val;
    }
}
void print(){
    if (sp==-1){
        printf("stack is empty\n");
        return;
    }
    //printf("inside print fun");
    for (int i=0;i<=sp;i++){
        
        printf("%d \t",afstack[i]);
    }
    printf("\n");
}

int pop (){
    int ret;
    if (sp==-1){
        printf("stack is empty cant pop\n");
        return -1;
    }
    else 
    {
        ret=afstack[sp--];
    }
    return ret;
    
}



int main(){   
    printf("A ascending full stack of size 10 is created\n");
    printf("Inserting elements 1 2 3 4 5 6 7 8 9 10\n");
    for (int i=1;i<11;i++){
        push(i);
    }
    printf("printing the stack:\n");
    print(); // my print function starts printing from the first added elemet to last added element

    printf("adding to stack when it is full:\n");
    push(11);

    printf("poping top element:\n");
    int temp=pop();
    printf("The poped elemnt is %d\n",temp);


    printf("printing the stack:\n");
    print();

    printf("pushing 11\n");
    push(11);


    printf("printing the stack:\n");
    print();

    printf("poping all elemnts:\n");
    for (int i=0;i<10;i++){
        temp =pop();
        printf("The poped elemnt is %d\n",temp);

    }

        printf("printing the stack:\n");
    print();

printf("trying to pop when stack is empty:\n");
temp=pop();
printf("pushing 12\n");
    push(12);


    printf("printing the stack:\n");
    print();
return 0;



}
