#include <iostream>

using namespace std;

int main() 
{
    int day; 
    cout << "enter your day" << endl;
    cin >> day;
    switch(day) 
    {
    case 1:
    case 2:
    case 3:
    cout << "open your day" << endl;
    break; 
    case 4:
    cout << "close your day" << endl;
    break; 
    case 5:
    cout << "open your day" << endl;
    break; 
    case 6:
    case 7:
    cout << "close your day" << endl;
    break; 
    default: 
    cout << "Don't your day" << endl;
    break; 
    } 
    return 0;
}
    