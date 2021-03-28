#include <bits/stdc++.h>

using namespace std;

vector<int> cost(int n, int k)
{
    vector<int> cost(n-1,1);

     int max_possible=n-1;
           int curr_sum=k-(n-1);
           int j =0;
           while(curr_sum>0&&j<n-1){
               if(curr_sum>=max_possible){
                   cost[j]+=max_possible;
                   curr_sum-=max_possible;
                   max_possible--;
               }
               else {
                   cost[j]+=curr_sum;
                   curr_sum=0;
               }
               j++;
               
           }

    return cost;
}

int main()
{
    int t;
    cin >> t;

    int test = 0;

    while(t--)
    {
        int n, c;
        cin >> n >> c;

        long long maxCost;

        maxCost = (n*n + n - 2)/2;

        if(c < (n-1) || c > maxCost)
        {
            test++;
            cout << "Case #" << test << ':' << " " << "IMPOSSIBLE" << endl;
            continue;
        }

        vector<int> v = cost(n, c);

        int ans[n];

        int maxa = n;
        int mina = 1;
        int cost = n;
        int index=n-1;
        int x=n-1;
        int j=0;
        int idx = 0;

        while(j<=x)
        {
            if(v[ idx]==cost)
            {
                ans[index] = mina;
             mina++;
                cost--;
             idx++;
                if(index==x)
                {
                    index = j;
                    x--;
                }
                else
                {
                    index = x;
                    j++;
                }
            }
            else
            {
                ans[index] = maxa;
             maxa--;
                cost--;
                if(index==x)
                {
                    index--;
                    x--;
                }
                else
                {
                    index++;
                    j++;
                }
            }
        }

        test++;
        cout << "Case #" << test << ':' << " ";
        for(int i=0; i<n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}