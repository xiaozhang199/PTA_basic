#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,t;
    cin >> n>> m;
    m = m%n;
    int a[n+1] = {0};
    for(int i = 1;i <= n;i++)
        cin >> a[i];
    for(int j = 1;2*j <= n;j++)
    {
        t = a[j];
        a[j] = a[n-j+1];
        a[n-j+1] = t;
    }
    for(int j = 1;2*j <= m;j++)
    {
        t = a[j];
        a[j] = a[m-j+1];
        a[m-j+1] = t;
    }
    for(int j = 1;2*j <= n-m;j++)
    {
        t = a[m+j];
        a[m+j] = a[n-j+1];
        a[n-j+1] = t;
    }
    for(int i = 1;i < n;i++)
    {
        cout << a[i] << " ";
    }
    cout << a[n];

    return 0;
}
