#include<bits/stdc++.h>
using namespace std;
vector<int> NegativeInteger(int *a, int n, int k)
{
    int i = 0, j = 0;
    list<int> l;
    vector<int> res;
    while (j < n)
    {
        // Calculation
        if(a[j] < 0)
            l.push_back(a[j]);

        if (j - i + 1 < k)
            j++;

        else if (j - i + 1 == k)
        {
            // Checking the edge Case.
            if (l.size() == 0)
                res.push_back(0);
              else
            {
                res.push_back(l.front());

                if (a[i] == l.front())
                {
                    l.pop_front();
                }
            }
            j++;
            i++;
        }
    }
    return res;
}
int main()
{
  
    
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int k;
        cin >> k;
        vector<int> res = NegativeInteger(arr, n, k);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    
    return 0;
}