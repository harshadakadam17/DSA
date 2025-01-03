#include <iostream>
using namespace std;

int main()
{
    // int age;
    // cout << "Enter Your age :" ;
    // cin >> age;
    // if (age >= 18)
    // {
    //     cout << "you are adult";
    // }
    // else
    // {
    //     cout << "you are not adult";
    // }

    // int greade;
    // cin >> greade;

    // if (greade >= 80)
    // {
    //     cout << "A";
    // }
    // else if (greade >= 60)
    // {
    //     cout << "B";
    // }
    // else if (greade >= 50)
    // {
    //     cout << "c";
    // }
    // else if (greade >= 45)
    // {
    //     cout << "D";
    // }
    // else if (greade >= 25)
    // {
    //     cout << "E";
    // }
    // else if (greade <= 25)
    // {
    //     cout << "Fail";
    // }

    int age;
    cin >> age;

    if (age < 18)
    {
        cout << "you are not eligible for job";
    }
    else if (age >= 18)
    {
        cout << "you are elibile for job";
    }
    else if (age >= 55 && age <= 57)
    {
        cout << "you are elibible for job but soon you get retrirment";
    }
    else if (age > 57)
    {
        cout << "retrirment soon";
    }

    return 0;
}