#include <stdio.h>
int main()
{
    int p = 10, q = 5;
    int *ptr1 = &p;
    printf("Address of P : %d\n", &p);
    printf("Value of P is :%d\n", *ptr1);
    printf("Address of P : %d\n ", &(*ptr1));
    printf("Adress of ptr1: %d\n", &ptr1);
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;
    printf("Value At ptr1 : %d\n", **ptr2);
    printf("Address of ptr1 : %d\n", ptr2);
    printf("Address of P : %d\n", *(&(*ptr2)));
    printf("Address of ptr1 : %d\n", ptr2);
    printf("Adress of ptr1  :%d\n", (*ptr3));
    printf("value of P  :%d\n", (*(*(*ptr3))));

    return 0;
}
