#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define rep(i,n) for(int i=0;i<int(n);i++)
#define repi(i,a,n) for(int i=(a);i<int(n);i++)

char s[]="123";

#define x first
#define y second
#define pb push_back
#define mp make_pair

template <class X,class Y> ostream & operator<<(ostream & o,pair<X,Y> p)
{
	o<<"("<<p.first<<","<<p.second<<")";
	return o;
}


int main()
{
	//~ vector<pair<int,string>> st(10,make_pair(905001,"Lappu")); // eita na
	vector<pair<int,string> > st(10,make_pair(905001,"Lappu")); // eita
	rep(i,st.size())cout<<make_pair(st[i],st[(i+1)%st.size()])<<endl;
	string str=string("aaksjdghkjashdkjahsdk")+"01";
	int pos=4;
	cout<<str.substr(pos,100)<<endl; // pos theke num ta char nia
	cout<<str.find("dg",3);
	
	
	
	return 0;
}
