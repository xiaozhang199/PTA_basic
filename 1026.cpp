#include <iostream>

using namespace std;

int main()
{
    int c1,c2;
    cin >> c1 >> c2;
    int res = (c2-c1+50)/100;
    int h,m,s;
    h = res/3600;
    m = (res-h*3600)/60;
    s = res%60;
    printf("%02d:%02d:%02d",h,m,s);
    return 0;
}
