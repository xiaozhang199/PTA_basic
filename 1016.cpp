#include<bits/stdc++.h>

using namespace std;
string a,b;

int main()
{
    int da,db;
    cin >> a >> da >> b >> db;
    int cnt1 = 0,cnt2 = 0;
    for(int i = 0;i < a.size();i++){
        if(a[i]- '0' == da)
            cnt1++;
    }
    for(int i = 0;i < b.size();i++){
        if(b[i]- '0' == db)
            cnt2++;
    }
    int k[10] = {1,10,100,1000,10000,100000,1000000,10000000,100000000};
    int sum1 = 0,sum2 = 0;
    while(cnt1){
        sum1 += k[cnt1-1]*da;
        cnt1--;
    }
    while(cnt2){
        sum2 += k[cnt2-1]*db;
        cnt2--;
    }
    int res = sum1 + sum2;
    cout << res << endl;
    return 0;
}
