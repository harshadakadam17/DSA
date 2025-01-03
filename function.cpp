#include <iostream>
using namespace std;

void PrintName(string name)
{
    cout << "Hey " << name << '\n';
}
int main()
{
    // functions are setof code which performs something for you
    // functions are used to modularize
    // functions are used to increase readbility
    // functions are used to use same code multltiple times
    // void-->does not return anything
    // return
    // parameterized
    // nonparamiterized
    string name;
    cin >> name;
    PrintName(name);
    string name2;
    cin >> name2;
    PrintName(name2);
    return 0;
}