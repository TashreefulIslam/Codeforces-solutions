/*
Problem: 155A-I_love_username
Link: https://codeforces.com/problemset/problem/155/A
Rating: 800
Author: Tashreeful Islam
*/


#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int A[t];
    for(int i = 0; i < t; i = i + 1)
    {
        cin>>A[i];
    }
    int high = A[0];
    int low = A[0];
    int count = 0;
    for(int i = 0; i < t; i = i + 1)
        {
            if(A[i] > high)
            {
                count++;
                high = A[i];
            }else if(A[i] < low)
            {
                count++;
                low = A[i];
            }
        }

    cout<<count;
    return 0;
}
