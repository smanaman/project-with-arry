#include<stdio.h>
int main(){
int row,col;
int rowA;
int colB;
int sum=0;
int sumB=0;


 printf("Enter your number i find out your nagtive number number is  ");
 scanf("%d",&row);
 printf("Enter your number i find out your nagtive number number is  ");
 scanf("%d",&col);
 int arr[row][col];

  printf("\nEnter array's elements:\n");
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

     printf("Enter your row \n  ");
 scanf("%d",&rowA);
printf("Elements of row:-");
for(int i=0;i<row;i++)
{
    printf("%d  ",arr[rowA][i]);
    sum +=arr[rowA][i];
}
printf("The sum of a col %d:-",sum);


 printf("Enter your col");
 scanf("%d",&colB);
printf("Elements of col:-");

for(int j=0;j<col;j++)
{
    printf("%d ",arr[j][colB]);
     sumB +=arr[j][colB];
}
printf("The sum of a col %d:-\n",sumB);
    }  

    
    
