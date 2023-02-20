#include <iostream>
#include <cmath>
using namespace std;
float calculateMoney(float money, int year);
main()
{
    float money;
    int year;
    float result;
    cout << "Enter amount of inherited money:";
    cin >> money;
    cout << "Enter year:";
    cin >> year;
    result= calculateMoney(money,year);
}
float calculateMoney(float money, int year)
{
    float spendings =0;
    float oddSpendings =0;
    float result=0;
    int age =18;
    for(int i =1800; i <=year; i++)
    {
        if(i %2 == 0)
        {
            spendings = 12000.0;
            money= (money-spendings);
        }
        else
        {
        oddSpendings= (12000.0 +50 *age);
        money=money-oddSpendings;
        }
        age =age+1;
    }
        if(money > 0)
        {
            cout << "Yes ! He will live a care free life and will have" << money << endl;
        }
        if(money < 0)
        {
            cout << "No! The number of dollars he need to survive:" << abs(money) << endl;
        }
    return result;
}