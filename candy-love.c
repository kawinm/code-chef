#include <stdio.h>

int main() {
    int t, n, a[1000],i, sum=0;
    scanf("%d", &t);
    for (; t>0; t--) {
        scanf("%d", &n);
        sum = 0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            sum+= a[i];
        }
        if (sum %2 == 0){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
    return 0;
}
