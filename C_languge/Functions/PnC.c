#include <stdio.h>

int main() {
    int n, r;
    double nf = 1.0, rf = 1.0, nrf = 1.0;

    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter r: ");
    scanf("%d", &r);

    // Calculate factorials
    for (int i = 1; i <= n; i++) {
        nf *= i;
    }
    for (int i = 1; i <= r; i++) {
        rf *= i;
    }
    for (int i = 1; i <= n - r; i++) {
        nrf *= i;
    }

    // Calculate nCr
    double ncr = nf / (rf * nrf);

    printf("C(%d, %d) = %.2lf\n", n, r, ncr);
    return 0;
}
