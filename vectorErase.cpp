#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    v.erase(v.begin() + 2, v.end() - 5);

    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}