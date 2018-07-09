#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//template <typename T>
void squares(vector<vector<int>> &ar)
{
  for(int i = 0; i<5; ++i)
    for(int j = 0; j<5; ++j)
    {
      ar[i][j] *= ar[i][j];
    }
}

int main() {

  std::vector<int> vi;
  //std::vector<int> :: iterator i;
  //std::vector<int> :: reverse_iterator ir;

  for(int i = 0; i<5; ++i)
    vi.push_back(i);

  //for(vector<int>::iterator itr = vi.begin(); itr != vi.end(); ++itr)
  //{
  //  cout<<*itr<<" ";
  //}

//  for(auto& it : vi)
//    cout<<it<<' ';
/*
  int arr[5][5];
  int even = 0;


*/
std::vector<vector<int>> va;

std::std::vector<int> row;
row.push_back(0);
row.push_back(2);
row.push_back(4);
row.push_back(6);
row.push_back(8);
row.push_back(10);

va.push_back(row);

cout<<va;

  //int *p = arr;
//  cout<<arr[1][1];


  //Output from start to end
  //for(i = vi.begin(); i != vi.end(); ++i)
  //  cout<<*i<<'\t';

  //cout<<endl<<endl;
  //cout<<"Output of rbegin and rend";

 //for(ir = vi.rbegin(); ir != vi.rend(); ++ir)
  //cout<<*ir<<'\t';

  return 0;
}
