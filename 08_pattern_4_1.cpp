#include <iostream>
// solve all the patterns
using namespace std;

int main()
{
    //
    int n;
    cout << "Enter n: \n";
    cin >> n;
    int i, j;
    // rectangle
    /*
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // traiangle
    for (int i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // holo rectangle
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            if (i == 1 || i == 5 || j == 1 || j == 4)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    */
    // inverted pyramid
    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}