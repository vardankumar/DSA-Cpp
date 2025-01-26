#include <iostream>
using namespace std;

int main()
{

    // AND OPERATOR

    // bool cond1 = true;
    // bool cond2 = true;
    // bool cond3 = false;

    bool cond1 = (10 > 5);
    bool cond2 = (5 >= 5);
    bool cond3 = (2 == 2);

    // if (cond1 && cond2 && cond3)
    // {
    //     cout << "all conditions are true" << endl;
    // }
    // else
    // {
    //     cout << "at least one condition is false" << endl;
    // }

    // OR OPERATOR

    if (cond1 && cond2 && cond3)
    {
        cout << "atleast one conditions is true" << endl;
    }
    else
    {
        cout << "at least one condition is false" << endl;
    }

    // NOT OPERATOR

    bool cond4 = (5 != 10);
    cout << (!cond4) << endl;

    return 0;
}