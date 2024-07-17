#include <stdio.h>
/*int main(){
    int a = 5 ,b =10 ,c;
    int *ptr = &a  ;
    int *ptr1 = ptr ;
    b = *ptr ;
    c = *ptr1 ;
 //   int c  =*ptr;
  //int c=0 ;
    printf("%d\n",b);
    printf("%d",c);
        //printf("%d",*(*(&ptr1)));
 //   printf("%d\n",&a);
   //     printf("%x\n",&a);
     //   printf("%d\n",*(&a));
    //printf("%d\n",*ptr);
    //printf("%d\n",*(ptr1));
    return 0;
}*/
// find greatest using arr
/*void max (int arr[],int size){
    int maxi =  0  ;
    for(int i=0 ; i<size ; i++){
        if(maxi < arr[i]){
            maxi = arr[i];}
    }
    printf("%d",maxi);
}
int main(){
    int size  = 5 ;
    int arr[size];
    for(int i=0 ;i<size ;i++){
        scanf("%d",&arr[i]);
    }
    max(arr,size);

    return 0;
}*/
/*struct stu{
        int id ;
        int roll_call;
        char fav_car ;
};
int main(){
    struct stu abhi ,abhishek ;
    abhi.id = 5  ;
    abhishek.id  = 10 ;
    abhi.fav_car = 'A'  ;
    abhishek.fav_car   = 'B'    ;
    printf("abhi's id : %d\n",abhi.id);
    printf("Abhi's roll_call : %d ", abhishek.id);
    return 0;
}*/
// non parameterised function is function which does not take any argument when it is called
/*void hello(){
    printf("It's plaeasure meeting you miss.Ana");
}
int main(){
    printf("hello\n ") ;
    printf("hi ");
   hello();
   return 0;
}*/
/*int sum(int a ,int b){
   return a+b ;
}
int main(){
    int a,b ;
    scanf("%d %d",&a,&b);
    printf("sum is : ");
    int c  = sum(a,b);
    printf("%d",c);
    return 0;
}*/
// write a function program to convert km into metre
// 1km=1000m

/*int km_to_mtr(float k){
    return k * 1000 ;
}
int main(){
    float km ;
    printf("Enter dist in km : ");
    scanf("%f",&km) ;
    printf("Dist in mtr : %d",km_to_mtr(km));
    return 0;
}*/

// create an array of struture
/*struct car {
    float price ;
    int mileage  ;
    char name[10];
};
int main(){
    struct car c[3];
    for(int i=0 ; i <3; i++){
        printf("enter detailes of car %d\n", i+1) ;
        printf("Enter the price(in ml) : ");
        scanf("%f",&c[i].price) ;
        printf("Enter the Mileage of car :") ;
        scanf("%d", &c[i].mileage);
        printf("enter the name of car : ") ;
        scanf("%s",&c[i].name) ;
        printf("\n");
    }
    printf("\n");
    for(int i=0 ;i<3;i++){
        printf("Details of car %f\n",i+1) ;
        printf("Price of Car %d is : %d\n", i+1 ,c[i].price );
        printf("Mileage of car %d is : %d\n ",i+1,c[i].mileage);
        printf("Name of car %d is : %s\n",i+1, c[i].name );
        printf("\n");
    }
    return 0;
}*/
// to reverse an integer in c
// to reverse a number we need to access each digit of number, storing it arr in reverse order and thereby printing array of integer with the help of for loop
/*void  reverse(int n)
{
    int digit ,arr[10] ,k=0 ;
    while (n>0){
        digit  = n %10 ;
        arr[k] = digit ;
        n = n/10 ;
        k++;
    }
     for(int i= 0 ;i<k;i++){
         printf("%d",arr[i]) ;
     }
}

int main(){
    int n  ;
    printf("Enter a number : ") ;
    scanf("%d",&n) ;
    printf("The reversed number is : ");
    reverse(n) ;
    return 0;
}*/
// write a code to store information of 5 student and display it according to user search
/*struct student {
    int roll_call;
    int  marks[3] ; //storing marks of three subject respectively
    char name[10] ;
} ;
int main(){
    struct student s[5] ;
       for(int i=0 ;i<5 ; i++){
           printf("Enter the details of Studnet %d \n",i+1) ;
           printf("Enter the rollcall  :") ;
           scanf("%d",&s[i].roll_call) ;
           printf("Enter marks of phy,chem,maths respectively : ") ;
           for(int j=0 ;j<3;j++){
               scanf("%d",&s[i].marks[j]) ;
           }
           printf("Enter the name of student  : ") ;
           scanf("%s" ,s[i].name);
           printf("\n") ;
       }
       printf("Enter the roll-call to see details : ") ;
       int key,flag=0  ,index   ;
       scanf("%d",&key) ;
       for(int i=0 ; i <5 ; i++){
           if(s[i].roll_call  == key){
               flag  =  1  ;
               index  = i  ;
               break ;
           }
       }
       if(flag  == 1 ){
           printf("Roll_call of student is : %d\n",s[index].roll_call) ;
           for(int i=0 ;i<3;i++){
           printf("marks are  : %d\n",s[index].marks[i]);
           }
           printf("The name of student is : %s\n",s[index].name) ;
       }
       else{
           printf("Invalid roll call is entered !") ;
       }
    return 0;
}*/
// designated initialization of an array

