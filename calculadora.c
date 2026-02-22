#include <iostream>
#include <string>
using namespace std;

void suma(int n1, int n2);
void resta(int n1, int n2);
void mult(int n1, int n2);
void division(int n1, int n2);

int main() {
    string oper = "";
    int n1, n2;
    cout << "Introduce operacion ";
    cin >> oper;
    cout << "\nIntroduce 2 numeros ";
    cin >> n1;
    cin >> n2;

    if (oper == "+") {
        suma(n1, n2);
    }
    else if (oper == "-") {
        resta(n1, n2);
    }
    else if (oper == "*") {
        mult(n1, n2);
    }
    else if (oper == "/") {
        division(n1, n2);
    }
    else {
        cout << "Operacion no valida";
    }

    return 0;
}

void suma(int n1, int n2) {
    cout << "La suma es " << n1 + n2;
}

void resta(int n1, int n2) {
    cout << "La resta es " << n1 - n2;
}

void mult(int n1, int n2) {
    cout << "La multiplicacion es " << n1 * n2;
}

void division(int n1, int n2) {
	if (n2 == 0) {
		cout << "Operacion no valida";
	}
	else {
    cout << "La division es " << double(n1) / double(n2);
	}
}
