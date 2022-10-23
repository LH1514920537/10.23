#include <stdio.h>
int addtwonumber(int a, int b)
{
    int c = a + b;
    return c;
}
int main()
{
    int first = 1;
    int second = 2;
    int third = addtwonumber(first,second);
    printf("%d", third);
    return 0;
}