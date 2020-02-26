#include <cstdio>
#include <cstring>
#include <cctype>

const char* rev = "A    3 HIL JM O   2TUVWXY51SE Z  8 ";
const char* msg[] = {"not a palindrome", "a regular palindrome", "a mirrored string", "a mirrored palindrome"};

char isMirror(char c){
    if(isalpha(c)){
        return rev[c - 'A'];
    }
    return rev[c - '0' + 25];
}
int main() {
    char s[30];
    int len, i;
    bool mir, pal;
    while(scanf("%s", s) == 1){
        len = strlen(s);
        mir = pal = true;
        for(i = 0; i < (len + 1) / 2; ++i){
            if(s[i] != s[len - i - 1]){
                pal = false;
            }
            if(isMirror(s[i]) != s[len - i - 1]){
                mir = false;
            }
        }
        printf("%s -- is %s.\n\n", s, msg[mir * 2 + pal]);
    }
    return 0;
}
