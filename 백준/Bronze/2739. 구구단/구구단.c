#include <stdio.h>
#include <string.h>

int main()
{
    int N;
    scanf("%d", &N);
    for (int a= 1; a<10; ++a)
    {
        printf("%d * %d = %d\n", N, a, N * a);
    }
    return 0;
}