/*int main(){
    int arr[15] = {[5] = 6 ,35,[11]=3,6,[9]=1};
    for(int i=0 ;i<15;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}*/
// unions in c
/*union vb{
    int a ;
    char b ;
};
int main(){
 union vb var ;
 var.a = 66;
    printf("a = %d\n",var.a) ;
    printf("b = %c",var.b);
    //    printf("%d",sizeof (union vb));
    return 0;
}*/
// typedef with structure
/*typedef struct student {
    int rollcall ;
    int marks ;
}stu ;
int main(){
     stu s1;
    s1.rollcall = 2  ;
    printf("%d",s1.rollcall);
    return 0;
}*/
/*union var
{
   int a  ;
   char b  ;
}   ;
int main(){
  union var v1;
  v1.a = 90 ;
  union var *ptr  = &v1   ;
  printf("%c ",v1.b);
  printf("%d",ptr->a);
   return 0;
}*/
// swapping two number using call by value and call by reference
// call by value
/*void swap(int x ,int y ){
    int temp;
    temp  = x ;
    x  =y  ;
    y  = temp  ;
    printf("x= %d \ny= %d\n ",x,y);
}
int main(){
    int x=5,y=10;
    printf("values before swapping \n");
    printf("x= %d \ny= %d ",x,y);
        printf("values after swapping \n");
        swap(x,y);
    return 0;
}*/
// call by reference
/*void swap(int *ptr1,int *ptr2 ){
    int temp  = *ptr1 ;
    *ptr1 = *ptr2 ;
    *ptr2  = temp ;
}
int main(){
    int x  = 5  , y = 10 ;
        printf("values before swapping \n");
    printf("x= %d \ny= %d \n",x,y);
        printf("values after swapping \n");
  swap(&x,&y);
      printf("x= %d \ny= %d ",x,y);

return 0;
}*/
/*#include <stdio.h>

//designated initialization of an array

 /*int main(){
     int arr[15] = {[5] = 6 ,35,[11]=3,6,[9]=1};
     for(int i=0 ;i<15;i++){
         printf("%d\t",arr[i]);
     }
     return 0;
 }*/
