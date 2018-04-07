#include <stdio.h>

int gcd(int a, int b) {
    if (b==0) {
        return a;
    }
    return gcd(b, a%b);
}
int main() {
    int t, x, y, GCD;
    scanf("%d", &t);
    for (; t>0; t--) {
        scanf("%d %d", &x, &y);
         if(x>y){
            GCD = gcd(x,y);
        }
        else{
            GCD = gcd(y,x);
        }
        printf("%d\n",GCD * 2);
    }
    return 0;
}
