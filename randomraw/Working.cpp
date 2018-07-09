#include<bits/stdc++.h>
#include<math.h>
#include<conio>
//#include<iostream>
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

int n;
cin>>n;

static int length = log10(n)+1;

int num[length];

for(int i = 0 ; n != 0; ++i)
    {
    num[i] = n%10;
    n /= 10;
    //cout<<num[i]<<' ';
    }

int arr[length][length];

//for(int r = 0; r<length; ++r)
//    for(int c = 0; c<length; ++c)
//        {

//        }
//cout<<length;
//for(int i = 0; i<length; ++i)
//    cout<<num[i]<<endl;


return 0;
}
