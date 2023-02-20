#include <iostream>
using namespace std;
void calculatePercentage(float number);
main()
{   
    float number =0;
    calculatePercentage(number);
}
void calculatePercentage(float number)
{
    int num;
    float p_1 =0;
    float p_2 =0;
    float p_3 =0;
    float p_4 =0;
    float p_5 =0;
    float percent1 =0;
    float percent2 =0;
    float percent3 =0;
    float percent4 =0;
    float percent5 =0;
    cout << "Enter any number:";
    cin >> num;
    for(int i =1; i <=num;  i++)
    {
        cout << "Enter number:";
        cin >> number;
        if(number >= 1 && number <= 199)
        {
            p_1 = p_1 +1;
        }
        if(number >=200 && number <= 399)
        {
            p_2 = p_2 +1;
        }
        if(number >=400 && number <= 599)
        {
            p_3 = p_3 +1;
        }
        if(number >= 600 && number <= 799)
        {
            p_4 = p_4 +1;
        }
        if(number >= 800 && number <= 1000)
        {
            p_5 = p_5 +1;
        }
     
    }
    percent1 = (p_1/num) *100;
    percent2 = (p_2/num) *100;
    percent3 = (p_3/num) *100;
    percent4 = (p_4/num) *100;
    percent5 = (p_5/num) *100;
    
    cout << percent1 << "%" << endl;
    cout << percent2 << "%" << endl;
    cout << percent3 << "%" << endl;
    cout << percent4 << "%" << endl;
    cout << percent5 << "%" << endl;
}    