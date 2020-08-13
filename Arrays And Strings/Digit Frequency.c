#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[1000];int i; int j;
    scanf("%[^\n]%*c",&s);
    int a[10] = {0,0,0,0,0,0,0,0,0,0};
    for(j=0;j<10;j++)
    {
        for(i=0;i<strlen(s);i++)
        {
            if( (s[i])== (j+'0') )
            {
                a[j]+=1;
            }
        }        
        printf("%d ",a[j]);
    }
    return 0;
}
