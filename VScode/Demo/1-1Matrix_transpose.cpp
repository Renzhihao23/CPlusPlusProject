#include<iostream>
using namespace std;
#define n 4
#define m 3
int main(){
	int a[n][m];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		cin>>a[i][j];
	for(int i=0;i<m;i++){//此处输出应该是m行n列
		for(int j=0;j<n;j++)
		{cout<<a[j][i]<<" ";}
		cout<<endl;}
}