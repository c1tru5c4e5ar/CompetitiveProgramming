#include<iostream>
#include<array>

using namespace std;

int main()
{
    //array <int,5> A = {0};
    //int A[5] = {1,2,3,4,5};
    int B[4][5];

    //int *p = A;

    //cout<<*(p+1);
    int a = 00;
    for(int r = 0; r<4; ++r)
        for(int c = 0; c<5; ++c)
            {
                B[r][c] = a;
                ++a;
            }


    for(int r = 0; r<4; ++r)
    {
        for(int c = 0; c<5; ++c)
            {
                cout<<B[r][c]<<' ';
            }
        cout<<endl;
    }
    //for(int *i:B)
    //    cout<<*i;

    return 0;
}
