#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(pair<ll,ll> &a,pair<ll,ll> &b)
{
    return a.first>b.first;
}

int main() {
	// your code goes here
	ll n,x,y;
	cin>>n>>x>>y;
	ll a[n],b[n];
	for(ll i=0;i<n;i++) cin>>a[i];
	for(ll i=0;i<n;i++) cin>>b[i];
	vector<pair<ll,ll>> greedy;
	for(int i=0;i<n;i++)
	{
	    ll diff=abs(a[i]-b[i]);
	    greedy.push_back(make_pair(diff,i));
	}
	sort(greedy.begin(),greedy.end(),cmp);
	ll ans=0;
	for(auto i:greedy)
	{
	    int idx=i.second;
	    if(a[idx]>b[idx])
	    {
	        if(x>0)
	        {
	        ans+=a[idx];
	        x--;
	        }
	        else if(y>0)
	        {
	            ans+=b[idx];
	        y--;
	        }
	        else
	         ans+=max(a[idx],b[idx]);
	    }
	    else if(a[idx]<=b[idx])
	    {
	        if(y>0)
	        {
	            ans+=b[idx];
	        y--;
	        }
	        else if(x>0){
	            ans+=a[idx];
	        x--;
	        }
	        else
	         ans+=max(a[idx],b[idx]);
	    }
	    }
	   
	
	cout<<ans;
	return 0;
}
