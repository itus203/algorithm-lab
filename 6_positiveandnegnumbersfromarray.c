#include<stdio.h>
int main (){
    int array[5]={-1,2,-3,4,-10};
    printf("Postitive numbes:");

    for(int i=0;i<5;i++){
        if(array[i]>0){
            printf("%d ",array[i]);
        }
    }
    printf("\nNegative numbers: "); 
    for(int i=0; i<5; i++) { 
        if(array[i] < 0) { 
            printf("%d ", array[i]); 
        } 
    } 
}