#include<stdio.h>
int main()
{
int arr[10];
int i;
for(i=0;i<9;i++)
{
    printf("enter no");
    scanf("%d",& arr[i]);
}
printf("you inputted");
for(i=0;i<9;i++)
{
    printf("\n%d",arr[i]);
}
  return 0;
}
