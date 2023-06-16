// 37 -  sin() , cos() , tan()
#include <stdio.h>
#include <math.h>
int main() {

    double x, res;
    scanf("%lf", &x);

    res = sin(x); 
    printf("%lf\n", res);
    
    res = cos(x); 
    printf("%lf\n", res);

    res = tan(x); 
    printf("%lf\n", res);

    return 0;
}