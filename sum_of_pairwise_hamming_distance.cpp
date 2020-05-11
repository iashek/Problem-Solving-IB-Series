#include <bits/stdc++.h>
using namespace std;


int hammingDistance(const vector<int> &A) {
    const int mod=1000000007;
    
    vector<int> binary(32,0);
    
    for(int i=0;i<A.size();i++)
    {
        int num = A[i];
        
        int index=0;
        while(num>0)
        {
            binary[index]+=num&1;
            index++;
            num = num >> 1;
        }
    }
    int sum = 0;
    for(int i=0;i<binary.size();i++)
        sum = (sum + 2*binary[i]*(A.size()-binary[i]))%mod;
    return sum;
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin >> n;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	cout << hammingDistance(v);
	
	return 0;
}

// just keep looking
// just keep looking
// i know it's amazing


