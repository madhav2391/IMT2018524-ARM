#include<stdio.h>
void swap(int *a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void sort(int arr0[]){
   for (int i = 0; i <19; i++)      
  {
       for (int j = 0; j < 19-i; j++) 
        {   
            if (arr0[j] > arr0[j+1])
              swap(&arr0[j], &arr0[j+1]);
        }
    }

}
int main(){
       int arr[20];
    
    for (int i=0;i<20;i++){
        scanf("%d",&arr[i]);
    }

for (int i=0;i<20;i++){
        printf("%d ",arr[i]);
    }
    sort(arr);
printf("\n this is the sorted arr\n");
for (int i=0;i<20;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}