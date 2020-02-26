#include <cstdio>

const int MAXN = 1010;

int main() {
    int a[MAXN], b[MAXN];
    //sta1 统计a中各元素数据， sta2 统计b各元素中数据 sta3 统计相同位置元素数据
    int sta1[11], sta2[11], sta3[11];
    int n;
    int i;
    int kase = 0;
    int A, B;
    while(scanf("%d", &n) == 1 && n){
        printf("Game %d:\n", ++kase);
        for(i = 0; i < 11; ++i){
            sta1[i] = 0;
        }
        for(i = 0; i < n; ++i){
            scanf("%d", &a[i]);
            ++sta1[a[i]];
        }
        while(true){
            A = B = 0;
            for(i = 0; i < 11; ++i){
                sta2[i] = sta3[i] = 0;
            }
            for(i = 0; i < n; ++i){
                scanf("%d", &b[i]);
                if(b[i] == a[i]){
                    ++A;
                    ++sta3[b[i]];
                }
                ++sta2[b[i]];
            }
            if(!b[0]){
                break;
            }
            for(i = 1; i < 11; ++i){
                int mini;
                mini = (sta1[i] < sta2[i] ? sta1[i] : sta2[i]);
                if(mini - sta3[i] != 0){
                    B += (mini - sta3[i]);
                }
            }
            printf("    (%d,%d)\n", A, B);
        }
    }
    return 0;
}
