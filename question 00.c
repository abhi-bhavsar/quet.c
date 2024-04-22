#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
// dangling pointer in a functio call

/*int*func(){
    int a=5;  //int a is local variable which goes out of space whenever called
    return &a;
}
int main(){
//int *ptr=(int *)malloc(sizeof(int))
     int *ptr= func();//pointer pointingtg to invalid location
     printf("%d",*ptr);
    return 0;}*/
// dangling pointer- varaible going out of space
/*int main(){
    int*ptr;
    {
        int a=7;
        int*ptr=&a;   //ptr points to invalid location
    }//ptr is now the dangling pointer
    printf("%d",*ptr);
    return 0;
}*/
// dangling pointer variable going out of scope
/*int main(){
    int *ptr;
    {   // a is the variable of scope
        int a=8;        // at the end of this scope this variable gets destroyed!
        ptr=&a;//ptr points to invalid location
    }
    printf("%d",*ptr);  //ptr is now dangling pointer!!
    return 0;
}*/
// reallocation of memory;
/*int main(){
    char str[10]="abhishek";
   // printf("%s",&str);
   int a;
 //  char *ptr=&str[10];
   char*ptr=(char*)malloc(sizeof(char));
   free(ptr);
   //ptr is dangling pointer now;
   ptr=NUll;
   //ptr no longer dangling;

   return 0;
}*/
// wild ptr;
// pointer which is left uninitialized is wild pointer pointing to arbitary location

/*int main(){
    int a=5;
    int*ptr; // ptr is now a wild ptr
    ptr=&a;//ptr is not wild pointer now as it is pointing towards the a;
    return 0;
}*/
// Inverted right-angled triangle:
// Print an inverted right-angled triangle pattern, where each row contains numbers decreasing from the row number to 1 (e.g., 54321, 4321, etc.).
/*int main(){
    int i,j,n;
    printf("enter a num: \n");
    scanf("%d",&n);
  for(i=0;i<n;i++){
        for(j=n;j>0+i;j--){
            printf("%d",j);
        }printf("\n");
    }
    // for(i=0;i<5;i++){
    //     for(j=5;j>0+i;j--){
    //         printf("%d",j);
    //     }printf("\n");
    // }
    return 0;
}*/
// Right-angled triangle:
// Print a right-angled triangle pattern, where each row contains numbers increasing from 1 to the row number (e.g., 1, 12, 123, etc.).
/*int main(){
    int i,n,j;
    printf("enter a num: \n");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;i++){
        for(j=1;j<=i+1;j++){
            printf("%d",j);
        }printf("\n");
    }
    return 0;
}*/
// code to print first 10 odd number::
/*int main(){
    int i,n=0;
    for(i=0;i<20;i++){
        if(i==n){
            n=n+2;
            continue;
        }printf("%d\t",i);
    }
    return 0;
}*/
// using similar logic to print first 10 even num;
/*int main(){
    int i,n=0;
    for(i=0;i<20;i++){
        if(i==n){
            n=n+2;
            printf("%d\t",n);
            continue;
        }
    }return 0;
}*/
/*1. Text Processing and Algorithm Practice:

RLE (Run-length encoding): Develop a program that reads a string and compresses it using Run-length encoding, where repeated characters are represented by their count followed by the character itself. Implement functions for both encoding and decoding the string.
Anagram detection: Write a program that determines if two strings are anagrams (contain the same letters with the same frequency). Utilize data structures like hash tables or sorting algorithms to achieve efficient comparison.
Longest common subsequence (LCS): Implement an algorithm to find the longest common subsequence (LCS) of two strings. This can be solved using techniques like dynamic programming.*
*/
// Sorting with function pointers: Implement your own sorting function that takes an array, its size, and a comparison function pointer as arguments. The comparison function pointer should compare two elements of the array and return a value indicating their relative order. Use this approach to sort the given array using different sorting algorithms like bubble sort, selection sort, or insertion sort.
// 2. String Manipulation with Function Arrays:Function array for string operations: Define an array of functions, each performing a specific string manipulation task like counting vowels, consonants, or removing spaces. Write a program that takes a string as input and allows the user to choose an operation from the list of functions in the array and apply it to the string.
/*Custom string functions: Implement your own versions of commonly used string functions like strlen (string length), strcpy (string copy), or strcat (string concatenation) using function arrays. These functions should take appropriate arguments and safely manipulate strings.
3. Advanced Function Array Applications:

Callback functions: Develop a program that utilizes a function array as callback functions. For example, implement a function that takes an array, its size, and a callback function as arguments. The callback function should operate on each element of the array, and the program should iterate through the array, calling the callback function for each element.
Function table implementation: Simulate a function table using an array of function pointers. Define different functions with the same signature (arguments and return type) and store their pointers in the function table. The program can then dynamically access and call different functions based on an index or specific conditions.*/

