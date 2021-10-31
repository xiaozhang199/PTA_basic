#include <bits/stdc++.h>

using namespace std;

struct node{
    int num;
    int de;
    int cai;
};

vector<node>v[4];

bool cmp(node a,node b){
    if(a.de+a.cai != b.de+b.cai)
        return a.de+a.cai > b.de+b.cai;
    else if(a.de != b.de)
        return a.de > b.de;
    else
        return a.num < b.num;
}

int main()
{
    int n,low,high;
    cin >> n >> low >> high;
    node temp;
    int total = n;
    for(int i = 1;i <= n;i++){
        cin >> temp.num >> temp.de >> temp.cai;
        if(temp.de >= low && temp.cai >= low){
            if(temp.de >= high && temp.cai >= high)
                v[0].push_back(temp);
            else if(temp.de >= high && temp.cai < high)
                v[1].push_back(temp);
            else if(temp.de < high && temp.cai < high && temp.de >= temp.cai)
                v[2].push_back(temp);
            else
                v[3].push_back(temp);
        }
        else
            total--;
    }

    for(int i = 0; i < 4;i++){
        sort(v[i].begin(),v[i].end(),cmp);
    }

    cout << total << endl;

    for(int i = 0;i < 4;i++){
        for(int j = 0;j < v[i].size();j++){
            if(i != 3 || j != v[3].size() -1 )
                cout << v[i][j].num <<" " << v[i][j].de <<" "<< v[i][j].cai << endl;
            else
                cout << v[i][j].num <<" " << v[i][j].de <<" "<< v[i][j].cai;
        }
    }

    return 0;
}
