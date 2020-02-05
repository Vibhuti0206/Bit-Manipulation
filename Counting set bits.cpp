#include<bits/stdc++.h>  // Given a number N,find numbe of set bits in binary representation of it...N=13, binary =1101, ouput 3
using namespace std;
int countBits(int n){
	int ans =0;
	while(n>0){
		ans += (n&1);
		n = n>>1;
	}
	return ans;
}
int main()
{
	int n;
	cin>>n;
	cout<<countBits(n)<<endl;
	return 0;
	
}
