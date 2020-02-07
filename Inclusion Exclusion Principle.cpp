//Ques: Find number of numbers between 1 and n which are divisible by any of the prime numbers less than 20
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
	ll t;
	cin>>t;
	ll primes[] = {2,3,5,7,11,13,17,19};
	while(t--){
		ll n;
		cin>>n;
		ll subsets = (1<<8) - 1; //-1 because null is not included
	    ll ans = 0;
		for(ll i=1;i<=subsets;i++)
		{
			ll denom = 1ll;   //=1ll means equal to long long
			ll setBits = __builtin_popcount(i); //given a number i counts the number fo setbit  //to count the number of set bits
			for(ll j=0;j<=7;j++)
			{
				if(i&(1<<j)){
					denom = denom*primes[j];  //from the subsets we have to find the denominator,the positions where we ahve 1 is taken in denominator
				}
			}
			if(setBits&1)       //to check whether number of setbits odd or even
			{
				ans += n/denom;   //as per general trend odd terms added
				
			}
			else
			{  ans -= n/denom;}
		}
		
	
	cout<<ans<<endl;
}
return 0;
} 
