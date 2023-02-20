#include <iostream>
using namespace std;
main()
{
    char choice;
    cout << "Enter your choice:";
    cin >> choice;
    while(choice == 'b')
    {
        cout << "You are dumb !" << endl;
        cout << "Enter your choice:";
        cin >> choice;
    }
}