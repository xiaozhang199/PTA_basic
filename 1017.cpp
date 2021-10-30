#include<bits/stdc++.h>

using namespace std;

string a;
int b;
int res[1005];

int main(){
    int k = 0,j = 0;
    int n;
    cin >> a >> b;
    for(int i = 0;i < a.size();i++){
        n = k*10 + a[i] - '0';
        if(n/b >= 1){
            res[j++] = n/b;
            k = n - n/b*b;
        }
        else{
            if(i != 0)
                res[j++] = 0;
            k = n;
        }
    }
    if(j > 0){
        for(int cnt = 0;cnt < j;cnt++)
            cout << res[cnt];
        cout << " " << k;
    }
    else{
        cout << 0 << " " << k;
    }
    return 0;
}
