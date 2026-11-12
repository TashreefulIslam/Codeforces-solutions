/*
Problem: 112A-Petya and Strings
link: https://codeforces.com/problemset/problem/112/A
Rating: 800
Author: Tashreeful Islam
*/

#include <iostream>
#include<string>
using namespace std;

int main()
{
   string a, b;
   cin>>a>>b;

   for(int i = 0; i < a.size(); i = i+1)
   {
       a[i] = tolower(a[i]);
       b[i] = tolower(b[i]);

   }

   if(a == b)
   {
       cout<<"0"<<endl;
   }else{
   for(int i = 0; i <= a.size(); i = i+1){
    if(a[i] < b[i])
    {
        cout<<"-1"<<endl;
        break;
    }
    if(a[i] > b[i])
    {
        cout<<"1"<<endl;
        break;
    }
   }
   }
    return 0;
}
