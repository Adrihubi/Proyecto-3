#include <iostream>

using namespace std;

int main() {
	
	int numeros[6] = { 10, 20, 30, 40, 50, 60 };
	int n[] = { 3, 4, 5 };
	char c[] = { 'L','u','i','s' };
	char s[] = "Mona Lisa";


	for (int i = 0; i < 6; i++) {
		cout << "Los numeros son: " << numeros[i] << endl;
	}
	cout << "El tipo de valor es int"<<endl;
	cout << "\n";

	for (int i = 0; i < 3; i++) {
		cout << "Los numeros son: " << n[i] << endl;
	}
	cout << "El tipo de valor es int" << endl;
	cout << "\n";

	for (int i = 0; i < 4; i++) {
		cout << "El nombre es: " << c[i] << endl;
	}
	cout << "El tipo de valor es char" << endl;
	cout << "\n";

	for (int i = 0; i < 9; i++) {
		cout << s[i];
	}
	cout << "\n";
	cout << "El tipo de valor es char" << endl;
	cout << "\n";

	system("pause");
	return 0;
}