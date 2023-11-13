#include <iostream>
using namespace std;

int simpleAlternatedSum(int n) {
    if (n == 1) //Base Case
        return 1;
    else {
        int aux = -1;
        for (int i = 0; i <= (n+1); i++) //calcula el signe (-1)^(n+1)
            aux *= (-1);
        return n*aux + simpleAlternatedSum(n-1);
    }
}

int main() {
    int n;
    cin >> n;
    cout << simpleAlternatedSum(n) << endl;
}