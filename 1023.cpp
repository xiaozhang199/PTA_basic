#include<bits/stdc++.h>

using namespace std;

int main(){
    int a[10] = {0};
    for(int i = 0;i < 10;i++){
        cin >> a[i];
    }
    int n[50];
    int j = 0,k;
    for(int i = 1;i < 10;i++){
        for(;a[i] > 0;a[i]--){
              n[j++] = i;
        }
    }
    cout << n[0];
    for(int i = 0;i < a[0];i++)
        cout << 0;
    for(int i = 1;i < j;i++)
        cout << n[i];
    return 0;
}
