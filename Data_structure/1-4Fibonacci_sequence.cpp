
#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	
    int* p=new int[n + 1];
	*p = 1,*(p+1)=1;
	for(int i=3;i<=n;i++)
		*(p+i)=*(p+i-1)+*(p+i-2);
	cout<<*p;
    delete[] p;
	return 0;	
}