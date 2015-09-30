#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <map>
using namespace std;

#define rep(i,n) for(int i=0;i<int(n);i++)
#define repi(i,a,n) for(int i=(a);i<int(n);i++)

#define x first
#define y second
#define pb push_back
#define mp make_pair

int arr[]={81273,19283,1923,81273,192873};

template <class X,class Y> ostream & operator<<(ostream & o,pair<X,Y> p)
{
	o<<"("<<p.first<<","<<p.second<<")";
	return o;
}

int main()
{
	srand(time(NULL));
	map<string,int> id;
	int c=0;
	rep(i,100)
	{
		string p="";
		rep(i,3)
		{
			p.pb(rand()%10+'a');
		}
		if(id.count(p)==0)
		{
			id[p]=c++;
		}
	}
	id["a"];
	id.erase("akajshd");
	cout<<c<<endl;
	for(map<string,int>::iterator it=id.begin();it!=id.end();it++)cout<<it->first<<" "<<it->second<<endl;cout<<endl;
	return 0;
}