// pyramid printing code in c:
//  Online C compiler to run C program online
/*#include <stdio.h>

int main(){
    int i,j,rows;
    printf("enter no of rows: \n");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        for(j=1;j<=rows-i;j++){
            printf(" ");
        }
        for(j=1;j<i+1;j++){
            printf("%d",j);
            }
        for(j=1;j<i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}*/
// write a program to print inverted pyramid of numbers:
/*int main(){
    int i,j,rows;
    printf("enter no of rows: \n");
    scanf("%d",&rows);
    printf("\n");
    for(i=1;i<=rows;i++){
        for(j=1;j<i;j++){
            printf(" ");
        }
        for(j=1;j<=rows+1-i;j++){
            printf("%d",j);
        }
        for(j=1;j<=rows-i;j++){
            printf("%d",j);
        }printf("\n");
    }
    return 0;
}*/
// to printf  diamond pattern
/*int main(){
    int i,j,rows;
    printf("enter rows: \n");
    scanf("%d",&rows);
    printf("\n");
    for(i=1;i<=rows;i++){
        for(j=1;j<=rows-i;j++){
                printf(" ");
        }
        for(j=1;j<i+1;j++){
            printf("%d",j);
        }
        for(j=1;j<i;j++){
            printf("%d",j);
        }printf("\n");
    }
    for(i=1;i<=rows;i++){
        for(j=1;j<i;j++){
            printf(" ");
        }
        for(j=1;j<=rows+1-i;j++){
            printf("%d",j);
        }
        for(j=1;j<rows-i+1;j++){
            printf("%d",j);
        }printf("\n");
    }
    return 0;
}*/
// diamond properly printed
/*int main(){
    int i,j,rows;
    printf("enter rows: \n");
    scanf("%d",&rows);
    printf("\n");
    for(i=1;i<=rows;i++){
        for(j=1;j<=rows-i;j++){
                printf(" ");
        }
        for(j=1;j<i+1;j++){
            printf("%d",j);
        }
        for(j=1;j<i;j++){
            printf("%d",j);
        }printf("\n");
    }//inverted loop
    for(i=1;i<=rows-1;i++){
        for(j=1;j<=i;j++){
            printf(" ");
        }
        for(j=1;j<=rows-i;j++){
            printf("%d",j);
        }
        for(j=1;j<rows-i;j++){
            printf("%d",j);
        }printf("\n");
    }
    return 0;
}*/
// diamond properly printed  stars
/*int main(){
    int i,j,rows;
    printf("enter rows: \n");
    scanf("%d",&rows);
    printf("\n");
    for(i=1;i<=rows;i++){
        for(j=1;j<=rows-i;j++){
                printf(" ");
        }
        for(j=1;j<i+1;j++){
            printf("*");
        }
        for(j=1;j<i;j++){
            printf("*");
        }printf("\n");
    }//inverted loop
    for(i=1;i<=rows-1;i++){
        for(j=1;j<=i;j++){
            printf(" ");
        }
        for(j=1;j<=rows-i;j++){
            printf("*");
        }
        for(j=1;j<rows-i;j++){
            printf("*");
        }printf("\n");
    }
    return 0;
}*/

