#include <iostream>
using namespace std;
void cumprimentar_alunos(string prim_nome, string ult_nome);

int main(){
    cumprimentar_alunos("Jo�o", "Paulo");
    cumprimentar_alunos("Davi", "Rodrigues");
    cumprimentar_alunos("Nathan", "da Silva");
    cumprimentar_alunos("Vitor", "dos Santos");
    cumprimentar_alunos("Henrique", "Santos");

}



void cumprimentar_alunos(string prim_nome, string ult_nome){
    cout << "Buenos dias, chico(a): " << prim_nome << " " << ult_nome << "!!!" << endl;

}
