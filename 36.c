// 36 -  log() , log10() , log2() , exp()
#include <stdio.h>
#include <math.h>
int main() {

    double x, res;
    scanf("%lf", &x);

    res = log(x); // ln() - e base log
    printf("%lf\n", res);

    res = log10(x);
    printf("%lf\n", res);

    res = log2(x);
    printf("%lf\n", res);

    res = exp(x);
    printf("%lf\n", res);

    return 0;
}