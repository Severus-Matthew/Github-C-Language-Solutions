#include <stdio.h>

void update(int *a,int *b) 
{
    int *t;
    *t=*a;
    (*a)+=(*b);
    if((*t)>(*b))
    {
        (*b)=(*t)-(*b);
    }    
    else 
    {
        (*b)=(*b)-(*t);
    } 
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
