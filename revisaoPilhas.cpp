#include <bits/stdc++.h>
using namespace std;

void pilhas ();

/*
    Revisão:
    stack <a> p        cria uma pilha de tipo a de nome p
    stack.empty()      diz se a pilha está ou não vazia          O(1)
    stack.size()       diz quantos elementos há na pilha         O(1)
    stack.top()        diz o valor do elemento no topo da pilha  O(1)
    stack.push(x)      adiciona o valor x no topo da pilha       O(1)
    stack.pop()        remove o elemento do topo da pilha        O(1)
    stack.swap(stack)  troca o conteudo de duas pilhas           O(1)

    Links:
    http://www.cplusplus.com/reference/stack/stack/
    https://www.geeksforgeeks.org/stack-in-cpp-stl/
*/

int main(){
    pilhas();

    return 0;
}





//Aqui serão testadas as estruturas de dados pilha
//Pilhas são estuturas de dados onde os elementos são sempre adicionados no
//final dela, e só pode retirar o ultimo elemento atual da pilha

void pilhas () {
    stack <int> valor;      //declara uma pilha do tipo inteiro
    stack <string> nome;    //e do tipo string
                            //os simbolos <tipo> indicam templates no c++
                            //é uma forma de criar uma estrutura de dados de vários tipos







    cout << "Primeira Parte-------------------------------------------------------------------------------\n";

    //Retorna 1 se a pilha estiver vazia, e 0 se não
    cout << "A pilha valor esta vazia : " << valor.empty() << endl;
    cout << "A pilha nome esta vazia : " << nome.empty () << endl;












    cout << "\nSegunda Parte-------------------------------------------------------------------------------\n";

    cout <<  "Tamanho da pilha valor : " << valor.size() << endl;        //Retorna quantos elementos ha na pilha


    valor.push (10);                                                     //Adiciona o valor na pilha
    cout << "\nValor no topo da pilha valor : " << valor.top() << endl;  //imprimi o valor no topo da pilha

    valor.push (20);                                                     //Adiciona o valor na pilha
    cout << "Valor no topo da pilha valor : " << valor.top() << endl;    //imprimi o valor no topo da pilha

    valor.push (30);                                                     //Adiciona o valor na pilha
    cout << "Valor no topo da pilha valor : " << valor.top() << endl;    //imprimi o valor no topo da pilha


    cout << "\nTamanho da pilha valor : " << valor.size() << endl;       //Retorna quantos elementos ha na pilha











    cout << "\nTerceira Parte-------------------------------------------------------------------------------\n";

    cout <<  "Tamanho da pilha nome : " << nome.size() << endl;        //Retorna quantos elementos ha na pilha


    nome.push ("ayrton");                                              //Adiciona o valor na pilha
    cout << "\nValor no topo da pilha nome : " << nome.top() << endl;  //imprimi o valor no topo da pilha

    nome.push ("valfredo");                                            //Adiciona o valor na pilha
    cout << "Valor no topo da pilha nome : " << nome.top() << endl;    //imprimi o valor no topo da pilha

    nome.push ("rafael");                                              //Adiciona o valor na pilha
    cout << "Valor no topo da pilha nome : " << nome.top() << endl;    //imprimi o valor no topo da pilha


    cout << "\nTamanho da pilha nome : " << nome.size() << endl;       //Retorna quantos elementos ha na pilha










    cout << "\nQuarta Parte-------------------------------------------------------------------------------\n";

    cout << "Tamanho da pilha nome : " << nome.size() << endl;         //Retorna quantos elementos ha na pilha
    cout << "Valor no topo da pilha nome : " << nome.top() << endl;    //imprimi o valor no topo da pilha

    nome.push("raimundo");                                             //Adiciona o valor na pilha

    cout << "\nTamanho da pilha nome : " << nome.size() << endl;       //Retorna quantos elementos ha na pilha
    cout << "Valor no topo da pilha nome : " << nome.top() << endl;    //imprimi o valor no topo da pilha

    nome.pop();                                                        //Remove o ultimo elemento da pilha

    cout << "\nTamanho da pilha nome : " << nome.size() << endl;       //Retorna quantos elementos ha na pilha
    cout << "Valor no topo da pilha nome : " << nome.top() << endl;    //imprimi o valor no topo da pilha












    cout << "\nQuinta Parte-------------------------------------------------------------------------------\n";

    stack <int> copyValor = valor;                                     //Faz uma copia da pilha valor
    cout << "valores da pilha copyValor:\n";
    while (!copyValor.empty()){                                        //Enquanto a pilha nao estiver vazia
        cout << copyValor.top() << endl;                               //Imprimi o valor no topo da pilha
        copyValor.pop();                                               //e remove o valor no topo da pilha
    }












    cout << "\nSexta Parte-------------------------------------------------------------------------------\n";


    cout << "A pilha copyValor esta vazia : " << copyValor.empty() << endl;        //Diz se a pilha esta vazia ou nao
    cout << "A pilha valor esta vazia : " << valor.empty() << endl;                //Diz se a pilha esta vazia ou nao

    copyValor.swap(valor);
    cout << "\nValores da pilha copyValor sao trocados com os da pilha valor\n";   //Troca o conteudo das pilhas valor e copyValor

    cout << "\nA pilha copyValor esta vazia : " << copyValor.empty() << endl;      //Diz se a pilha esta vazia ou nao
    cout << "A pilha valor esta vazia : " << valor.empty() << endl;                //Diz se a pilha esta vazia ou nao

}
