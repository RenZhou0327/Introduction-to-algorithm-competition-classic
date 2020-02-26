#include <cstdio>

int main() {
    char c;
    bool flag = true;
    while((c = getchar()) != EOF){
        if(c == '"'){
            if(flag){
                printf("``");
                flag = false;
            }
            else{
                printf("''");
                flag = true;
            }
        }
        else{
            putchar(c);
        }
    }
    return 0;
}
