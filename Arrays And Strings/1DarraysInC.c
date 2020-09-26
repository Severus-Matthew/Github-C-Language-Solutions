#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int arr[1000],n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int x1=0;
     for(int i=0; i<n; i++){
         x1 = x1+ arr[i];
     }
     
     printf("%d", x1);
    return 0;
}
