/*
Problem: 141A-Amusing Joke
Link: https://codeforces.com/problemset/problem/141/A
Rating: 800
Author: Tashreeful Islam
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string guest, host, pile;
    cin>>guest>>host>>pile;
    string s = guest + host;

    sort(s.begin(), s.end());
    sort(pile.begin(), pile.end());

    if(s == pile)
    {
        cout<<"YES"<<endl;
    }else{
    cout<<"NO"<<endl;
    }

    return 0;
}
