#include <bits/stdc++.h>
using namespace std;

void intersection(vector<int>& a, vector<int>& b)
{
    int i = 0, j = 0;

    while(i < a.size() && j < b.size())
    {
        if(a[i] < b[j])
        {
            i++;
        }
        else if(b[j] < a[i])
        {
            j++;
        }
        else
        {
            cout << a[i] << " ";
            i++;
            j++;
        }
    }
}

int main()
{
    vector<int> a = {1, 2, 2, 3, 4};
    vector<int> b = {2, 2, 4, 6};

    intersection(a, b);

    return 0;
}