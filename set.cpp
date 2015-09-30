#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

#define rep(i,n) for(int i=0;i<int(n);i++)
#define repi(i,a,n) for(int i=(a);i<int(n);i++)

char s[]="123";

#define x first
#define y second
#define pb push_back
#define mp make_pair

int arr[]={81273,19283,1923,81273,192873};

class Chutmarani
{
	public:
	int x;
	string y;
};

bool operator<(Chutmarani a,Chutmarani b)
{
	return a.x<b.x;
}

int main()
{
	set<int> st(arr,arr+5);
	st.insert(50);
	st.erase(st.begin());
	//~ st.erase(1923);
	//~ st.erase(st.find(1923));
	//~ cout<<*st.find(1923)<<endl;
	cout<<st.count(81273)<<endl;
	for(set<int>::iterator it=st.begin();it!=st.end();it++)cout<<*it<<" ";cout<<endl;
	// to check if there
	//1.
	if(st.find(1923)!=st.end());
	//2.
	if(st.count(1923));
	set<Chutmarani> ct;
	ct.insert((Chutmarani){0,"akjshd"});
	multiset<int> mt(arr,arr+5);
	//~ mt.erase(81273);
	//~ mt.erase(mt.find(81273));
	for(set<int>::iterator it=mt.begin();it!=mt.end();it++)cout<<*it<<" ";cout<<endl;
	
	mt.upper_bound()
	return 0;
}
