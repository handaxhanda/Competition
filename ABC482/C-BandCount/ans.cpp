#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int h, w, n, q;
    cin >> h >> w >> n >> q;

    vector<int> row(n), col(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> row[i] >> col[i];
    }

    sort(row.begin(), row.end());
    sort(col.begin(), col.end());

    for (int i = 0; i < q; ++i)
    {
        int type, left, right;
        cin >> type >> left >> right;
        const std::vector<int> &position = (type == 1 ? row : col);

        auto first = lower_bound(position.begin(), position.end(), left);
        auto last = upper_bound(position.begin(), position.end(), right);
        cout << last - first << endl;
    }

    return 0;
}
