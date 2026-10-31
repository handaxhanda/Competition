#include <iostream>
#include <vector>
using namespace std;
int main(void)
{

    vector<vector<bool>> map;
    string brank;

    int h, w, n, q;
    cin >> h >> w >> n >> q;
    map.assign(h, std::vector<bool>(w, false));

    int input1, input2, input3;
    for (int i = 0; i < n; ++i)
    {
        cin >> input1 >> input2;
        map[input1-1][input2-1] = true;
    }

    std::vector<int> ans;
    for (int i = 0; i < q; ++i)
    {
        cin >> input1 >> input2 >> input3;
        if (input1 == 1)
        {
            int count = 0;
            for (int i = input2; i <= input3; ++i)
            {
                for (int j = 0; j < w; ++j)
                {
                    if (map[i - 1][j])
                        count++;
                }
            }
            ans.push_back(count);
        }
        else
        {
            int count = 0;
            for (int i = input2; i <= input3; ++i)
            {
                for (int j = 0; j < h; ++j)
                {
                    if (map[j][i - 1])
                        count++;
                }
            }
            ans.push_back(count);
        }
    }

    for (int &answer : ans)
    {
        cout << answer << endl;
    }

    return 0;
}