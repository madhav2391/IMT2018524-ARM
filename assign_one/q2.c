#include<stdio.h>
int main(){
    int arr[15];
    
    for (int i=0;i<15;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for (int j=1;j<15;j++){
        if (arr[j]>max)
            max= arr[j];
    }
    printf("max of the array is %d\n",max);
    return 0;
}