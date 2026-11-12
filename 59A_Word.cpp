/*
Problem: 59A-Word
Link: https://codeforces.com/problemset/problem/59/A
Rating: 800
Author: Tashreeful Islam
*/

#include <iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int x = s.size();

    int upper = 0;
    int lower = 0;

    for(int i = 0; i < s.size(); i = i+1)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
            upper++;
        else if(s[i] >= 'a' && s[i] <= 'z')
            lower++;
    }

    for(int i = 0; i < s.size(); i = i+1){
    if(upper > lower)
        {
        s[i] =  toupper(s[i]);
    }else if(upper < lower){
        s[i] = tolower(s[i]);
    }else if(upper == lower)
    {
        s[i] = tolower(s[i]);
    }
    }

    cout<<s;
    return 0;
}
