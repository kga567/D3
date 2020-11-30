#include<iostream>
#include<windows.h>
using namespace std;
int souoc(int n)
{
	int tong = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
		{
			tong++;
		}
	return tong;
}

int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	int dem = souoc(n);
	cout << "So uoc cua n:" << dem << endl;
	return 0;
}
