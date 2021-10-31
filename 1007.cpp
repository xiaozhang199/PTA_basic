#include<bits/stdc++.h>

using namespace std;
const int N = 10006;
int a[N];

void put(int n){
    int  k = 0;
    bool flag;
    for(int i = 2;i <= n;i++){
            flag = true;
        for(int j = 2;j*j <= i;j++){
            if(i%j == 0){
                flag = false;
                break;
            }
        }
        if(flag == true)
            a[k++] = i;
    }
}


int main(){
    int n;
    cin >> n;
    put(n);
    int cnt = 0;
    for(int i = 0;a[i] != 0;i++){
        if(a[i+1] - a[i] == 2)
            cnt++;
    }
    cout << cnt;
    return 0;
}
