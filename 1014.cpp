#include <bits/stdc++.h>

using namespace std;
char s[4][65];

int main()
{
    for(int i = 0;i < 4;i++){
        cin >> s[i];
    }
    int j,k;
    for(j=0,k=0;s[0][j] != s[1][k]||(s[0][j] == s[1][k] &&((s[0][j]-'A')<0 || (s[0][j] - 'A')>7));j++,k++)
        ;
    char ans1 = s[0][j];
    switch(ans1){
    case 'A': cout << "MON ";break;
    case 'B': cout << "TUE ";break;
    case 'C': cout << "WED ";break;
    case 'D': cout << "THU ";break;
    case 'E': cout << "FRI ";break;
    case 'F': cout << "SAT ";break;
    case 'G': cout << "SUN ";break;
    }
    char ans2;
    for(j++,k++;j < strlen(s[0])&&k< strlen(s[1]);j++,k++)
        if(s[0][j] == s[1][k]&&((s[0][j] >='A'&& s[0][j] <= 'N')|| isdigit(s[0][j]))){
            ans2 = s[0][j];
            break;
        }
    if(ans2 >= '0' && ans2 <= '9')
        cout << 0 << ans2-'0';
    else
        cout << ans2-'0'-7;
    int cnt = 0;
    for(j=0,k=0;s[2][j] != s[3][k]||(s[2][j]==s[3][k] && (s[2][j]-'A' < 0||s[2][j] - 'a'>26));j++,k++)
        cnt++;
    if(cnt >= 0 && cnt <= 9)
        cout << ":" << 0 << cnt;
    else
        cout << ":" <<cnt;
    return 0;
}
