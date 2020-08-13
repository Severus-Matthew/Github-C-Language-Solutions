#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int lexicographic_sort(const char* a, const char* b) {
 return(strcmp(a,b));
}

int lexicographic_sort_reverse(const char* a, const char* b) {
  return(strcmp(b,a));
}

int for_distinct(const char* a){
int d = 0;
    int chars[26] = {0};

    while (*a != '\0') {
        int chr = (*a++) - 'a';
        if (chr < 26)
            chars[chr]++;
    }
    
    for (int i = 0; i < 26; i++)
        if (chars[i])
            d++;

    return d;
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
     int ans = for_distinct(a) - for_distinct(b);
    return (ans) ? ans : lexicographic_sort(a, b);   
}

int sort_by_length(const char* a, const char* b) {
 int x = strlen(a), y = strlen(b), z = strcmp(a,b);
    
    if(x==y){
        if(z>0)
            return 1;
        else
            return 0;
    }else if(x>y){
        return 1;
    }else {
        return 0;
    }
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
int m = 0;
    int top = len - 1;
    while (!m) {
        m = 1;
        for (int i = 0; i < top; i++) {
            if (cmp_func(arr[i], arr[i + 1]) > 0) {
                char *tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                m = 0;
            }
        }
        top--;
    }
}

