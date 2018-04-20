#include <stdio.h>

int comb(int n, int p){
    int diff = n - p;

    int i;
    for(i=n-1; i>0; i--)
        n *= i;
    for(i=p-1; i>0; i--)
        p *= i;
    for(i=diff-1; i>0; i--)
        diff *= i;


    return n/(p*diff);
}

int main()
{
    int n,p;
    printf("Please enter n: ");
    scanf("%d",&n);
    printf("Please enter p: ");
    scanf("%d",&p);

    printf("%d",comb(n,p));


    return 0;
}
