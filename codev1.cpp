#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    //charset:GBK
    //version:v1.0
    //made by Wei Zixiang
    double numberA = 1;
    double numberB = 1;
    double result = 1;
    cout << "===========================\n|    勾  股  计  算  器   |\n===========================" <<endl;
    cout <<"请输入直角边A的值：" ;
    cin >> numberA ;
    if (numberA > 0)
    {
        cout << "请输入直角边B的值：";
        cin >> numberB;
        if(numberB > 0)
        {
            result = sqrt(numberA * numberA + numberB * numberB);
            cout <<"该直角三角形斜边长是：" << result <<endl;
        }
        else
        {
            cout << "该直角边B不能小于或等于0！" <<endl;
        }
    }
    else
    {
        cout << "该直角边A不能等于或小于0！"<<endl;
    }
    system("pause");
    return 0;
}