// unions in c
/*union vb{
    int a ;
    char b ;
};
int main(){
 union vb var ;
 var.a = 66;
    printf("a = %d\n",var.a) ;
    printf("b = %c",var.b);
    //    printf("%d",sizeof (union vb));
    return 0;
}*/
// typedef with structure
/*typedef struct student {
    int rollcall ;
    int marks ;
}stu ;
int main(){
     stu s1;
    s1.rollcall = 2  ;
    printf("%d",s1.rollcall);
    return 0;
}*/
/*union var
{
   int a  ;
   char b  ;
}   ;
int main(){
  union var v1;
  v1.a = 90 ;
  union var *ptr  = &v1   ;
  printf("%c ",v1.b);
  printf("%d",ptr->a);
   return 0;
}*/
// swapping two number using call by value and call by reference
// call by value
/*void swap(int x ,int y ){
    int temp;
    temp  = x ;
    x  =y  ;
    y  = temp  ;
    printf("x= %d \ny= %d\n ",x,y);
}
int main(){
    int x=5,y=10;
    printf("values before swapping \n");
    printf("x= %d \ny= %d ",x,y);
        printf("values after swapping \n");
        swap(x,y);
    return 0;
}*/
// call by reference
/*void swap(int *ptr1,int *ptr2 ){
    int temp  = *ptr1 ;
    *ptr1 = *ptr2 ;
    *ptr2  = temp ;
}
int main(){
    int x  = 5  , y = 10 ;
        printf("values before swapping \n");
    printf("x= %d \ny= %d \n",x,y);
        printf("values after swapping \n");
  swap(&x,&y);
      printf("x= %d \ny= %d ",x,y);

return 0;
}*/
// without parameterised function add two number
/*void add () ;
int main()
{
    add() ;
 return 0;
}
void add(){
    int n1,n2 ;
    printf("Enter two numbers : ") ;
    scanf("%d %d",&n1 ,&n2) ;
    int addon  = n1 + n2   ;
    printf("%d",addon);
}*/
// program to dislay grade based on marks using switch case
/*int main(){

    int   grade  ;
    printf("Enter marks :  ")  ;
    scanf("%d",&grade);
    if(grade>=0 && grade<=100){
        switch(grade){
            case 91 ...100 :
            printf("A+") ;
            break ;
            case 80 ...89 :
                        printf("A") ;
                        break ;
            case 70 ...79  :
                        printf("B") ;
                                                break ;
            case 60 ...69  :
                        printf("C") ;
                                                break ;
            case 50 ...59 :
                        printf("D") ;
                                                break ;
            case 40 ...49  :
                        printf("E") ;
                                                break ;
            case 0 ...39 :
                        printf("Failed") ;
                                                break ;
              default  :
              printf("Invalid grade entered !") ;
        }
    }
    else {
                      printf("Invalid grade entered !") ;
    }
    return 0;
}*/

