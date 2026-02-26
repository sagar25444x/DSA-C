#include <iostream>
using namespace std;

int main()
{

    int m, count;

    cin >> count;
    m = (count + 1) / 2;
    for (int i = 1; i <= m; i++)
    {
        if (count == 1)
        {
            for (int j = 1; j <= count; j++)
            {
                cout << "* "; /* code */
            }
        }
        else
        {
            for (int j = 1; j <= m - i + 1; j++) // formula
            {
                cout << "* "; /* code */
            }
            for (int j = 1; j <= 2 * i - 3; j++) // formula of space
            {
                cout << "  "; /* code */
            }
            for (int j = 1; j <= m - i + 1; j++)
            {
                cout << "* "; /* code */
            }
        }

        cout << endl;
    }

    return 0;
}