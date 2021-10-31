//反转链表
//注意此处的存储思想：以地址来存储
#include <bits/stdc++.h>

using namespace std;

int main(){
    int first,n,k,temp;
    cin >> first >> n >> k;
    int data[100006],next[100006],listt[100006];
    for(int i = 0;i < n;i++){
        cin >> temp;
        cin >> data[temp] >> next[temp];
    }
    int sum = 0;
    while(first != -1){
        listt[sum++] = first;
        first = next[first];
    }
    for(int i = 0;i < sum - sum%k ;i += k){
        reverse(begin(listt) + i,begin(listt)+i+k);
    }
    for(int i = 0;i < sum-1;i++){
        printf("%05d %d %05d\n",listt[i],data[listt[i]],listt[i+1]);
    }
    printf("%05d %d -1",listt[sum-1],data[listt[sum-1]]);
    return 0;
}
