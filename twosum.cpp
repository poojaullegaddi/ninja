//two sum problem
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={2,6,5,8,11};
	int target=14;
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]+a[j]==target)
			{
			   cout<<i<< " "<<j;
		   }
	   }
   }
   return 0;
}
