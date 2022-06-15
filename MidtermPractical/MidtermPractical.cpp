#include <iostream>
#include "Questions.h"

using namespace std;


int main()
{
    Questions q;
    bool active = true;
    while (active)
    {
        srand(time(NULL));
        int r = 1 + (rand() % 100);

        if (r >= 1 && r <= 25)
        {
            q.Question1();
            active = false;

        }
        else if (r >= 25 && r <= 50)
        {
            q.Question2();
            active = false;
        }
        else if (r >= 50 && r <= 75)
        {
            q.Question3();
            active = false;
        }
        else
        {
            q.Question4();
            active = false;
        }
    }
}