/*int main() {
    file*ptr=NULL;
    //to read a single char from string
    ptr=fopen("myfile.txt","r");
    char c=fgetc(ptr);
    printf("the character which i reads is:  %c",ptr);
    //to read multiple char form string
    char str[4];
    fgets(str,5,ptr);
    printf("the string is: %s\t",str);
    fclose(ptr);
    //to write  char or string in file
    ptr=fopen("myfile.txt",w+);
    fputc('A',ptr);
    fputc("I am WANNA BE YOURS ",ptr);
    fclose(ptr);
    return 0;
}*/
/*int main(int argc,char const*argv[]){
    printf("the val of argv is : %d\n",argc);
    for (int i=0;i<argc;i++){
        printf("the argument at index number is %d and has a value of %s\n",i,argv[i]);
    }
    return 0;
}*/
// satring manipulation
/*void func(char str[]);
void func1(char str[]);
void func2(char str[]);
int main(){
    char str[100];
    printf("enter a string: \n");
    scanf("%s",str);
    printf("string in uppercase: \n");
    func(str);
       printf("strinf in lowercase: \n");
   func1(str);
   printf("the occurance of each charac in string : \n");
   func2(str);
    return 0;
}

void func(char str[]){
      char str1[100];

    int len =strlen(str);
    for(int i=0; str[i] != len;i++)
    { str1[i]=toupper(str[i]);
    }
        printf("%s\n",str1);

}
void func1(char str[]){
     char str1[100];
    int len =strlen(str);
    for(int i=0; str[i] != len;i++){
     str1[i]=tolower(str[i]);
    }
        printf("%s\n",str1);
}*/
// write a program to calculalte the factorial
//  4!= 4*3*2*1
/*int fact(int n,int i){
    n=n*(n-i);
    return n;
}
int main(){
    int i,n,fact=1;
    printf("enter number: \n");
    scanf("%d",&n);
     for (i = 1; i <= n; i++) {
    fact *= i;}
    printf("%d factorial is %d ",n,fact);
      return 0;
}*/
/*int main() {
    int j,i,arr[5];
    printf("enter elements: \n");
    for(i=0;i<5;i++){
        //declared size i<5
        scanf("%d",&arr[i]);
    }

  for(i=0;i<4;i++){
      for(j=0;j<4-i;j++){
          if(arr[j]>arr[j+1]){
              int temp=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;
          }
      }
  }
  printf("the sorted  elements are: \n");
    for(i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }
  return 0;
}*/
/*int main(){
    char str[456];
    printf("enter str: \n");
    scanf("%s",&str);
    int n =strlen(str);
    printf("%d\n",n);
     for (int i = 0; str[i]!='\0'; i++) {
        printf("The ASCII value of %c is: %d\n",str[i],(int)str[i]) ;
    }

    return 0;
}*/
#include <stdio.h>
#include <math.h>
#include <string.h>
void prime(int n);
int main()
{
    int n;
    printf("enter a num: \n");
    scanf("%d", &n);
    printf("the given num is  \n");
    prime(n);
    return 0;
}
void prime(int n)
{
    int i, j = 0;
    if (n == 0)
    {
        printf("zero is not considered to be prime");
    }
    else if (n == 1)
    {
        printf("No, 1 is not considered a prime number ");
    }
    else if (n > 1)
    {
        for (i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                j++;
                break;
            }
        }
        if (j > 0)
        {
            printf("given num %d is not prime", n);
        }
        else
        {
            printf("given  num %d is prime", n);
        }
    }
}
/*int  prime(int n){
   if(n<=1){
       return 0;
   }

       for (int i=2;i<sqrt(n);i++){
           if(n % i == 0)
           return 0;
       }
       return 1;
};
int main(){
    int count=0;
    int a,num=2;
     printf("enter limit : \n");
     scanf("%d",&a);
     while(count <= a){
         if(prime(num)){
             printf("%d\t",num);
             count++;
         }
         num++;
     }
    return 0;
}*/
// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

/*struct student{
    int mark;
    char name[50];
    char fav_char;
    int id;
};
int main() {
   struct student s1;
   s1.id =23;
   s1.fav_char='A';
   strcpy(s1.name,"abhi");
   s1.mark=98;
  printf("the fave char is: %c\n",s1.fav_char);
   printf("name is :%s\n",s1.name);
   printf("the marks are :%d\n",s1.mark);
   printf("id is :%d",s1.id);
    return 0;}*/
// incase of union it considers last declarations and corrupts other values,it menas only one value which is written at last is consider valid and other's return the garbage value;
/* union student{
   int id;
   int marks;
   char name[40];
   char sec;
   char sub[30];
 };
 int main(){
     union student s1;
     s1.id=2;      //it corrupts other vlaues while printing keeping last one as it is thus sharing one location and limited memory
     s1.marks=97;
     strcpy(s1.name,"abhishek");
     s1.sec='P';
     strcpy(s1.sub,"maths");
   printf("name is: %s\n",s1.name);
     printf("%c\n",s1.sec);
      printf("%d are marks\n",s1.marks);
     printf("id is : %d\n",s1.id);

     printf("%s is sub\n",s1.sub);
     return 0;
 }*/

/*int main() {
    int n,temp,i,arr[100];
    printf("input size : ");
    scanf("%d",&n);
    printf("the size of arr is  : %d\n",n);
    printf("enter the number in an arr: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("before reversal: \n");
    for(i=0;i<n;i++){
    printf("%d\n",arr[i]);}
   for(i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    printf("after reversal:\n ");
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}*/

