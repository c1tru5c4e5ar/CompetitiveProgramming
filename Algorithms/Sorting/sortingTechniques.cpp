#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>

using namespace std;

struct Coordinate
{
  int x;
  int y;
};

bool compare(Coordinate i1, Coordinate i2)
{
  return i1.x < i2.y;
}

int main()
{
  std::vector<Coordinate> arr = {{6,4} , {3,5} , {8,13} , {2,7}};
  std::sort(arr.begin(), arr.end(), compare);

  std::vector<Coordinate>::iterator it;
  for(unsigned int i = 0; i < arr.size(); ++i)
  {
    cout<<arr.at(i).x<<":"<<arr.at(i).y<<endl;
  }

  return 0;
}
