#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int arr[100005];
	cin>>n;
	int no;
	int result =0;
	for(int i=0;i<n;i++)
	{
		cin>>no;
		arr[i] = no;
		result = result^no;
	}
	//result = a^b;
	int temp = result;
	int pos =0;
	while((temp&1) != 1)
	{
		pos++;
		temp = temp>>1;
		
	}
	//the first bit in xor is at position 'pos'
	int mask = (1<<pos);
	//find those numbers which contain set bit at position pos
	int x=0;
	int y=0;
	for(int i=0;i<n;i++)
	{
		if((arr[i]&mask ) > 0 )
		{
			x = x^arr[i];
		}
	}
	y = result^x;
	cout<<min(x,y)<<" "<<max(x,y)<<endl; //to print in ascending order;
	return 0;
}