/*void revstrr(char arr[],int len);
int main(){
    char temp[100],str[100];
    int i,j,len;
    printf("enter a string: ");
    scanf("%s",&str);
   len=strlen(str);
  //  printf("%d",len);
   // printf("%s",s1);
//   for(i=len-1,j=0;j<i;j++,i--){
//         temp==str[i];
//         str[j]==str[i];
//         str[i]==temp;
//     }
//      for (i = 0, j = len - 1; i < j; i++, j--) {
//         char temp = str[i];
//         str[i] = str[j];
//         str[j] = temp;}
        revstrr(str,len);
   printf("after reversing string : %s",str);
    return 0;
}
void revstrr(char str[],int len){
   int i,j;
     for(j=0,i=len-1;j<i;j++,i--){
           char temp = str[j];
            str[j] = str[i];
            str[i] = temp;}
          //printf("%s",str);

}*/
// Define a structure representing a student with attributes like name, roll number, and marks. Write functions to:

// Input student details
//  Display student details
//  Calculate the average marks of students in an array of structures.   qustiontobecompleted
/*int stu(int marks);
struct student{
    char name[40];
    int roll;
    int marks[50];
    char sec;
};
int main(){
    int i;
    struct student s1;
    s1.name;
    s1.roll;
    s1.marks;
    printf("name of student :");
    scanf("%s",&s1.name);
    printf("enter details:\n");
    printf("enter roll call :");
    scanf("%d",&s1.roll);    //less than 5 as marks of 5 subject
    printf("enter your marks: \n");
    for(i=0;i<5;i++){
        scanf("%d",&s1.marks);
    }
    for(i=0;i<5;i++){
        printf("marks of sub%d is : %d \n",i,s1.marks[i]);
    }
   //  printf("name of stud is :%s\n",s1.name);
  //  printf("roll call of stu is : %d\n",s1.roll);

    return 0;
}*/
// Write a function to search for a specific element in an integer array and return its index if found, otherwise return -1.

/*int ind();
int main(){
    int i,n,n1,arr[50];
    int index=0;
    printf("input a size of arr: ");
    scanf("%d",&n);
    printf("the num in an arr : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        printf("the num  is : %d\n",arr[i]);
    }
    printf("enter a num you want to search: ");
    scanf("%d",&n1);
    for(i=0;i<n;i++){
        if(arr[i]== n1){
            printf("the index %d num match is:%d\n ",i,arr[i]);
            index++;
        }
    }printf("%d \n",index);
    if(index==0){
        printf("arr didnt match!\n");
    }
    else {
        printf("arr match & ind incremented! ");
    }
    return 0;
}*/
/*int incre(int arr[],int n,int n1);
int main(){
  int i,n,n1,arr[50],ind=0;
  printf("enter size: \n");
  scanf("%d",&n);
  printf("enter the arr no: \n");
  for(i=0;i<n;i++){
      scanf("%d",&arr[i]);
  }
  printf("enter the num: \n");
  scanf("%d",&n1);

  ind = incre(arr,n,n1);
  if(ind != 0){
  printf("the index is: %d",ind);
  }
  else{
      printf("none index matched !");
  }
  return 0;
}
int  incre(int arr[],int n,int n1){
  int i,index;
  for(i=0;i<n;i++){
      if(arr[i] ==n1){
          index = i;
      }
  }
  return index;
}*/

/*int main(){
    int arr[2][3]={{2,3,5},{1,6,7}};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
        printf("%d\t",arr[i][j]);}printf("\n ");}
    return 0;
}*/
/*int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/
// Write a C program to count occurrences of a word in a given string
/*int main(){
    char str[100];
    fgets(str,str[99],stdin);
    printf("%s",str);
    return 0;
}*/
#include <stdio.h>
/*void reverse(int arr[]){
    for(int i=0;i<5/2;i++){
    int temp = arr[i];
    arr[i] = arr[5-i-1];
    arr[5-i-1] = temp;

    }
}
void arrprint(int arr[]){
    for(int i;i<5;i++){
        printf("the val at %d is : %d\n",i,arr[i]);
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    printf("before reversing the arr: \n");
    arrprint(arr);
    printf("after reversing the arr:\n ");
    reverse(arr);
    arrprint(arr);
    return 0;
}*/
/*void arrayRev(int arr[])
{
    int temp;
    for (int i = 0; i < 5/2; i++)
    {
        //swap item arr[i] with arr[6-i]
        temp = arr[i];
        arr[i] = arr[5-i-1];
        arr[5-i-1] = temp;
    }
}

void arrayPrint(int arr[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("The value of element %d is %d\n", i, arr[i]);
    }
}
int main()
{
    int arr[] = {1,2,3,4,5};
    printf("Before reversing the array\n");
    arrayPrint(arr);
    arrayRev(arr);
    printf("\nAfter reversing the array\n");
    arrayPrint(arr);


    return 0;
}*/
/*int b= 500;
int a=11;
int func(int a){//local variable has more precedence than global variable if it is available;
     //printf("\nthe val of b global var is : %d\n", b);
     //  pritf("the adress of a is insude func is : %d\n",&a);
    //  printf("the val of a inside func is : %d\n", a);
    static int var= 10;
    printf("the val of my var is: %d\n",var);
        var++;
        return a*var;
}
int main(){
    //int b= func(b);
    int a=10;
  //  printf("the val of a is : %d\n", a);
 //   printf("the adress of a outside fun is : %d\n", &a);
    int val=func(a);
    int *ptr = &val;
   printf("the val is %d\n",val);
   for(int i=0;i<3;i++){
    val=func(a);
   printf("the val is : %d\n",val);}
    return 0;
}*/

