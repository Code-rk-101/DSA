#include <stdio.h>

int maze(int ir, int ic, int er, int ec) {
    if (ir == er && ic == ec)
        return 1;

    int right = 0;
    int down = 0;

    if (ir < er)
        right = maze(ir, ic + 1, er, ec); // Move right
    if (ic < ec)
        down = maze(ir + 1, ic, er, ec); // Move down

    return right + down;
}

int main() {
    int a, b;
    printf("Enter the number of rows: ");
    scanf("%d", &a);
    printf("Enter the number of columns: ");
    scanf("%d", &b);

    int ans = maze(1, 1, a, b);
    printf("Number of ways to reach the end: %d\n", ans);
    return 0;
}
