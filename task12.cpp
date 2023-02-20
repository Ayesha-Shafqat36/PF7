#include <iostream>
using namespace std;
void printCount(int number);
main()
{
    int number;
    cout << "Enter a number:";
    cin >> number;
    printCount(number);

}
void printCount(int number)
{
    for(int i =1 ; i <= number; i++)
    {
        cout << "\t" << i << endl;
    }
}