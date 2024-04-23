#include <stdio.h>
int sum(int a, int b)
{
    int c = a + b;
    return c;
}
void greet()
{
    printf("wanna be yours ");
}
int main()
{
    char y[30];
    printf("the sum 4,9 is : %d\n", sum(4, 9));
    // scanf("%s",&y);
    int (*fptr)(int, int); // creating a function pointer
    fptr = &sum;           // declaring a function pointer
    int d = (*fptr)(2, 6); // derefernceing as function pointer
    printf("the val of d is: %d\n", d);
    return 0;
}
// write a program for pointer function
//.write a program to swap number with the help of function pointer?
/*void reverse(int a,int b);
int main(){
    int a,b;
    printf("enter num 1st: \n");
    scanf("%d",&a);
    printf("enter num 2nd: \n");
    scanf("%d",&b);
    void(*rev)(int ,int );
    rev = &reverse;
 //   printf("the swapped number a : %d & b : %d \n",reverse(a,b));
 reverse(a,b);
    return 0;
}
void  reverse(int a,int b){
    int temp;
    temp=a;
    a = b;
    b =temp;
    printf("val of 1st num:%d \n",a);
        printf("val of 2nd num:%d \n",b);

   //return a,b;
}*/
// void mul(int a,int b);
/*int mul(int a,int b);
int  main(){
    int a,b;
    printf("enter 1st num: \n");
    scanf("%d",&a);
    printf("enter 2nd num: \n");
    scanf("%d",&b);
    printf("the product of nums are: \n");
    int(*ptr)(int ,int);  //for assigning fuction of int type
    void(*ptr)(int ,int);  //for assigning func of void type
    ptr= &mul;
    printf("%d",ptr(a,b));
  //  mul(a,b);
    return 0;
}
int  mul(int a,int b){
    int c=a*b;
    return c;
    //printf("%d",c);
}*/
