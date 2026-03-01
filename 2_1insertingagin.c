#include<stdio.h>
int main (){
    int i,element,pos,n,array[25];

    printf("Enter the size of arrraay\n :");
    scanf("%d",&n);

    printf("Enter the valuse in array:\n ");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    //printing the array

    for (i=0;i<n;i++){
        printf("%d,",array[i]);
    }

    printf("enter the elemment you wanted to insert:\n");
    scanf("%d",&element);

    printf("Enter the position:\n");
    scanf("%d",&pos);

    //shifting 

    for (i=n-1;i>=pos-1;i--){
        array[i+1]=array[i];
    }
    array[pos-1]=element;
    n++;

    printf("The new array is :\n");
    for (i=0;i<n;i++){
        printf("%d,",array[i]);

    }
}