#include<stdio.h> 
void main()
{
int p = 3;
int *ptr = &p;
free(ptr);
*ptr = 5;
}
