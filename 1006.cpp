#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[3] = {0};
    a[0] = n%10;
    a[1] = (n/10)%10;
    a[2] = (n/100)%10;
    for(int k = 0;k < a[2];k++)
            cout<< "B";
    for(int k = 0;k < a[1];k++)
            cout <<"S";
    for(int k = 1;k <= a[0];k++)
            cout <<k;
    return 0;
}

