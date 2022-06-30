#include <iostream>
// continue skips the loop and starts from the beging
// break terminates the loop
using namespace std;

int main()
{
    for (int d = 1; d <= 31; d++)
    {
        if (d % 2 == 0)
        {
            continue;
        }
        cout << "You may go out  today! " << d << "th" << endl;
    }
    int eidday;
    cout << "Enter Eid day!" << endl;
    cin >> eidday;
    for (int i = 1; i <= 30; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        cout << "You can go to tuition. " << i << "th" << endl;
        if (i == eidday)
        {
            cout << "To day is Eid day. Everything if off!";
            break;
        }
    }
    // is the number is divisible by 4 then skip the number
    for (int i = 0; i <= 500; i++)
    {
        if (i % 4 == 0)
        {
            continue;
        }
        cout << i << endl;
    }
    return 0;
}