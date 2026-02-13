/*
Problem: 61A-Ultra-Fast Mathematician
Link: https://codeforces.com/problemset/problem/61/A
Rating: 800
Author: Tashreeful Islam
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1, s2;
    cin>>s1>>s2;

    for(int i = 0; i < s1.size(); ++i)
    {
        if(s1[i] == s2[i])
        {
            s1[i] = '0';
        }else{
            s1[i] = '1';
        }
    }
    cout<<s1<<endl;
    return 0;
}