/*int main(){
    char string[] ="<h1> this is a heading </h1>";
    parser(string);
    return 0;
}*/
/*
You manage a travel agency and you want your n drivers to input their following details:
1. Name
2. Driving License No
3. Route
4. Kms
Your program should be able to take n as input(or you can take n=3 for simplicity) and your drivers will start inputting their details one by one.

Your program should print details of the drivers in a beautiful fashion.
User structures.
*/
/*struct driver{
        char name[50];
        int lic_no;
        char route[50];
        int km;
    };
int main(){
    int i,n;
    char arr[40];
    printf("enter the no.of drivers you want to input the info: ");
    scanf("%d",&n);
    struct driver s1;
    s1.name;
    s1.lic_no;
    s1.route;
    s1.km;
     for(i=0;i<n;i++){
    printf("enter drivers name: \n");
    scanf("%s",&s1.name);
    printf("enter the lic_no: \n");
    scanf("%d",&s1.lic_no);
    printf("enter your route: \n");
    scanf("%s",&s1.route);
    printf("enter the distance covered: \n");
    scanf("%d",&s1.km);
     }
    for(i=1;i<=n;i++){
       printf("%d. driver's name is:     :%s\n",i,s1.name);
       printf("%d. driver's lic_no is:   :%d\n",i,s1.lic_no);
       printf("%d. driver's route is     :%s\n",i,s1.route);
       printf("%d. driver's dis.cover.is :%d\n",i,s1.km);
    }printf("\n");
    printf("\nis info alright? : \n");
    scanf("%s",&arr);
    if(strcmp(arr,"yes")==0){
        printf("\ndata fetch successful!\n");

    }
    else{
        printf("reenter the info..");
    }
    return 0;
}*/
/*int main(){
    int n,i,*ptr;
    printf("enter the size of arr you want to enter: ");
    scanf("%d",&n);
    ptr =(int*) malloc(n*sizeof(int));
    for(i=1;i<n;i++)
    {//similar can be dont with the help of calloc
        printf("enter the value no %d of arr :",i);
        scanf("%d",&ptr[i]);
    }//it loop size exceeds then it returns the garbage values
    for(i=1;i<n;i++){
        printf("val is: %d\n",ptr[i]);
    }
    return 0;
}*/
// using calloc
/*int main(){
    int i,n,*ptr;
    printf("enter the size of arr: ");
    scanf("%d",&n);
     ptr=(int*)calloc(n,sizeof(int));
     for (i=1;i<=n;i++){
         printf("enter %d no : ",i);
         scanf("%d",&ptr[i]);
     }
     for(i=1;i<=n;i++){
         printf("the num is: %d\n",ptr[i]);
     }
     free(ptr);//frees the memory runtime and makes it available for further use
    return 0;
}*/
/*int main(){
    int i,n,*ptr;
    printf("enter the size of arr: ");
    scanf("%d",&n);
     ptr=(int*) realloc(ptr, n*sizeof(int));
     for (i=1;i<=n;i++){
         printf("enter %d no : ",i);
         scanf("%d",&ptr[i]);
     }
     for(i=1;i<=n;i++){
         printf("the num is: %d\n",ptr[i]);
     }//realloc needs to be reviewed
    return 0;
}*/
// rock,paper,scissor game to be modified eith the help of functions and boolean logic!!
/*int main() {
    int rounds,j,n,i,k=1;
    int u=0;
        int c=0;

    //define user points and compoints before game starts and increase them after each rounds and declare the winner
    char rnd[3];
    printf("rules of game: 0.stone 1.paper 2.scissor\n");
    printf("enter the no of rounds you want to play: \n");
    scanf("%d",&rounds);
    //ask user if he want to play more rounds or terminate the program if he wants to exit
     while(rounds>=k){
         printf("enter your choice: \n");
         scanf("%d",&n);
         if(n<3){
           j=rand()%3;
           printf("computer's choice is: %d\n",rand()%3);
           if(n==0 && j==1){
               printf("you lost!");
               c++;
           }
           else if(n==0 && j==2){
               printf("you won!\n");
              u++;
           }
           else if(n==1 && j==0){
               printf("you won!\n");
               u++;
           }
           else if(n==1 && j==2){
               printf("you lost!\n");
               c++;
           }
           else if(n==2 && j==0){
               printf("you lost!\n");
               c++;
           }
           else if(n==2 && j==1){
               printf("you won!\n");
               u++;
           }
           else if( n==j){
               printf("it's a tie\n");
           }
             else{
         printf("\ninvalid input!\n");
    }
             }
             k++;
     }
     printf("\nuser points: %d\n",u);
     printf("\ncomputer points: %d",c);
     if(u>c){       //declaring total points
         printf("\nuser won!!!!\n");
     }
     else{
         printf("\ncomputer won!!!\n ");
     }
     printf("do you want to play other round (y/n)? : \n");
     scanf("%s",&rnd);
   if(strcmp(rnd,"yes")==0){
         printf("\nstart over!\n");
         printf("how many rounds u wants to play: \n");
         scanf("%d",&rounds);
     }
     else if(strcmp(rnd,"no")==0){
              printf("\nthe game is over now! \n ");
     }
     printf("\tthanks for playing!!..\n");
    return 0;
    //modification in program == when user want to play more rounds after saying yes it ask again no of rounds play and the game stats again
}*/
// using void pointer
/*int main(){
    int d,a=5;      //(*(int*)ptr)
    float b=3.5;
    char c='r';
 //   void *ptr2=&a;
   // void *ptr1=&b;
    //void *ptr=&c;
    //using null pointer
    int *ptr=NULL;
    if(ptr !=NULL){
    printf("the addres of a is : %d ",ptr);}
    else{
        printf("its is null pointer cant be derferenced!!");
    }
 //   printf("the val of a is : %d\n",(*(int*)ptr2));
   // printf("the val of a b is: %f\n",(*(float*)ptr1));
    //printf("the value of c is: %c\n",(*(char*)ptr));

//    printf("the address of a is :%d",ptr);
    return 0;
}*/
// print 2d and 3d array
/*int main(){
    int rows,columns,i,j,mat[10][10];//={{0,1},{2,3}};
    printf("The rows and column should be equal for mat multiplication: \n");
    printf("define the rows of the matrix: ");
    scanf("%d",&rows);
    printf("define the columns of matrix: ");
    scanf("%d",&columns);
   if(rows==columns){
       printf("enter the first matrix\n");
    for(i=1;i<=rows;i++){
        for(j=1;j<=columns;j++){
    printf("enter no:");
        scanf("%d",&mat[i][j]);
        }
    }
    //the val at each of the mat location
    //  for(i=1;i<=rows;i++){
      //  for(j=1;j<=columns;j++){
     //printf("the val at %d of rows and %d columns is : %d\n",
       //     i,j,mat[i][j]);}
    for(i=1;i<=rows;i++){
        for(j=1;j<=columns;j++){
            printf("%d\t",mat[i][j]);
        }printf("\n");
    }
   }
    else{
        printf("matrix multi is not possible\n");
            }
    return 0;
}*/
/*void take(int mat[3][3]){
    int i,j;
       for(i=0;i<3;i++){
       for(j=0;j<3;j++){
           printf("element :  ");
           scanf("%d",&mat[i][j]);
       }
       }
}
void display(int(*mat)[3]){
    int i,j;
    for(i=0;i<3;i++){
       for(j=0;j<3;j++){
           printf("%d\t",*(*mat+i)+j);
       }printf("\n");
   }
}
int main(){
    int i,j,mat[3][3];
    printf("enter the elements of the arr: \n");
    take(mat);
   printf("the matrices is : \n");
   display(mat);
   return 0;
}*/
/*int main(){
    int d,a=5;      //(*(int*)ptr)
    float b=3.5;
    char c='r';
 //   void *ptr2=&a;
   // void *ptr1=&b;
    //void *ptr=&c;
    //using null pointer
    int *ptr=NULL;
    if(ptr !=NULL){
    printf("the addres of a is : %d ",ptr);}
    else{
        printf("its is null pointer cant be derferenced!!");
    }
 //   printf("the val of a is : %d\n",(*(int*)ptr2));
   // printf("the val of a b is: %f\n",(*(float*)ptr1));
    //printf("the value of c is: %c\n",(*(char*)ptr));

//    printf("the address of a is :%d",ptr);
    return 0;
}*/
// print 2d and 3d array
/*int main(){
    int rows,columns,i,j,mat[10][10];//={{0,1},{2,3}};
    printf("The rows and column should be equal for mat multiplication: \n");
    printf("define the rows of the matrix: ");
    scanf("%d",&rows);
    printf("define the columns of matrix: ");
    scanf("%d",&columns);
   if(rows==columns){
       printf("enter the first matrix\n");
    for(i=1;i<=rows;i++){
        for(j=1;j<=columns;j++){
    printf("enter no:");
        scanf("%d",&mat[i][j]);
        }
    }
    //the val at each of the mat location
    //  for(i=1;i<=rows;i++){
      //  for(j=1;j<=columns;j++){
     //printf("the val at %d of rows and %d columns is : %d\n",
       //     i,j,mat[i][j]);}
    for(i=1;i<=rows;i++){
        for(j=1;j<=columns;j++){
            printf("%d\t",mat[i][j]);
        }printf("\n");
    }
   }
    else{
        printf("matrix multi is not possible\n");
            }
    return 0;
}*/
/*void take(int mat[3][3]){
    int i,j;
       for(i=0;i<3;i++){
       for(j=0;j<3;j++){
           printf("element :  ");
           scanf("%d",&mat[i][j]);
       }
       }
}
void display(int(*mat)[3]){
    int i,j;
    for(i=0;i<3;i++){
       for(j=0;j<3;j++){
           printf("%d\t",*(*(mat+i)+j));
       }printf("\n");
   }
}
int main(){
    int i,j,mat[3][3];
    printf("enter the elements of the arr: \n");
    take(mat);
   printf("the matrices is : \n");
   display(mat);
   printf("the mutiplication of matrices is: \n");
   return 0;
}*/
/*int main() {
    printf("The program was compiled on %s at %s\n", __DATE__, __TIME__);
    return 0;
}*/
/*int main(){
      printf("time is %s \n& date is %s \nthe current line is %d\n",__TIME__,__DATE__,__LINE__);
    printf("the name of file is:{ %s }\n",__FILE__);
    printf("ANSI:  %d",__STDC__);
    return 0;
}*/

