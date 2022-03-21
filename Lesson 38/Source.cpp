#include <iostream>
using namespace std;

int fact(int n) {
	if (n <= 1)
		return 1;
	return n * fact(n - 1);
}

int fibo(int n);

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	//��������
	/*cout << "������� �����: ";
	cin >> n;
	cout << n << "! = " << fact(n) << endl;*/

	//������ 1
	cout << "������ 1.\n������ 13 ���e� ���������:\n";
	for (int i = 0; i < 13; i++)
		cout << i << ". " << fibo(i) << endl;

	return 0;
}

int fibo(int n){
	if (n == 0 || n == 1)
		return n;
	return fibo(n - 2) + fibo(n - 1);
}
