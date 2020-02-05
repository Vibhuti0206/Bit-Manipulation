#include<bits/stdc++.h>
using namespace std;
int main(){
	int cnt[64] = {0}; //Because numbe stored in 64 bits
	int n,no;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>no;
		//update the cnt array by extracting bits
		int j=0;
		while(no>0){
			int last_bit = (no&1);
			cnt[j] += last_bit;
			j++;
			no = no>>1;   
			
		}
	}
	//the number formed in the cnt array is in reverse form
	//iterate over the array from the answer by converting 0s and 1s into a number
	int p =1;
	int ans =0;
	for(int i=0;i<64;i++){
		cnt[i] %=3;
		ans += (cnt[i]*p);
		p = p<<1; //multiplication by 2^0,2^1...
		//here 0th position is multiplieed with 2^0 and so on because number in reverse form
		
		
		
	}
	//print the final answer
	cout<<ans<<endl;
	return 0;
}