/*
Problem: 200B - Drinks
Link: https://codeforces.com/problemset/problem/200/B
Rating: 800
Author: Tashreeful Islam
*/


#include <iostream>
using namespace std;
int main()
{
//write your code here
int n;
cin>>n;
int sum = 0;
double result = 0;
int A[n];


for(int i = 0; i < n; i = i + 1)
{
    cin>>A[i];
    sum = sum + A[i];
}
result = (double)sum / n;
cout<<result;
return 0;
}
