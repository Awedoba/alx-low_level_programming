#include "main.h"
/**
 * reset_to_98 - function
 * Auth0r: Severin
 *
 * Description: change variable data by pointer
 * Return: Always void
 */

int main(void)
{
    int n;
    int a[5];
    int *p;

    a[2] = 1024;
    p = &n;
    /*
     * write your line of code here...
     * Remember:
     * - you are not allowed to use a
     * - you are not allowed to modify p
     * - only one statement
     * - you are not allowed to code anything else than this line of code
     */
    a[2] = *p;
    /* ...so that this prints 98\n */
    printf("a[2] = %d\n", a[2]);
    return (0);
}
