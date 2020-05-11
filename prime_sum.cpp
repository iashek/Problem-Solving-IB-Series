#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
	if(n==1)
		return false;
	if(n==2)
		return true;
	if(n%2==0)
		return false;
	for(int i=3;i*i<=n;i++)
		if(n%i==0)	return false;
	return true;
}

vector<int> primeSum(int A) {
    vector<int> ans(2);
    
    for(int i=2;i<A;i++)
    {
    	if(isPrime(i) && isPrime(A-i)){
    		ans[0]=i;
    		ans[1]=A-i;
    		return ans;
    	}
	}
	return ans;
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin >> n;
	vector<int> ans=primeSum(n);
	cout << ans[0] << " " << ans[1];	
	return 0;
}

// just keep looking
// just keep looking
// i know it's amazing


