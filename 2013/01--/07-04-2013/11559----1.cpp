#include <cstdio>
int main(void){
    for(int n, b, h, w, z; scanf("%d%d%d%d", &n, &b, &h, &w) == 4; ){
        int ans = 1 << 30;
        for(int i = 0; i < h; ++i){
            int beds = -1, p;
            scanf("%d", &p);
            for(int j = 0; j < w; ++j){
                scanf("%d", &z);
                if(z > beds) beds = z;
            }
            if(beds >= n && p < ans && p * n <= b) ans = p;
        }
        if(ans == (1 << 30)) puts("stay home");
        else printf("%d\n", ans * n);
    }
    return 0;
}
