
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void solve()
{
    vector <int> v(7);
    for(int i = 0; i < 7; i += 1)
    {
        cin>>v[i];
    }

    sort(v.begin(), v.end());
    int max = v[6];
    int sum = 0;
    for(int i = 0; i < 6; i += 1)
    {
        int x = v[i] * -1;
        sum += x;
        x = 0;
        
    }
    int res = max + sum;
    cout<<res<<endl;


}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}