/*int main(){
    int k,i,j,mat[3][3];
    int sum,mat1[3][3];
    int result[3][3];
    printf("enter element of mat: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("the val %d%d is: \n",i,j);
          scanf("%d",&mat[i][j]);
        }
    }
    printf("\n");
    printf("enter element of mat1: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("the val %d%d is:\n",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("\nthe element of mat are:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",mat[i][j]);
        }printf("\n");
    }
    printf("\nthe element of mat1 are:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",mat1[i][j]);
        }printf("\n");
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                sum +=mat[i][j]*mat1[k][j];
            }
            result[i][j]=sum;
            sum=0;
        }
    }
    printf("\nthe mat multiplication is: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d \t",result[i][j]);
        }printf("\n");
    }
    return 0;
}*/
// Simple Calculator: Develop a basic calculator that can perform addition, subtraction, multiplication, and division on two user-provided numbers.
/*int a,b;
/*int a,b;
void add(){
    int sum;
    printf("enter 1st no: \n");
    scanf("%d",&a);
    printf("enter 2nd no: \n");
    scanf("%d",&b);
    sum=a+b;
    printf("sum of given num is: %d\n",sum);
}
void sub(){
    int diff;
    printf("enter 1st no: \n");
    scanf("%d",&a);
    printf("enter 2nd no: \n");
    scanf("%d",&b);
    diff=b-a;
        printf("difference of given num is: %d\n",diff);
}
void prod(){
    int prod;
     printf("enter 1st no: \n");
    scanf("%d",&a);
    printf("enter 2nd no: \n");
    scanf("%d",&b);
    prod= a * b;
            printf("product of given num is: %d\n",prod);
}
void divide(){
    float divi;
     printf("enter 1st no: \n");
    scanf("%d",&a);
    printf("enter 2nd no: \n");
    scanf("%d",&b);
    divi=a/b;
            printf("divident is: %d\n",divi);
}
int main(){

     char response[10],calc[10];
     int i=0;
     do{
     printf("what calculation you wanna perform?\n");
     scanf("%s",&calc);
    if(strcmp(calc,"addition")==0){
        add();

    }
    else if(strcmp(calc,"subtract")==0){
        sub();
            }
    else if(strcmp(calc,"multiply")==0){
        prod();
    }
    else if(strcmp(calc,"division")==0){
        divide();
    }

    else {
        printf("invlaid operation entered!!\n");
    }
           printf("calculate more(Y/N): \n");
      scanf("%s", &response);

      if (strcmp(response ,"Y")==0) {
      continue ;
      // Reset the loop counter
      }
      else if (strcmp(response , "N")==0) {
      printf("\nThanks for using the calculator!\n");
      break;
      // Exit the loop
      }
      else {
      printf("\nInvalid response!!!\n");
      }
    }
     while(1);
  printf("\nprogram ended!!\n");
    return 0;
}*/

