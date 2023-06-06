#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    // cout << v.size() << endl;

    // vector<int> vc(5, 16);
    // vector<int> v1(vc);

    int arr[6] = {1, 2, 3, 4, 5, 6};
    // vector<int> v1(arr, arr + 6);

    vector<int> v1 = {1, 2, 3, 4, 5, 6};

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }

    cout << endl
         << v1.size() << endl;

    return 0;
}