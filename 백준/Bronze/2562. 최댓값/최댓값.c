#include <stdio.h>
#include <string.h>

int main()
{
    int max = 0;
    int b = 0;
    int a;
    for(int i = 1; i<10; ++i){
        scanf("%d", &a);
        if(a > max) {
            max = a;
            b = i;
        }
    }
    printf("%d\n%d\n", max, b);
    return 0;
}