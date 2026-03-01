# include<stdio.h>
int main (){
    int array[100],i,elemnt,n;
    int sum=0;


    printf("Enter the size of array please!!!!");
    scanf("%d",&n);


    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
        sum=sum+array[i];

    }
      

    for (i=0;i<n;i++){
        printf("%d ",array[i]);
     
    }
       printf("%d",sum);

    





}