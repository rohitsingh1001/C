# C
C - Programming

- C is a computer programming language.

## Hello World Program
```C
#include <stdio.h>

int main()
{
    printf("Hello World");
    printf("\n%d", 4%2);

    return 0;
}

```

## Variable Program

```C

```


## Loop
- There are two types of loop
  - 1. Entry Control Loop
  - 2. Exit Control loop
* while() loop
```C
 while(i<10){
    printf("%d",i);
 }```
 
* do{} while() loop
* for() loop
...


##Array
_An aaray is define as a collection of similar kinds of data element store at continious memory location.
syntax of aaray-<data type><aaray name>[size];
#include<stdio.h>
int main()
{
```
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
