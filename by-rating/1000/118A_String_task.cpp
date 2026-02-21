/*
Problem: 118A-String task
Link: https://codeforces.com/problemset/problem/118/A
Rating: 1000
Author: Tashreeful Islam
*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s, result = "";
    cin>>s;

    for(int i = 0; i < s.size(); i = i+1)
    {
        char ch = tolower(s[i]);

        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y')
        {
            continue;
        }else{
         result = result + ".";
         result = result + ch;
        }

    }
  
    cout<<result;
    return 0;
}
