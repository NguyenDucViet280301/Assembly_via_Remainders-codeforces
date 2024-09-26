#include <stdio.h>

#define MAX_N 500
#define MAX_VAL 1000000000 // 10^9

void solve() {
    int n;
    scanf("%d", &n);
    
    int x[MAX_N + 1];
    long long a[MAX_N + 1];
    
    for (int i = 2; i <= n; i++) {
        scanf("%d", &x[i]);
    }
    a[1] = 501; // Chọn a[1] lớn hơn giá trị max của x
    
    for (int i = 2; i <= n; i++) {
        a[i] = a[i - 1] + x[i];
    }
    
    // In kết quả
    for (int i = 1; i <= n; i++) {
        printf("%lld ", a[i]);
    }
    printf("\n");
}

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        solve();
    }
    
    return 0;
}
