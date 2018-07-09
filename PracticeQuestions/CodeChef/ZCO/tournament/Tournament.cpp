/*

N teams participate in a league cricket tournament on Mars, where each pair of distinct teams plays each other exactly once. Thus, there are a total of (N × (N-1))/2 matches. An expert has assigned a strength to each team, a positive integer. Strangely, the Martian crowds love one-sided matches and the advertising revenue earned from a match is the absolute value of the difference between the strengths of the two matches. Given the strengths of the N teams, find the total advertising revenue earned from all the matches.

For example, suppose N is 4 and the team strengths for teams 1, 2, 3, and 4 are 3, 10, 3, and 5 respectively. Then the advertising revenues from the 6 matches are as follows:

Match 	Team A 	Team B 	Ad revenue
1 	1 	2 	7
2 	1 	3 	0
3 	1 	4 	2
4 	2 	3 	7
5 	2 	4 	5
6 	3 	4 	2


Thus the total advertising revenue is 23.

*/


//WARNING
//This program takes
//more than 1 second
//to run in certain test cases.

#include<iostream>
//#include<stdlib.h>
//#include<algorithm>
using namespace std;

int main()
{
    long long int noOfTeams;
    cin>>noOfTeams;

    long long int strengthsOfTeams[noOfTeams];
    for(long long int i = 0; i<noOfTeams; ++i)
        cin>>strengthsOfTeams[i];

    //sort(strengthsOfTeams, strengthsOfTeams+noOfTeams);

    long long int adRevenue = 0;

    for(long long int i = 0; i<noOfTeams ; ++i)
    {
        for (long long int j = i+1; j<noOfTeams ; ++j)
        {
            if (strengthsOfTeams[i]>=strengthsOfTeams[j])
                adRevenue += (strengthsOfTeams[i]-strengthsOfTeams[j]);
            else
                adRevenue += (strengthsOfTeams[j]-strengthsOfTeams[i]);
        }
    }
    cout<<adRevenue;

    return 0;
}
