#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s; int i=0;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    int len = strlen(s);
    while(i<len)
    {
        if (s[i]==' ')
        {
            printf("\n");
        }
        else
        {
            printf("%c",s[i]);
        }
        i++;
    }
    free(s);
    return 0;
}
