#include <iostream>
using namespace std;

int somar_tres_inteiros(int num1, int num2, int num3){

    int soma = num1+ num2 + num3;

    return soma;
}
int main(){

  int num1, num2, num3;
  int a, b , c;
  cout << "Coloque o primeiro numero: " << endl;
    cin >> a;
  cout << "Coloque o primeiro numero: " << endl;
        cin >> b;
  cout << "Coloque o primeiro numero: " << endl;
    cin >> c;
    if(a > b && a > c){
        cout << a << " e o maior";
    }else if(b > a && b > c){
        cout << b << " e o maior";
    }else if(c > b && c > a){
        cout << c << " e o maior";
    }
}

