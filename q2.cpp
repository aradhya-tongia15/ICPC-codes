#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;
#define ff first
#define ss second

// multiset< pair< string, bool> > mset;
// pair< string, bool > temp;
vector< pair< ll, pair< ll, ll > > > arr;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;
		bool ans=true;
		for(ll i=0;i<n;i++)
		{
			ll temp_l,temp_r,temp_v;
			cin >> temp_l >> temp_r >> temp_v;
			arr.push_back(make_pair(temp_v,make_pair(temp_l,temp_r)));
		}
		sort(arr.begin(), arr.end());
		for(ll i=0;i<n;)
		{
			ll vel=arr[i].ff;
			ll j=i+1;
			while(arr[j].ff==vel)j++;
			for(ll k=i;k<j;k++)
			{
				ll ol=0;
				for(ll l=i;l<k;l++)
				{
					if(arr[l].ss.ss>=arr[k].ss.ff)
						ol++;
				}
				if(ol>1)
				{
					ans = false;
					break;
				}
			}
			if(!ans)
				break;
			i=j;
		}
		if(ans)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
		arr.clear();
	}
}