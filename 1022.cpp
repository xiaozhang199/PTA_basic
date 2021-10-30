#include<bits/stdc++.h>

using namespace std;
//坑：a+b = 0 --> 输出0
int res[200] = {0};

int main(){
    int a,b,d,sum;
    scanf("%d%d%d",&a,&b,&d);
    sum = a+b;
    int i = 0;
    if(sum == 0)
        cout << 0;
    else{
       while(sum != 0)
        {
            res[i] = sum%d;
            sum /= d;
            i++;
        }
        for(int j = i-1;j >= 0;j--)
            cout << res[j]; 
    }
    return 0;
}
