// star pattern1
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    int k;
    cout << "Enter number of coloumns: ";
    cin >> k;
    int i, j;

    for (i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            if (j >= (n + 1) - i)
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
}