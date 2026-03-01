/*
Problem: 158A-Next round
Link: https://codeforces.com/problemset/problem/158/A
Rating: 800
Author: Tashreeful Islam
*/

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n, k, s, next = 0;
    cin>>n>>k;
    vector <int> score;

    for(int i = 0; i < n; i = i + 1)
    {
        cin>>s;
        score.push_back(s);
    }

    for(int i = 0; i < n; i = i + 1)
    {
        if(score[i] >= score[k] && score[i] > 0)
        {
            next++;
        }
    }
    cout<<next<<endl;

    return 0;
}
