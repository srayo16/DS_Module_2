#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};

    v.pop_back();
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    // vector<int> x = {10, 20, 30};

    // x = v; // O(n);

    // for (int i = 0; i < x.size(); i++)
    // {
    //     cout << x[i] << " ";
    // }

    return 0;
}