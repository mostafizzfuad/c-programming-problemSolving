// 38 -  round() , trunc() ,  ceil() , floor()	
#include <stdio.h>
#include <math.h>
int main() {

    double x, res;
    scanf("%lf", &x);

    res = round(x); 
    printf("%lf\n", res);
    
    res = trunc(x); 
    printf("%lf\n", res);

    res = ceil(x); 
    printf("%lf\n", res);

    res = floor(x); 
    printf("%lf\n", res);

    return 0;
}