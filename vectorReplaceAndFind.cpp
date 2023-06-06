#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};

    replace(v.begin(), v.end(), 30, 100);

    // vector<int>::iterator f = find(v.begin(), v.end(), 40);
    auto f = find(v.begin(), v.end(), 40);
    // cout << *f << endl;

    if (f == v.end())
        cout << "Not Found!" << endl;
    else
        cout << "Found!" << endl;

    for (int i : v)

    {
        cout << i << " ";
    }

    return 0;
}