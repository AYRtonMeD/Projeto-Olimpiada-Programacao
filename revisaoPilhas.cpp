#include <bits/stdc++.h>
using namespace std;

//Aqui serão testadas as estruturas de dados pilha
//Pilhas são estuturas de dados onde os elementos são  sempre adicionados no
//final dela, e só pode retirar o ultimo atual da pilha

void pilhas () {
    stack <int> valor;      //declara uma pilha do tipo inteiro
    stack <string> nome;    //os simbolos <tipo> indicam templates no c++
                            //é uma forma de criar uma estrutura de dados de vários tipos






    //Retorn 1 se a pilha estiver vazia, e 0 se não
    cout << "A pilha valor esta vazia : " << valor.empty() << endl;
    cout << "A pilha nome esta vazia : " << nome.empty () << endl;







    cout <<  "Tamanho da pilha valor : " << valor.size() << endl;      //Retorna quantos elementos ha na pilha


    valor.push (10);                                                   //Adiciona o valor na lista
    cout << "Valor no topo da pilha valor : " << valor.top() << endl;  //imprimi o valor no topo da pilha

    valor.push (20);
    cout << "Valor no topo da pilha valor : " << valor.top() << endl;

    valor.push (30);
    cout << "Valor no topo da pilha valor : " << valor.top() << endl;


    cout << "Tamanho da pilha valor : " << valor.size() << endl;










    cout << "Tamanho da pilha nome : " << nome.size() << endl;


    nome.push ("ayrton");
    cout << "Valor no topo da pilha nome : " << nome.top() << endl;

    nome.push ("valfredo");
    cout << "Valor no topo da pilha nome : " << nome.top() << endl;

    nome.push("rafael");
    cout << "Valor no topo da pilha nome : " << nome.top() << endl;


    cout << "Tamanho da pilha nome : " << nome.size() << endl;







    cout << "Tamanho da pilha nome : " << nome.size() << endl;
    cout << "Valor no topo da pilha nome : " << nome.top() << endl;

    nome.push("raimundo");

    cout << "Tamanho da pilha nome : " << nome.size() << endl;
    cout << "Valor no topo da pilha nome : " << nome.top() << endl;

    nome.pop();

    cout << "Tamanho da pilha nome : " << nome.size() << endl;
    cout << "Valor no topo da pilha nome : " << nome.top() << endl;







    stack <int> copyValor = valor;

    while (!copyValor.empty()){
        cout << copyValor.top() << endl;
        copyValor.pop();
    }








    copyValor.swap(valor);

}


int main(){
    pilhas();

    return 0;
}
