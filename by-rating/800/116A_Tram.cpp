/*
Problem: 116A-Tram
Link: https://codeforces.com/problemset/problem/116/A
Rating: 800
Author: Tashreeful Islam
*/

#include<iostream>
using namespace std;
int main()

{
    int n, a, b, p = 0, mini = 0;

    cin>>n;

    for(int i = 0; i < n; i = i+1)
    {
        cin>>a>>b;

        p = p - a + b;

        if(p > mini)
        {
           mini = p;
        }
    }
    cout<<mini<<endl;
    return 0;
}
