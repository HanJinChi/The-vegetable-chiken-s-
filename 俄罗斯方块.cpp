#include<iostream>
#include<cstdio>
using namespace std;
int a[15][10];
int b[4][4];
int c[4][3]; 
int t; 
int main()
{
	freopen("C:\\test.txt","r",stdin);
	int k=0;
	for(int i=0;i<15;i++)
	for(int j=0;j<10;j++)
	cin>>a[i][j];
	for(int i=0;i<4;i++)
	for(int j=0;j<4;j++)
	cin>>b[i][j];
	cin>>t;
	for(int j=0;j<4;j++)
	{
		int temp=0;
	for(int i=3;i>=0;i--)
	{
		if(b[i][j]==1&&temp==0)
		{
			a[i][j+t-1]=1;
			c[k][0]=i;
			c[k][1]=j+t-1;
			c[k][2]=1;
			k++;
			temp=1;	
		}
		else
		if(b[i][j]==1&&temp==1)
		{
			a[i][j+t-1]=1;
			c[k][0]=i;
			c[k][1]=j+t-1;
			c[k][2]=0;
			k++;
		 } 
	}
	}
	for(int i=0;i<14-c[4][1];i++)
	{
		int temp=0;
		for(int j=0;j<k;j++)
		{
			if(a[c[j][0]+1][c[j][1]]==1&&c[j][2]==1)
			 temp=1;
		}
		if(temp==1)
		{
			break;
		}
		else{
			for(int j=0;j<k;j++)
		{
			a[c[j][0]][c[j][1]]=0;
			a[c[j][0]+1][c[j][1]]=1;
			c[j][0]++;
		}
		}
	}
	for(int i=0;i<15;i++)
	for(int j=0;j<10;j++)
	{
		if(j==9)
		cout<<a[i][j]<<endl;
		else
		cout<<a[i][j]<<" ";
	}
	return 0;	
 } 
