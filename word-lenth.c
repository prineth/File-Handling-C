#include <stdio.h>
#include <stdlib.h> /// we want this header

void main()
{
    char *name = "hello";
    printf("Lenth = %d",strln(name));

}

int strln(char *s)
{
    int count = 0;
    while(*s)
    {
        count++;
        s++;
    }
    return count;
}
