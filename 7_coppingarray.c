/*#include<stdio.h>
int main (){
    int array1[5]={1,2,3,4,5};
    int array2[5];
    int i;

//coping an array throw for looooop
    for (i=0;i<5;i++){
        array2[i]=array1[i];
    }
    printf("The elements of array2 is :");
    for (i=0;i<5;i++){
        printf("%d",array2[i]);
    }
}*/



//lets copy an given array ???
# include<stdio.h>
int main(){
    int array1[5]={1,2,3,4,5};
    int i;
    int array2[5];

    //copy
    for(i=0;i<5;i++){
        array2[i]=array1[i];
    
    }
    // printing the new array2

    printf("The array2[5]=");
    for(i=0;i<5;i++){
        printf("%d",array2[i]);
    }
}