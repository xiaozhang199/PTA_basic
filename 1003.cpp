#include<bits/stdc++.h>

using namespace std;
//分析这些规则：PTA
int main(){
/*
    char str[105];
    int n;
    cin >> n;
    while(n--){
        cin >> str;
        int pre = 0,lst = 0,mid  = 0;
        int i;
        bool flag  = true;
        for(i = 0;str[i] != 'P';i++)
        {
            if(str[i] == 'A')
                pre++;
            else
            {
                flag = false;
                break;
            }
        }
        for(++i;str[i] !='T';i++)
        {
            if(str[i] == 'A')
                mid++;
            else
            {
                flag  = false;
                break;
            }
        }
        for(++i;i < strlen(str);i++)
        {
            if(str[i] == 'A')
                lst++;
            else
            {
                flag = false;
                break;
            }
        }
        if(mid != 0 && pre*mid == lst && flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    //之前错误原因：

    char s[] = "hello";
    for(int i = 0; s[i] != 'k';i++)//这种写法就很不好
    {
        cout << s[i] <<" ";
    }
//
*/
    //改用STL容器
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        map<char,int>m;
        int j,p = 0,t = 0;
        for(j = 0;j < s.size();j++){
            m[s[j]]++;
            if(s[j] == 'P') p = j;
            if(s[j] == 'T') t = j;
        }
        if(m['P'] == 1 && m['T'] == 1 && m.size() == 3 && t - p != 1 && m['A'] != 0 && (t-p-1)*p == s.length()-t-1)
            cout <<"YES"<<endl;
        else
            cout <<"NO" <<endl;

    }

    return 0;
}
