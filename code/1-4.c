#include <stdio.h>
#include <stdbool.h>

int my_strcmp(const char *a, const char *b){
    while(true){
        if(*a == *b) {
            a++;
            b++;
            if(*a == '\0' && *b == '\0') return 0;
            continue;
        }
        else return *a - *b;
    }
}
int main() {
    printf("%d\n", my_strcmp("abc","abcd"));
    printf("%d\n", my_strcmp("abc","abc"));
    printf("%d\n", my_strcmp("b","a"));

    return 0;
}