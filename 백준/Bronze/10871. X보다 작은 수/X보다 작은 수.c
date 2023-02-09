#include <stdio.h>
#include <string.h>

int main()
{
    int n, x;
    scanf("%d %d", &n, &x);
    int y;
    for(int i = 0; i < n; ++i){
        scanf("%d", &y);
        if (y < x)
        printf("%d ", y);
    }
    return 0;
}