/*#include<stdio.h>
int main (){
    int array[100], i, n;
    int max, min;

    printf("Enter the size of array:\n");
    scanf("%d",&n);

    printf("Enter %d elements of array:\n", n);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    max = min = array[0]; // input নেওয়ার পরে initialize করা

    printf("The array is: ");
    for(i=0;i<n;i++){
        printf("%d,",array[i]);
        if(array[i] > max){
            max = array[i];
        }
        if(array[i] < min){
            min = array[i];
        }
    }
    printf("\nMaximum element: %d\n", max); 
    printf("Minimum element: %d\n", min);

    return 0;
}
*/
# include<stdio.h>
int main (){
    int i,array[10]={4,5,6,7,8,9,10};
    int max, min;
    max=min =array[0];
    for (i=0;i<10;i++){
        if(array[i]>max){
            max=array[i];
        }
        if(array[i]<min){
            min=array[i];
        }
    }
    printf("%d is max",max);
    printf("%d is min",min);
}