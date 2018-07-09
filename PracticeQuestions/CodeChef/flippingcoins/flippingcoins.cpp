#include<bits/stdc++.h>
using namespace std;

//Yash the Tash

int main()
{
    int x,y,a;
    cin>>x,y;
    const int n = x;
    const int o = y;
    char z[n];
    char m[o][3];
    int v[o];    
	
	
	for(int i=0;i<n;i++)
	{

	z[i]='H';}
	
	for(int j=0;j<o;j++)
	{int b,c;
 
		for(int k=0;k<3;k++)
		{
			if (m[j][0]='0')
				a=0;
			else 
				a=1;
			b=m[j][1];
			c=m[j][2];
		}   if(a=0)
		{for(int l=0;l<c;l++)
		 {if(z[l]==b)
		 {z[l]='T'}}}
		 else if(a=1)
		 {for(int u=0;u<n;u++)
		 	{v[j]=0;
		 		if (z[u]=='T')}
		 		{v[j]=v[j]+1;}}}
		 		   
		
		}
		for(int f=0;f<o;f++)
			{cout<<v[f];}

	return 0;
}
}