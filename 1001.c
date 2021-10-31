#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i = 0;
    while(n != 1){
        if(n%2)
            n = (3*n+1)/2;
        else
            n /= 2;
            i++;
    }
    printf("%d",i);
    return 0;
}
