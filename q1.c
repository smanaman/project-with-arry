#include<stdio.h>
int main(){
int size,i;


 printf("Enter your number i find out your nagtive number number is  ");
 scanf("%d",&size);
 int arr[size];
 for(i= 0; i <size; i++){
    printf("arr[%d]=",i);
    scanf("%d",&arr[i]);
 }

  printf("your nagtive number is:- ");
  
   
 for (i = 0; i < size; i++) {
        if (arr[i] < 0) {
            printf("%d, ", arr[i]);
        }
}

}