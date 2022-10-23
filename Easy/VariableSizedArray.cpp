#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q, element, i, j ;
    cin >> n >> q;
    vector<int> a[n];
    int x[q], y[q];
    for(i=0; i<n; i++)
    {
        int k;
        cin >> k;
        for (j=0; j<k; j++)
        {
            cin >> element;
            a[i].push_back(element);
        }
    }
    for(i=0; i<q; i++)
    {
        cin >> x[i] >> y[i];
    }    
    for(i=0; i<q; i++)
    {
        cout << a[x[i]][y[i]] << endl;
    }
    return 0;
}
