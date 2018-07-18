#include<bits/stdc++.h>
#define viter std::vector<int>::iterator
#define pb push_back
#define vi std::vector<int>
using namespace std;

void mergeSort(vector<int>::iterator first, vector<int>::iterator last)
{
//Base case: if size of array <=1, it is sorted.

  if(distance(first, last) <= 1)
    return ;

//Split Array by finding middle position

  vector<int>::iterator mid = first;
  advance(mid, distance(first, last)/2);

//Call mergeSort on both halves
                            //Indices:
  mergeSort(first, mid);    //First -> Mid-1
  mergeSort(mid, last);     //Mid -> Last-1


//Merge both sorted arrays into a new array

  vector<int> v;
  v.reserve(distance(first,last));

  //std::inplace_merge(first, mid, last); //Does the same as below snippet

///*
  vector<int>::iterator i;
  vector<int>::iterator j;

  for(i = first, j = mid ; i != mid && j != last ; ){
    if(*i <= *j)
    {
      v.pb(*i);
      ++i;
    }
    else
    {
      v.pb(*j);
      ++j;
    }
  }
//Check for remaing element in case size of initial array was odd
while(i < mid){
  v.pb(*i);
  ++i;
}

while(j < last){
  v.pb(*j);
  ++j;
}
//*/
//Swap new sorted array with inital unsorted array
std::swap_ranges(first, last, v.begin());
//Done :)
}

int main()
{
  std::vector<int> arr;

  ifstream fin("Input.txt", ios::in);
  arr.insert(arr.begin(), istream_iterator<int>(fin), istream_iterator<int>());


  //Call mergeSort on array
  mergeSort(arr.begin(), arr.end());

  copy(arr.begin(), arr.end(), ostream_iterator<int>(cout, " "));

  return 0;
}
