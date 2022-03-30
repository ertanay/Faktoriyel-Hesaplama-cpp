#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	double n, faktoriyel, i;
	faktoriyel = 1;
	cout << "Faktoriyel alınacak değeri giriniz: ";
	cin >> n;
	for (i=1; i<=n; i+=1)
	{
		faktoriyel = faktoriyel * i;
	}
	cout << "Faktoriyel " << faktoriyel << endl;
}
