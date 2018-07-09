#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

int generic_root(int num)
{
    return num>9?(num%9):9;
}

int main()
{
ios::sync_with_stdio(0);
//cin.tie(0);

int n;
cin>>n;


if(n<=9)
    cout<<n;
else
{
    int sum;
    int num = n;

    for(;n>9;)
        {
            sum = 0;
            for(;num != 0;)
            {
                sum+= num%10;
                num = num/10;
            }

            if(sum>9)
                num = sum;
            else
                break;
        }
    cout<<sum;
}

//cout<<generic_root(n);

return 0;
}
