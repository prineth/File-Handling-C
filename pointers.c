#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i = 10;
    int * ptr; //pointer data type
    ptr = &i;

    printf("i = %d \n",i);
    printf("Address of i = %p \n\n",&i);


    printf("ptr = %p \n",ptr);
    printf("Address of ptr = %p \n\n",&ptr);


    //value of *ptr
    printf("*ptr = %d \n",*ptr);

    *ptr = 20;
    printf("*ptr = %d \n",*ptr);
    printf("i = %d \n",i);



    ///Strings using pointers

    char* name = "Hello";

    printf("name = %s \n\n",name);
    printf("*name = %c \n",*name); // %c -> sign/unsign character
    printf("*name+1 = %c \n",*(name+1));

    printf("%p \n",name); //pointer address
    printf("%p \n",(name+1));
    printf("%p \n\n",(name+2));

    //method 2
    char* name2 = "hello";
    printf("%s \n",name2);
    name2 = name2 + 1;
    printf("%s \n\n",name2);
}








