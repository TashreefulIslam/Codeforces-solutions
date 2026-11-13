#include<iostream>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        int n;
        string s;
        cin>>n>>s;

        char current = 'R';
        int count = 0;

        for(int i = 0; i < n; i += 1)
        {
            if(current != s[i])
            {
                count++;
                if(current == 'R')
                    current = 'B';
                else 
                    current = 'R';

            }
        if(current == 'R')
            current = 'B';
        else 
            current = 'R';
        

        }

        cout<<count<<endl;
    }
}