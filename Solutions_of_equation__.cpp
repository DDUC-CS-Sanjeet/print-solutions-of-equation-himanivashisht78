# include<iostream>
using namespace std;


void Pattern(int n,int c)
{
	int A[n]={0};
	int sum=0;
	while(1)
	{
		bool flag=true;
		sum=0;	
		for(int i=0;i<n;i++)
		{
			
				if(A[i]==c+1)
				{
					A[i]=0;
					
					if(i==n-1)
					{
						flag=false;
						break;
					}
					A[i+1]++;
				}
			sum=sum+A[i];
		}
		if(flag==false)
		break;
		if(sum==c)
		{
			for(int i=n-1;i>=0;i--)
			cout<<A[i]<<" ";
			cout<<endl;
		}
		A[0]++;
		
	}
}


int main()
{
	int n,C;
	cout<<"Enter the number of digits in solution: ";
	cin>>n;
	cout<<"Enter the sum that you want: ";
	cin>>C;
	Pattern(n,C);
	return 0;
}
