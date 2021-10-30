//背包算法最基础的思维
#include<bits/stdc++.h>

using namespace std;

struct mooncake{
    double num, price, unit;
};

int cmp(mooncake a, mooncake b) {
    return a.unit > b.unit;
}

int main() {
    int n, need;
    cin >> n >> need;
    vector<mooncake> a(n);
    for (int i = 0; i < n; i++) scanf("%lf", &a[i].num);
    for (int i = 0; i < n; i++) scanf("%lf", &a[i].price);
    for (int i = 0; i < n; i++) a[i].unit = a[i].price / a[i].num;
    sort(a.begin(), a.end(), cmp);
    double result = 0.0;
    for (int i = 0; i < n; i++) {
        if (a[i].num <= need) {
            result += a[i].price;
        } else {
            result += a[i].unit * need;
            break;
        }
        need = need - a[i].num;
    }
    printf("%.2f",result);
    return 0;
}
