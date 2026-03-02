/*
Problem: 228A - Is your horseshoe on the other hoof?
Link: https://codeforces.com/problemset/problem/228/A
Rating: 800
Author: Tashreeful Islam
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s[4];
    int count = 0;
    for(int i = 0; i < 4; i = i + 1)
    {
        cin>>s[i];
    }
    sort(s, s+4);

    for(int i = 0; i < 4; i = i + 1)
    {
        if(s[i] != s[i+1])
        {
            count++;
        }
    }

    cout<<4 - count<<endl;

    return 0;
}
