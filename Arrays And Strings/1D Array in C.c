#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,*arr;
    int sum = 0;
    scanf("%d", &n);
    arr = (int*)malloc(n * sizeof(int));
    for(i=0; i<n; i++)
    {
        scanf("%d", arr+i);
    }
    for(i=0; i<n; i++)
    {
        sum = *(arr+i) + sum;
    }
    printf("%d\n", sum);
    free(arr);
    return 0;
}
