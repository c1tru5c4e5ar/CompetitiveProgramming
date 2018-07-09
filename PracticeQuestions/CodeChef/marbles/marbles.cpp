#include<iostream>
#include<math.h>

using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    double p=pow((double)k,(double)(n-k));
    cout<<p<<endl;
    return 0;
}