// Problem: Write a program that reads a matrix from the user, calculates its transpose (elements flipped along the main diagonal), and displays the transposed matrix.
/*int main(){
    int i,j,mat[3][3];
    printf("enter the mat: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("the val at %d%d is : ",i,j);
                scanf("%d",&mat[i][j]);
        }
    }
    printf("\nthe matrices is: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",mat[i][j]);
        }printf("\n");
    }
    printf("the transpose of the matrix: \n");
        for(i=0;i<3;i++){
            for(j=0;j<3;j++)
        //tp print the transpose of mat just reverse [i][j]=[j][i]
       printf("%d\t",mat[j][i]);
            }printf("\n");
        }
        return 0;
}*/
// Number Guessing Game with Difficulty Level
/*  int main(){
       int n,i,k,j=0;
       printf("program to guess a number: \n");
       printf("how many chances you want to : \n");
       scanf("%d",&k);
       do{printf("Guess a num (1-100): \n");
       scanf("%d",&n);
       i= rand()%100;
       printf("%d\n",i);
       if(n>i){
           printf("guess is high!\n");
           k--;
       }
       if(n<i){
           printf("guess is lower than it should!! \n ");
           k--;
       }
        if(n==i){
            printf("guess is right!!\n");
            break;
        }

       }while(j<k);
       printf("\nhope you enjoyed it\n");
       return 0;
   }*/
