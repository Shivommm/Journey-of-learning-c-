#include <iostream>
using namespace std;
enum shape
{
    circle,
    rectangle,
    triangle
};
int main()
{
    cout << "Enter shape code:  ";
    int code;
    cin >> code;
    while (code >= circle && code <= triangle)
    {
        switch (code)
        {
        case circle:
            cout << "You entered Circle" << endl;
            break;
        case rectangle:
            cout << "You entered Rectangle" << endl;
            break;
        case triangle:
            cout << "You entered Triangle" << endl;
            break;
        }
        cout << "Enter shape code:  ";
        cin >> code;
    }
    cout << "BYE \n";
    return 0;
}