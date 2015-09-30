#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include <time.h>
using namespace std;

#define rep(i,n) for(int i=0;i<int(n);i++)
#define repi(i,a,n) for(int i=(a);i<int(n);i++)

bool com(int a,int b)
{
	return a%50<b%50;
}

int arr[]={81273,19283,1923,192873};

int main()
{
	//~ int n;
	//~ cin>>n;
	//~ vector<int> a(n);
	//~ rep(i,a.size())cin>>a[i];
	//~ vector<int> v(10,765);
	//~ rep(i,v.size())cout<<v[i]<<" ";
	vector<int> toarr(arr,arr+4);
	rep(i,toarr.size())cout<<toarr[i]<<" ";return 0;
	vector<int> prime;
	repi(i,2,1000)
	{
		bool ok=true;
		for(int j=2;j*j<=i;j++)if(i%j==0)
		{
			ok=false;
			break;
		}
		if(ok)prime.push_back(i);
	}
	//~ rep(i,prime.size())cout<<prime[i]<<" ";
	
	prime.insert(prime.begin()+5,1);
	prime.erase(prime.begin()+5);
	//~ prime.erase(prime.end());
	vector<int>::iterator it=prime.begin();
	reverse(prime.begin()+5,prime.begin()+8);
	//~ for(;it!=prime.end();it++)cout<<(*it)<<" ";
	vector<int> s(100,0);
	srand(time(NULL));
	rep(i,s.size())
	{
		s[i]=rand()%1000+1;
	}
	rep(i,s.size())cout<<s[i]<<" ";cout<<endl;
	sort(s.begin(),s.end(),com);
	rep(i,s.size())cout<<s[i]<<" ";
	return 0;
}
