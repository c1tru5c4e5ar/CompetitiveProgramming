#include<iostream>
#include<vector>
#include<array>
using namespace std;
typedef long long unsigned int ll;
typedef vector<int> vi;
//typedef array<int,n> ai;

int A[5] = {1,2,3,4,5};
int N = 5;

array <int,51> fi = {0};

int linearSearch(int *ar, int N, int num)
{
    if((N-1)<0)
        return 0;
    else if(*(ar+(N-1)) == num)
        return 1;
    linearSearch(A, (N-1), num);
}

int factorial(ll n)
{
    if (n == 0)
        return 1;
    return n*(factorial(n-1));
}

int fib(ll n)
{
    fi.at(0) = 1;
    fi.at(1) = 1;

    if(fi.at(n) > 0)
        return fi.at(n);

    fi.at(n) = fib(n-1)+fib(n-2);
    return fi.at(n);
}

int main()
{

    bool state = 0;
    //Iterative search
    /*
    for(int i = 0 ; i<5; ++i)
        {
            if(A[i] == num)
                state = 1;
        }
    */
    //state = linearSearch(A, N, 9);
    ll n = 10;
    //cout<<factorial(n);
    cout<<fib(n);

    return 0;
}
