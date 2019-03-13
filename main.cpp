#include<iostream> 
using namespace std;
int m,n,A[50005];
int ans[2000000]={0};
int i,j;
int temp;
int xx;
int sum = 0;
int main()
{
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>temp;
			A[i]=(A[i]<<1)+temp;//二进制进行存储 
		}
		ans[A[i]]++;
	}
 	int max=(1<<m)-1;
	for(i=0;i<n;i++)
	{
		xx=A[i]^max;//每一位取反 
		sum+=ans[xx];
	}
	sum/=2;
	cout<<sum;
	return 0;
} 
