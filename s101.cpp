#include<stdio.h>

#include<bits/stdc++.h>
using namespace std;


int main()
{
	 int n,s=1;
	 cout<<"enter no";
	 cin>>n;
	 int x=0,y=n/2,mid;
	 while(x<=y)
	 {
		 mid=(x+y)/2;
		 if(mid*mid==n)
		 {
			 s=mid;
			 break;
		 }
		 else if(mid*mid<n)
		 {
			 x=mid+1;
		 }
		 else y=mid-1;
	 }
	 cout<<"sq root =";
	if(s==1)
	      cout<<x-1;
		  else
			  cout<<s;
		  return 0;
		  
		  
		  
}		