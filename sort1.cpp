#include<iostream>
#include<climits>
#include<bits/stdc++.h>
#include<time.h>
using namespace std;

int main()
{
	const int nSize = 6;
	int A[nSize] = { 7 , 10 , 4 , 3 , 20 , 15 };
	
	clock_t start,end,t;
	start=clock();
	
	for (int nStartIndex = 0; nStartIndex < nSize; nStartIndex++)
	{
		int nSmallestIndex = nStartIndex;
		for (int nCurrentIndex = nStartIndex + 1; nCurrentIndex < nSize;nCurrentIndex++)
		{
			if (A[nCurrentIndex] < A[nSmallestIndex])
				nSmallestIndex  = nCurrentIndex;
				
		}
		
		swap(A[nStartIndex], A[nSmallestIndex]);
	}
	end=clock();
	int j;
	cout<<"enter the kth smallest number you want:"<<endl;
	cin>>j;
	cout<<endl<<A[j-1]<<"is the"<<j<<"smallest element";
	
	t =end-start;
	cout<<"\n time: "<<((float)t/CLOCKS_PER_SECOND);
	 
	}