/*int main(){
 int det,i,j,mat[2][2];
 printf("enter 2*2 matrices:  \n");
 for(i=0;i<2;i++){
     for(j=0;j<2;j++){
         printf("the val of %d%d is : \n",i,j);
         scanf("%d",&mat[i][j]);
 }
 }
 for(i=0;i<2;i++){
     for(j=0;j<2;j++){
         printf("%d\t",mat[i][j]);
     }printf("\n");
 }
 printf("\nthe determinant of mat is: \n");
 //alternative apprach simloper one
 //      det=mat[0][0]*mat[1][1]-mat[0][1]*mat [1][0];
       //           printf("%d",det);
 for(i=0;i<1;i++){
     for(j=0;j<1;j++){
   det=mat[0][0]*mat[1][1]-mat[0][2]*mat [1][0];
       // det=mat[i][j]*mat[i+1][j+1]-mat[i][j+1]*mat[i+1][j];
        printf("%d",det);
     }
     }
 return 0;
}*/
// Develop a program that checks if a string is a palindrome (reads the same backward as forward).
/*void reverse(char str[]){
  int   len=strlen(str);
  for(int i=0;i<len/2;i++){
        char temp=str[i];
        str[i]= str[len-i-1];
        str[len-i-1]=temp;
    }
}
int main(){
    char str1[50],palin[50],str[50];
    int i,j;
    printf("enter the str: ");
    scanf("%s",&str);
    strcpy(str1,str);
   // printf("\n%s\n",str1);
  //  len=strlen(str);
  //  printf("%d\n",len);
  printf("reversed string is: \n");
  reverse(str);
//   for(i=0;i<len/2;i++){
//         char temp=str[i];
//         str[i]= str[len-i-1];
//         str[len-i-1]=temp;
//     }
//     for(i=0,j=len;i<=j;i++,j--){
//         char temp= str[i];
//         str[i]=str[j-1];
//         str[j-1]=temp;

//          }
    printf("%s",str);
    strcpy(palin,str);
  //  printf("\n%s",palin);
    if(strcmp(str1,palin)==0){
        printf("\nentered string is  palindrome\n");
    }
    else{
        printf("\nstring is not a palindrome!!!\n");
    }
    return 0;
}*/
/*int main(){
    char str[100],str1[100],str2[100];
    int i;
  printf("enter the first string: \n");
   //  source_string[strcspn(source_string, "\n")] = '\0';
    scanf("%s",&str);
       str[strcspn(str,"\n")] !='\0';
    strcpy(str2,str);//  strcpy(destination,source);
    for(i=0;str[i]!='\0';i++){
        str1[i]=str[i];
    }
    str1[i] ='\0';   //null-terminating the destination string;
    //by this copy data of one fie and paste into another

//   str2(str,str1);
   printf("copied str: %s\n",str1);
   printf("copied str: %s\n",str2);
    return 0;
}*/
