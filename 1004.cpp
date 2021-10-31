#include<iostream>
#include<math.h>
#include<algorithm>

using namespace std;

struct _student{
    string name;
    string number;
    int grade;
}student[1000];

bool cmp(_student a,_student b)
{
    return a.grade > b.grade;//降序排列
}

int main()
{
    int n;
    cin >> n;
    for(int i = 1;i <= n;i++){
        cin >> student[i].name >> student[i].number >> student[i].grade;
    }

    sort(student+1,student+n+1,cmp);

    cout << student[1].name <<  " " <<student[1].number << endl;
    cout << student[n].name <<  " " <<student[n].number << endl;

    return 0;
}
