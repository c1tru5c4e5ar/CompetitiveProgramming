#include<bits/stdc++.h>
using namespace std;

int main()
{
	ifstream fin("Input.txt", ios::in);
	ofstream fout("C:\\CompetitiveProgramming\\C++_STL\\Iterators\\Output.txt", ios::out); //NOT WORKING

	std::vector<int> v;
	copy(istream_iterator<int>(fin), istream_iterator<int>(), back_inserter(v));
	fin.close();

	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " ")); 
	//for(std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
	//		std::cout<<*it<<" ";
	fout.close();


	/*
std::copy
	template <class InputIterator, class OutputIterator>
  		OutputIterator copy (InputIterator first, InputIterator last, OutputIterator result);

Copy range of elements
Copies the elements in the range [first,last) into the range beginning at result.
The function returns an iterator to the end of the destination range (which points to the element following the last element copied).
The ranges shall not overlap in such a way that result points to an element in the range [first,last).
	*/

	

	return 0;
}