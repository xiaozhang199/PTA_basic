#include <bits/stdc++.h>

using namespace std;
const int N = 1e4+5;
int a[N];

bool judge(int i)
{
    for(int j = 2;j*j <= i;j++){
        if(i%j == 0)
            return false;
    }
    return true;
}

int main()
{
    int m,n,j = 0;
    cin >> m >> n;
    for(int i = 2;j <= n;i++){
        if(judge(i))
            a[++j] = i;
    }
    for(int i = m;i < n;i++)
    {
        if((i-m)%10 != 9)
            cout << a[i] << " ";
        else
            cout << a[i] << endl;
    }
    cout << a[n];
    return 0;
}
