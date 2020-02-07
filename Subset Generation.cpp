#include<bits/stdc++.h>
using namespace std;
void filterchars(int n,char a[]){
	int j =0;
	while(n>0)
	{
		int last_bit=(n&1);
		if(last_bit == 1)
		{
			cout<<a[j];
		}
		j++;
		n = n>>1;
	}
	cout<<endl;
}
void printSubsets(char a[])
{
	int n = strlen(a);
	for(int i = 0;i<(1<<n);i++) //1<<n = 2^n times because for 3 letter string number of possible subsets =8 and 0-7 iteations and 7 can be represented as 111
	{
		filterchars(i,a);
	}
}
int main()
{
	char a[100];
	cin>>a;
	printSubsets(a);
	return 0;
	
}
