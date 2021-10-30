#include<bits/stdc++.h>

using namespace std;
int a[4];

void cut(int n){
    int i = 0;
    while(n > 0){
        a[i++] = n%10;
        n /= 10;
    }
}

int main()
{
    int n;
    cin >> n;
    cut(n);
    sort(a,a+4);
    int maxx,minn;
    do{
        maxx = a[3]*1000 + a[2]*100 + a[1]*10 +a[0];
        minn = a[0]*1000 + a[1]*100 + a[2]*10 +a[3];
        n = maxx - minn;
        printf("%04d - %04d = %04d\n",maxx,minn,n);
        a[0] = 0,a[1] = 0,a[2] = 0,a[3] = 0;
        cut(n);
        sort(a,a+4);
    }while(n != 6174 && n != 0);
    return 0;
}
