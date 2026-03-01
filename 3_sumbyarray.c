#include<stdio.h>
int main (){
    int i,n,elements;
    int array[10];
    int sum=0;
    printf ("Enter the size of arraay:\n");
    scanf("%d",&n);


    printf("the arry is :");

    for (i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for (i=0;i<n;i++){
        printf("%d,",array[i]);
        sum=sum+array[i];
    }

    printf("The sum is %d",sum);
}