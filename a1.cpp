#include <stdio.h>
#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(int argc, char **argv)
{
	    int n;
		cin>>n;
		int a[n]={0};
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		cout<<"max value is";
		cout<<a[n-1];
		return 0;
}