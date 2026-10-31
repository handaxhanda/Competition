#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int count = 0;
    for (char &c : s)
    {
        if (c == 'o')
        {
            count++;
        }
    }
    if (count % 2 == 0)
    {
        cout << "even" << endl;
    }
    else
    {
        cout << "odd" << endl;
    }
    return 0;
}