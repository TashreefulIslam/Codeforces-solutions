/*
Problem: 144A-Arrival of the General
Link: https://codeforces.com/problemset/problem/144/A
Rating: 800
Author: Tashreeful Islam
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i = i + 1)
    {
        cin>>a[i];
    }
    int large = a[0];
    int Short = a[0];
    int large_index = 0;
    int Short_index = 0;
    for(int i = 0; i < n; i = i + 1)
    {
        if(large < a[i])
        {
            large = a[i];
            large_index = i;
        }
        if(Short >= a[i])
        {
            Short = a[i];
            Short_index = i;
        }
    }

    if(large_index > Short_index)
    {
        Short_index = (n-1) - Short_index;
        cout<<Short_index + (large_index - 1);
    }else{
        Short_index = (n-1) - Short_index;
        cout<<Short_index + large_index;

    }

    return 0;
}



