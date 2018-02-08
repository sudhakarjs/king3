#include <stdio.h>
int main()
{
    int a, n, a = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (a = 1; a <= n; ++a)
    {
        printf("%d, ", a);
        nextTerm = a + t2;
        a = t2;
        t2 = nextTerm;
    }
    return 0;
}
