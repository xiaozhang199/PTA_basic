#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char str[105];
    scanf("%s",str);
    int sum  = 0;
    for(int i = 0;i < strlen(str);i++)
    {
        sum += str[i] - '0';
    }
    int mid[5],k = 0;
    while(sum > 0)
    {
        mid[k++] = sum%10;
        sum = sum/10;
    }
    for(int i = k-1; i >= 0;i--)
    {
        if(i != 0){
        switch(mid[i]){
        case 0:printf("ling ");break;
        case 1:printf("yi ");break;
        case 2:printf("er ");break;
        case 3:printf("san ");break;
        case 4:printf("si ");break;
        case 5:printf("wu ");break;
        case 6:printf("liu ");break;
        case 7:printf("qi ");break;
        case 8:printf("ba ");break;
        case 9:printf("jiu ");break;
        }
        }
        else{
            switch(mid[i]){
        case 0:printf("ling");break;
        case 1:printf("yi");break;
        case 2:printf("er");break;
        case 3:printf("san");break;
        case 4:printf("si");break;
        case 5:printf("wu");break;
        case 6:printf("liu");break;
        case 7:printf("qi");break;
        case 8:printf("ba");break;
        case 9:printf("jiu");break;
        }
        }
    }
    return 0;
}
