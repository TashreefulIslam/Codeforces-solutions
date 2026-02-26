/*
Problem: 151A-Soft Drinking
Link: https://codeforces.com/problemset/problem/151/A
Rating: 800
Author: Tashreeful Islam
*/
#include <iostream>

using namespace std;

int main()
{

    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int drink = (k*l) / nl;
    int slice = c * d;
    int salt = p / np;

    int toast = min(min(drink, slice), salt)/n;
    cout<<toast<<endl;
    return 0;
}


