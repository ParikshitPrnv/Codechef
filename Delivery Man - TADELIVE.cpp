#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	// your code goes here
	ll orders,orders_andy,orders_bob;
	cin>>orders>>orders_andy>>orders_bob;
	int order_values_andy[orders],order_values_bob[orders];
	for(int i=0;i<orders;i++) cin>>order_values_andy[i];
	for(int i=0;i<orders;i++) cin>>order_values_bob[i];
	ll sum=0;
	for(int i=0;i<orders;i++)
	{
	    if(order_values_andy[i]>order_values_bob[i] && orders_andy>0)
	    {
	        sum+=order_values_andy[i];
	        orders_andy--;
	    }
	    else if(order_values_andy[i]<=order_values_bob[i] && orders_bob>0)
	    {
	        sum+=order_values_bob[i];
	        orders_bob--;
	    }
	}
	cout<<sum;
	return 0;
}
