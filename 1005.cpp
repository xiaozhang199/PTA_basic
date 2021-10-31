#include<bits/stdc++.h>

using namespace std;

int a[100];

int main(){
    int k;
    cin >> k;
    for(int i = 0; i < k;i++){
        cin >> a[i];
    }
    //n*n矩阵思考
    //eg.2 3 4
    //2  0 0 0
    //3  1 0 1
    //4  1 0 0,列中每个数字为0则为所求的数字

    int m[k][k] = {0};
    int sto[k] = {0};
    int cnt = 0;//记录符合条件的数字
    for(int i = 0;i < k;i++)
    {
        int mid = a[i];
        while(mid != 1){
            if(mid%2 == 0)
                mid /= 2;
            else
                mid = (3*mid+1)/2;
            for(int j = 0;j < k;j++)
                    if(a[j] == mid)
                        m[i][j] = 1;
        }
    }

    for(int i = 0;i < k;i++){
        for(int j = 0; j < k;j++){
            if(m[j][i] == 1){
                break;
            }
            if(j == k-1){
                sto[cnt++] = a[i];
            }
        }
    }


    sort(sto,sto+cnt);

    for(--cnt;cnt > 0;cnt--){
        cout << sto[cnt] <<" ";
    }
        cout << sto[cnt];
    return 0;
}
