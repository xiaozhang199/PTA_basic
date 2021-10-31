#include <bits/stdc++.h>

using namespace std;

int a[1005];
int b[6][1005] = {0};

int main()
{
    int n;
    cin >> n;
    for(int i  = 1;i <= n;i++){
        cin >> a[i];
    }
    int j = 0,k = 0,l = 0,m = 0,w = 0;
    for(int i = 1;i <= n;i++){
        switch(a[i]%5){
        case 0 : b[1][j++] = a[i];break;
        case 1 : b[2][k++] = a[i];break;
        case 2 : l++;break;
        case 3 : b[4][m++] = a[i];break;
        case 4 : b[5][w++] = a[i];break;
        }
    }
    for(int cnt =  0;cnt < j;cnt++){
        if(b[1][cnt]%2 == 0)
            b[6][1] += b[1][cnt];
    }
    for(int cnt = 0;cnt < k;cnt++)
        if(cnt%2 == 0)
            b[6][2] += b[2][cnt];
        else
            b[6][2] -= b[2][cnt];
    double ave = 0;
    for(int cnt = 0;cnt < m;cnt++)
    {
        ave += b[4][cnt];
    }
    double res =  0;
    res = (double)ave/m;
    int res1 = 0;
    for(int cnt = 0;cnt < w;cnt++){
        if(b[5][cnt] > res1)
            res1 = b[5][cnt];
    }
    if(b[6][1] != 0)
        cout <<b[6][1] << " ";
    else
        cout << 'N' <<" ";
    if(k != 0)
        cout <<b[6][2] << " ";
    else
        cout << 'N' <<" ";
    if( l != 0)
        cout << l << " ";
    else
        cout << 'N' <<" ";
    if(m != 0)
        printf("%.1f ",res);
    else
        cout << 'N' <<" ";
    if(w != 0)
       cout << res1 ;
    else
        cout << 'N' ;
    return 0;
}
