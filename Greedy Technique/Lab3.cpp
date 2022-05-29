#include <iostream>
using namespace std;
typedef struct 
{
	int CN,CV,TG;
} PhanCong;
typedef struct 
{
	int TG,STT;
} Data;
void ReadData(Data a[100][100], int &n)
{
	cout<<"Nhap n: ";
	cin>>n;
	int i,j;
	for (i=0;i< n;i++)
	{
		for (j=0;j< n;j++)
		{
			cin>>a[i][j].TG;
			a[i][j].STT=0;
		}
	}
	}	
void PrintData(Data a[100][100], int n)
{
  cout<<"Mang vua nhap la\n";
	int i,j;
	for (i=0;i< n;i++)
	{
		for (j=0;j< n;j++)
		{
			cout<<a[i][j].TG<<" ";
		}
		cout<<"\n";
	}
	}	
void CapNhatCongViec(Data a[100][100],int n,int j)	
{
	int i;
	for (i=0; i<n;i++)
	{
		a[i][j].STT=1;
	}
}
int MinofRow(Data a[100][100],int n,int i,int *j)
{
		int TGMin=32767,k;
		for(int k=0;k<n;k++)
		{
			if (a[i][k].STT==0 && a[i][k].TG<TGMin)
			{
				TGMin=a[i][k].TG;
				*j=k;
			}
		}
		return TGMin;
	}

void Greedy(Data a[100][100],int n, PhanCong PA[])
{
	int i,j;
	for (i =0;i<n;i++)
	{
		PA[i].CN=i+1;
		PA[i].TG=MinofRow(a,n,i,&j);
		PA[i].CV=j+1;
		CapNhatCongViec(a,n,i);
	}
		}		
void PrintPA(PhanCong PA[],int n)
{
	int i,sum=0;
	cout<<"Phuong an phan cong nhu sau :\n";
	for (i=0;i<n;i++)
	{
		cout<<PA[i].CN<<" "<<PA[i].CV<<" "<<PA[i].TG<<"\n";
		sum=sum+PA[i].TG;
	}
	cout<<"Tong thoi gian thuc hien la : "<<sum;
	
	
		}		
int main()
{
		Data a[100][100];
		int n;
		ReadData(a, n);
		PhanCong PA[n];
		PrintData(a,n);
		Greedy(a,n,PA);
		PrintPA(PA,n);
		
	
	return 0;
}