/*
#include <stdio.h>

int main(){
    
    int array[100],n,element,pos,i;

    printf("enter the size of array:");
    scanf("%d",&n);

    printf("enter the elements of array:");
    for (i=0;i<n;i++){
        scanf("%d",&array[i]);
        
    }
    printf("the old array is :\n");
    for(i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    printf("Enter the possintion to insert:");
    scanf("%d",&pos);
     
    printf("Enter the value you wanted to insert:");
    scanf("%d",&element);

    //left shefting:

    for(i=n-1;i>=pos-1;i--){
        array[i+1]=array[i];
    }
    // inserting
    array[pos-1]=element;
    n++;

    // the new array is :
    printf("The new array is :");
    for (i=0;i<n;i++)
    {
        printf("%d",array[i]);
    }

}*/



#include <stdio.h>
int main(){
    int i,element ,pos,n;
    int array [100];
    printf("Enter the size of an array you wanted ??");
    scanf("%d",&n);

    printf("give the values of the array ");
    for (i=0;i<n;i++){
    scanf("%d",&array[i]);
    }
    //printing the array 
    for (i=0;i<n;i++){
        printf("%d",array[i]);

    }

    printf("Enter the elemeny you wanted to insert ");
    scanf("%d",&element);

    printf("Enter the positon you wanted to insert");
    scanf("%d",&pos);

    //now shigting process
    for (i=n-1;i>=pos-1;i--){
        array[i+1]=array[i];
    }
    array[pos-1]=element;
    n++;

    //printing the new array 
    for(i=0;i<n;i++){
        printf("%d",array[i]);
    }
    printf("----------Welcome------------ for using our program------------seee you again--------");


}
