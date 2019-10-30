#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

multiset< pair< string, bool> > mset;
pair< string, bool > temp;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;
		for(ll i=0;i<n;i++)
		{
			string str;
			bool val;
			cin >> str >> val;
			mset.insert(make_pair(str,val));
		}
		ll count=0;
		while(!mset.empty())
		{
			temp = make_pair((*mset.begin()).first,!(*mset.begin()).second);
			if(mset.count(*mset.begin()) >= mset.count(temp))
			{
				mset.erase(temp);
				count+=mset.count(*mset.begin());
				mset.erase(*mset.begin());
			}
			else
			{
				mset.erase(*mset.begin());
				count+=mset.count(temp);
				mset.erase(temp);
			}
		}
		cout << count << endl;
		mset.clear();
	}
}