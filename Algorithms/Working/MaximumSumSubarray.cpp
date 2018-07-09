#include<bits/stdc++.h>
using namespace std;

int BruteForce1(int *ar, int N); // O(n^3)
int BruteForce2(int *ar, int N);
int OptimizedBruteForce(int *ar, int N); //O(n^2)
int KadanesAlgorithm(int *ar, int N); //O(n)


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    //int ar[] = {1, -3, 2, -5, 7, 6, -1, -4, 11, -23};
    int ar[] = {-1, 2, 4, -3, 5, 2, -5, 2};
    int N = sizeof(ar)/sizeof(ar[0]);

    //cout<<BruteForce1(ar, N);
    //cout<<OptimizedBruteForce(ar, N);
    cout<<KadanesAlgorithm(ar, N);
    //cout<<BruteForce2(ar, N);

    return 0;
}

int BruteForce1(int *ar, int N)
{
 //Generate all Possible Subarrays and compare sum: O(n^3);
    int sum = INT_MIN;
    int maxsum = INT_MIN;
    for(int i=0; i<N; ++i)
      {
        for (int j=i; j<N; ++j)
            {
                sum = 0;
                for(int s=i; s<=j; ++s)
                    sum += *(ar+s);

                maxsum = max(maxsum, sum);
            }
      }
      return maxsum;
}

int BruteForce2(int* ar, int N)
{
//Brute Force approach in reverse: 0(n^2);
    int sum = 0;
    int maxsum = 0;
    for(int i = 0; i<N; ++i)
        {
            sum = 0;
            for(int j = i; j>0; --j)
                {
                    sum += *(ar+j);
                }
            maxsum = max(maxsum, sum);
        }

    return maxsum;
}

int OptimizedBruteForce(int *ar, int N)
{
    //Optimize BruteForce: O(n^2);
    int sum = INT_MIN;
    int maxsum = INT_MIN;
    for(int i = 0; i<N; ++i)
        {
            sum = 0;
            for(int j = i; j<N; ++j)
                {
                    sum += *(ar+j);
                    maxsum = max(sum, maxsum);
                    //cout<<ar[j]<<" ";
                }
            //cout<<endl;
        }
    return maxsum;
}

int KadanesAlgorithm(int *ar, int N)
{
    //Kadane's Algorithm

    int sum = 0;
    int maxsum = 0;
    for(int i = 0; i<N; ++i)
        {
            sum = max(ar[i], sum+ar[i]);
            maxsum = max(sum, maxsum);
        }
    return maxsum;
}
