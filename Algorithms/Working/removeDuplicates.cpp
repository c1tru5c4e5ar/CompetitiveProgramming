#include<bits/stdc++.h>

using namespace std;

int main()
{

int N;
cin>>N;

std::vector<int> vi;

for(int i = 0; i<N-1; ++i)
{
  int x;
  cin>>x;
  vi.push_back(x);
}

//std::unordered_set<int> s (vec.begin(), vec.end());
//vec.clear();
//vec.assign(s.begin(), s.end());

sort( vi.begin(), vi.end() );
vi.erase( unique(vi.begin(), vi.end()), vi.end() );

for(auto i:vi)
{
  cout<<i<<" ";
}

return 0;
}
