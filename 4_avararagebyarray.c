#include<stdio.h>
int main (){
    int i,n;
    int sum=0;
    float avg;
    int array[100];


    printf("Enter the size of array :\n");
    scanf("%d",&n);

    printf("The aray is :");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
        printf("\n");
    }

    for(i=0;i<n;i++){
        printf("%d,",array[i]);
        sum=sum+array[i];
    }
    //sum=sum+array[i];
    printf("\nthe sum is :%d",sum);

    avg=(float)sum/n;
    printf("\nThe avg is :%.2f",avg);
}