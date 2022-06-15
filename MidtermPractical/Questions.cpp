#include "Questions.h"
#include <iostream>
using namespace std;


void Questions::Question1()
{
    bool active = true;
    while (active)
    {
        cout << "What is the capital of Spain? \n 1) Rome \n 2) Athens \n 3) Madrid" << endl;
        int inp;
        cin >> inp;

        if (inp == 3)
        {
            cout << "Correct!" << endl;
            active = false;
        }
        else
        {
            cout << "Incorrect!, Try again" << endl;
        }
    }
}

void Questions::Question2()
{
    bool active = true;
    while (active)
    {
        cout << "What is 2+4? \n 1) 6 \n 2) 7 \n 3) 5" << endl;
        int inp;
        cin >> inp;

        if (inp == 1)
        {
            cout << "Correct!" << endl;
            active = false;
        }
        else
        {
            cout << "Incorrect!, Try again" << endl;
        }
    }
}

void Questions::Question3()
{
    bool active = true;
    while (active)
    {
        cout << "What is the biggest country in the world? \n 1) China \n 2) Russia \n 3) Brazil" << endl;
        int inp;
        cin >> inp;

        if (inp == 2)
        {
            cout << "Correct!" << endl;
            active = false;
        }
        else
        {
            cout << "Incorrect!, Try again" << endl;
        }
    }
}

void Questions::Question4()
{
    bool active = true;
    while (active)
    {
        cout << "What is the chemical formula of water? \n 1) CO2 \n 2) PH4 \n 3) H2O" << endl;
        int inp;
        cin >> inp;

        if (inp == 3)
        {
            cout << "Correct!" << endl;
            active = false;
        }
        else
        {
            cout << "Incorrect!, Try again" << endl;
        }
    }
}