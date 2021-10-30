#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+5;
int a[N],b[N];

int main()
{
    int n;
    int flaga = 0,flagb = 0,flag0 = 0;
    cin >> n;
    int cnta[5] = {0},cntb[5] = {0};
    char c1,c2;
    for(int i = 1;i <= n;i++){
        cin >> c1 >> c2;
        if(c1 == 'B')
            a[i] = 1;
        else if(c1 == 'C')
            a[i] = 2;
        else
            a[i] = 3;
        if(c2 == 'B')
            b[i] = 1;
        else if(c2 == 'C')
            b[i] = 2;
        else
            b[i] = 3;
    }

    for(int i = 1;i <= n;i++){
        if(b[i] - a[i] == 1 || b[i] - a[i] == -2){
            flaga++;
            cnta[a[i]]++;
        }
        else if(b[i] - a[i] == 2 || b[i] - a[i] == -1){
            flagb++;
            cntb[b[i]]++;
        }
        else
            flag0++;
    }

    int k1 = 0,k2 =0;
    int res1 = 0,res2 = 0;
    for(int i = 1; i <= 3;i++){
        if(k1 < cnta[i]){
            k1 = cnta[i];
            res1 = i;
        }
    }

    for(int i = 1; i <= 3;i++){
        if(k2 < cntb[i]){
            k2 = cntb[i];
            res2 = i;
        }
    }

    char k[4] = {'B','B','C','J'};

    cout << flaga << " " << flag0 << " " << flagb << endl;
    cout << flagb << " " << flag0 << " " << flaga << endl;
    cout << k[res1] << " "<< k[res2] << endl;
    return 0;
}
