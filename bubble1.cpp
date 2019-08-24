#include<iostream> 
using namespace std;
 
int main()
{
int a[50],n,i,j,temp,k;
cout<<"Enter the size of array: ";
cin>>n;
cout<<"Enter the elements in an array: "; 
for(i=0;i<n;++i)
cin>>a[i];
for(i=1;i<n;++i)
{
for(j=0;j<(n-i);++j)
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
cout<<"Sorted array: ";
for(i=n-1;i>=0;i--)
{
	cout<<" "<<a[i];
}
	cout<<"Enter value of k for the k number of largest element";
	cin>>k;
	for(i=n-1; i>=n-k;i--)
		{
			cout<<" ";
			cout<<a[i];
		}


}
