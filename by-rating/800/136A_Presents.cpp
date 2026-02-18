/*
Problem: 136A-Presents
Link: https://codeforces.com/problemset/problem/136/A
Rating: 800
Author: Tashreeful Islam
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
   
   int n, x;
   cin>>n;

   vector < int > a(101);

   for(int i = 1; i <= n; i = i+1)
   {
       cin>>x;
       a[x] = i;
   }

   for(int i = 1; i <= n; i = i+1)
   {
       cout<<a[i]<<" ";
   }
    return 0;
}
