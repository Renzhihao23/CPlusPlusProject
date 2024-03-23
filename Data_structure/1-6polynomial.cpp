
#include<iostream>
#include<cmath>
using namespace std;

int main(void)
{
    double sum = 0.0;
    int j = 0;
    for(int i = 0; i < 100; i++)
    {
        sum += 1 / ((i+1) * pow(-1, j++));
    }
    cout << sum << endl;

    system("pause");
    return 0;
}
