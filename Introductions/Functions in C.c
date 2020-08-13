#include <stdio.h>
int max_of_four(int a, int b, int c, int d)
{
    int max = 0;
    if (a+b>c+d)
    {
        if(a>b)
        {
        max+=a;
        }
        else
        {
        max+=b;
        }
    }
    else if (c+d>a+b)
    {
        if(c>d)
        {
            max+=c;
        }
        else
        {
            max+=d;
        }
    }
    else if (a+c>b+d)
    {
        if(a>c)
        {
            max+=a;
        }
        else
        {
            max+=c;
        }
    }
    else
    {
        if(b>d)
        {
            max+=b;
        }
        else
        {
            max+=d;
        }
    }
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
