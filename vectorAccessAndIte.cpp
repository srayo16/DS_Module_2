#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};

    // cout << v[2] << endl;
    // cout << v.at(2) << endl;
    // cout << v.back() << endl;
    // cout << v.front() << endl;

    for (auto i = v.begin(); i < v.end(); i++)
    {
        cout << *i << " ";
    }

    return 0;
}