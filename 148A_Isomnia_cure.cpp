/*
Problem: 148A-Isomnia cure
Link: https://codeforces.com/problemset/problem/148/A
Rating: 800
Author: Tashreeful Islam
*/

#include <iostream>
#include <set>
using namespace std;
int main()
{
    int k, l, m, n, d;
    cin>>k;
    cin>>l;
    cin>>m;
    cin>>n;
    cin>>d;
    set <int> A;
    int flag = 0;
    for(int i = 1; i <= d; i = i + 1)
    {
        if(k == 1 || l == 1 || m == 1 || n == 1)
        {
            flag = 1;
        }else{
        if(i % k == 0)
        {
            A.insert(i);
        }else if(i % l == 0){
            A.insert(i);

        }else if(i % m == 0){
            A.insert(i);

        }else if(i % n == 0){
            A.insert(i);

        }
        } //end of else
    }

    if(flag == 1){
        cout<<d;
    }else{
    cout<<A.size();
    }

    return 0;
}