// to reverse a number in c  ;
/*int rev(int n ) {
     int dig  ,reverse=0;
     while (n>0){
         dig = n %10  ;
         reverse  = reverse *10 + dig  ;
         n = n /10 ;
     }
     return reverse ;
}
int main(){
    int n  ;
    printf("enter a number  :") ;
    scanf("%d",&n) ;
    printf("reversed number : %d",rev(n) );
    return 0;
}*/
/*int main(){
    int k=0 ;int n=1 ;
    //to printf 10 odd number  ;
    while (k<10){
        if (n % 2 ==0 ){
            continue ;
        }              printf("%d\t",n);

        n +=2;
                k++;

    }
    return 0;
}*/
// number divisible by 7 & 8 between 200 and 500
/*int main(){
    for(int i= 200 ; i<= 500;i++){
        if(i % 7 == 0 && i % 8 == 0){
        printf("%d\t",i);}
    }
    return 0;
}*/
/*struct student {
    char name[10] ;
    int roll_call;
    float sgpa  ;
};
int main(){
    //in order to input and display data of 20 student jusrt increase s arr size to 20
    struct student s[3] ;
    for(int i=0 ;i<3 ;i++){
        printf("Enter details of student %d\n",i+1);
        printf("Enter name : ") ;
        scanf("%s",&s[i].name) ;
        printf("Enter the rol_call of stduent : ") ;
        scanf("%d",&s[i].roll_call);
        printf("Enter sgpa of student : " );
        scanf("%f",&s[i].sgpa) ;
        printf("\n");
    }
    printf("\n");
    printf("The details of students are : \n") ;
    for(int i=0 ;i<3 ;i++){
        printf("Student's name : %s\n",s[i].name) ;
        printf("Student's roll_call  : %d\n",s[i].roll_call) ;
        printf("Student's sgpa  : %f\n",s[i].sgpa);
        printf("\n");
    }

    return 0;
}*/
/*int main(){
    int mat1[3][3],mat2[3][3],matmul[3][3] ;
    printf("enter mat1 : ") ;
    for(int i=0 ;i<3 ;i++){
        for (int j=0 ;j<3 ;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
     printf("enter mat2 : ") ;
    for(int i=0 ;i<3 ;i++){
        for (int j=0 ;j<3 ;j++){
            scanf("%d",&mat2[i][j]);
        }
    }
     printf("\n");
     printf(" mat1 is  : ") ;
    for(int i=0 ;i<3 ;i++){
        for (int j=0 ;j<3 ;j++){
            printf("%d\t",mat1[i][j]);
        }
        printf("\n") ;
    }
     printf("\n");
     printf(" mat2 is  : ") ;
    for(int i=0 ;i<3 ;i++){
        for (int j=0 ;j<3 ;j++){
            printf("%d\t",mat2[i][j]);
        }
        printf("\n") ;
    }
    for(int i=0 ;i<3 ;i++){
        for (int j=0 ;j<3 ;j++){
            matmul[i][j]=0;
           for(int k=0;k<3;k++){
               matmul[i][j] += mat1[i][k] *  mat2[k][j];
           }
        }
    }
    printf("\n");
     printf(" matmaul is  : ") ;
    for(int i=0 ;i<3 ;i++){
        for (int j=0 ;j<3 ;j++){
            printf("%d\t",matmul[i][j]);
        }
        printf("\n") ;
    }
    return 0;
}*/
struct student
{
    int roll_call;
    float cgpa;
    int marks[5];
    char name[10];
};
int main()
{
    struct student s[5]; // to get data of 5 student
    for (int i = 0; i < 5; i++)
    {
        printf("Enter detials of Sudent %d\n", i + 1);
        printf("Enter the Roll call of student : ");
        scanf("%d", &s[i].roll_call);
        printf("Enter marks of five subjects :  ");
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &s[i].marks[j]);
        }
        printf("Enter the cgpa of student : ");
        scanf("%f", &s[i].cgpa);
        printf("ENter the Name of student : ");
        scanf("%s", &s[i].name);
    }
    printf("To dislay data of student \n :");
    for (int i = 0; i < 5; i++)
    {
        printf("Details of Student %d\n", i + 1);
        printf("Studnets Roll_call : %d\n ", s[i].roll_call);
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t", s[i].marks[j]);
        }
        printf("\n");
        printf("Student's Cgpa : %f\n", s[i].cgpa);
        printf("Studnets Name  : %s\n", s[i].name);
        printf("\n");
    }
    printf("Enter the roll call to see stduents details  :\n");
    int flag = 0, rcall, ind;
    scanf("%d", &rcall);
    for (int i = 0; i < 5; i++)
    {
        if (rcall == s[i].roll_call)
        {
            flag = 1;
            ind = i;
        }
    }
    if (flag == 1)
    {
        printf("Details of Student \n");
        printf("Studnets Roll_call : %d ", s[ind].roll_call);
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t", s[ind].marks[j]);
        }
        printf("Student's Cgpa : %f", s[ind].cgpa);
        printf("Studnets Name  : %s", s[ind].name);
        printf("\n");
    }
    else
    {
        printf("No entry found of roll call : %d", rcall);
    }
    return 0;
}
