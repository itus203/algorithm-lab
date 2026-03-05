 #include<stdio.h>
   int main(){
    int array[100],n,temp,i,j,k,min;


    printf("Enter the value of :n");
    scanf("%d",&n);


    //creating arrray
    printf("The unsortred array is :");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for (i=0;i<n;i++){
        printf("%d ",array[i]);
    }
// quick sorting 
    for(i=0;i<n-1;i++){
        min=i;
    
    for (j=i+1;j<n;j++){
        if(array[j]<array[min]){
            min=j;
        }
    }
        temp=array[i];
        array[i]=array[min];
        array[min]=temp;
    }
    printf("sorted array:");
    for (k=0;k<n;k++){
        printf(" %d ",array[k]);
    }
   }
