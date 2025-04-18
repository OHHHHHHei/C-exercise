#include <stdio.h>
 int a, b, n;
 int flag[20];
 int is_ok(int t) {
    for (int i = 0; i < 5; i++) {
        if (flag[t % 10])
            return 0;
        flag[t % 10] = 1;
        t /= 10;
    }
    return 1;
 }
 int main() {
    scanf("%d", &n);
    for (int i = 0; i < 100000; i++) {
        a = i;
        b = i * n;
        if (b >= 100000)
            continue;
        for (int j = 0; j < 20; j++) flag[j] = 0;
        if (is_ok(a) && is_ok(b)) {
            printf("%05d/%05d=%d\n", b, a, n);
        }
    }
    return 0;
 }