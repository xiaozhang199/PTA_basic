#include<bits/stdc++.h>

using namespace std;
const int N = 1e3+5;
char str[N];

int main()
{
    int s[10] = {0};
    cin >> str;
    for(int i = 0;i < strlen(str);i++){
        s[str[i]-'0']++;
    }
    for(int i = 0;i <= 9;i++){
        if(s[i] != 0)
            cout << i << ":" << s[i] << endl;
    }
    return 0;
}
