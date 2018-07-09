#include<bits/stdc++.h>
//#include<vector>
//#include<array>
//#include<algorithm>

using namespace std;

//#define vector <int> vi;

int fib(int n) //Dynamic Programming approach for computing fibonacci sequence;
{
    vector <int> fibonacci(51,-1);
    fibonacci.at(0)=0;
    fibonacci.at(1)=1;

    if(fibonacci.at(n)>=0)
        return fibonacci.at(n);
    else
    {
    	for(int i = 2; i<=n; ++i)
    		fibonacci.at(i) = fibonacci.at(i-1)+fibonacci.at(i-2);

    	return fibonacci.at(n);
    }
}
///*
int dynamicFib(int n)//Another dynamic approach to fibonacci
{
    array <int,51> f;
    f.fill(-1);
    f.at(0) = 0;
    f.at(1) = 1;

    if(n<=1)
        return n;

    else if(f.at(n)!=-1)
        return f.at(n);

    else
        {
            f.at(n) = dynamicFib(n-1) + dynamicFib(n-2);
            return f.at(n);
        }
//*/
}

int recursiveFib(int n)
{
    if(n<=1)
        return n;
    return recursiveFib(n-1)+recursiveFib(n-2);

    //Time complexity
}


int main()
{
    cout<<"Enter Number: ";

    int numberInFibonacciSequence;
    cin>>numberInFibonacciSequence;

    //cout<<fib(numberInFibonacciSequence);
    cout<<dynamicFib(numberInFibonacciSequence);
    //cout<<recursiveFib(numberInFibonacciSequence);



    //Iterative approach(i guess)

    /*int a(0), b(1), c;
    for(int i = 0; i<(n+1); ++i)
    	{
    		c=a+b;
    		a=b;
    		b=c;
    	}

    cout<<c;
	*/

    return 0;
}
