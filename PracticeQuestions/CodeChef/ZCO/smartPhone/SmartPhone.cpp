/*
 You are developing a smartphone app. You have a list of potential customers for your app. Each customer has a budget and will buy the app at your
 declared price if and only if the price is less than or equal to the customer's budget.

You want to fix a price so that the revenue you earn from the app is maximized. Find this maximum possible revenue.

For instance, suppose you have 4 potential customers and their budgets are 30, 20, 53 and 14. In this case, the maximum revenue you can get is 60.

Input format

Line 1 : N, the total number of potential customers.

Lines 2 to N+1: Each line has the budget of a potential customer.

Output format

The output consists of a single integer, the maximum possible revenue you can earn from selling your app.
*/

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    long long noOfCustomers;
    cin>>noOfCustomers;

    long long budgetsOfCustomers[noOfCustomers];

    for(int i = 0; i<noOfCustomers; ++i)
    {
        cin>>budgetsOfCustomers[i];
    }

    sort(budgetsOfCustomers, budgetsOfCustomers+noOfCustomers);

    long long greatest = budgetsOfCustomers[0]*(noOfCustomers);;
    long long temp = 0;
    for(int i = 1; i<noOfCustomers; ++i)
    {
        temp = budgetsOfCustomers[i]*(noOfCustomers-i);
        if(temp>greatest)
            greatest = temp;

    }

    cout<<greatest;

    return 0;
}
