#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    long long correct_position = 0;
    for (int i = 0; i < v.size(); i++)
    {
        long long min_index = i;
        for (int j = i+1; j<v.size(); j++)
        {
            if (v[min_index] > v[j])
            {
                min_index = j;
                correct_position++;
            }
        }
        v[min_index]++;
        v[i]++;
        swap(v[min_index], v[i]);
    }
    cout << correct_position;
    return 0;
}