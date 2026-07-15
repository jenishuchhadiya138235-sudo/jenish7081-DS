// delete the aliments from the array of size 10
#include<stdio.h>

void main(){
    int array[10];
    int delete_index;
    int size = 10;

    printf("enter your 10 number you want \n");

    for(int i=0;i<10;i++){
        scanf("%d",&array[i]);
    }

    printf("enter your delete element index\n");
    scanf("%d",&delete_index);

    for(int i = delete_index;i<size -1;i++){
        array[i]=array[i+1];
    }
    size--;
    for(int i=0;i<size;i++){
        printf("%d",array[i]);
    }
}
