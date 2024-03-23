#include<iostream>
using namespace std;
int main(){
int n,m;//输入n行m列。
cin>>n>>m;
int a[101][101],b[101][101],c[101][101];
for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
		cin>>a[i][j];
for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
		cin>>b[i][j];
for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
		for(int t=0;t<m;t++)
			c[i][j]+=a[i][t]*b[t][j];
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++)
	cout<<c[i][j]<<" ";
	cout<<endl;
}}