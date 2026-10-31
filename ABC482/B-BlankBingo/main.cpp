#include <iostream>
using namespace std;
int main(void)
{
    string s[5];
    for(int i=0; i<5; ++i)
    {
        cin >> s[i];
    }

    int n[12];
    for(int& num:n)
    {
        num = 0;
    }

    for(int i=0; i<5; ++i)
    {

        for(char& c: s[i])
        {
            if(c == 'o')
            {
                n[i]++;
            }
        }
    }
    
    for(int i=0; i<5; ++i)
    {

        for(int j=0;j<5;++j)
        {
            if(s[j][i] == 'o')
            {
                n[5+i]++;
            }
        }
    }

    for(int i=0,j=0; i<5; ++i,++j)
    {
        if(s[i][j] =='o')
        {
            n[10]++;
        }
    }
     for(int i=0,j=4; i<5; ++i,--j)
    {
        if(s[i][j] =='o')
        {
            n[11]++;
        }
    }

    int max = 0;

    for(int& ans :n)
    {
        if(max < ans) max = ans;
    }

    cout << 5 - max << endl;

    return 0;
}