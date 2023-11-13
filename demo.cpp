#include <iostream>
using namespace std;

int main() {
int n;
int aux = -1;
cin >> n;
            for (int i = 0; i <= (n+1); i++) //calcula el signe (-1)^(n+1)
            aux *= (-1);
    cout << aux << endl;
}