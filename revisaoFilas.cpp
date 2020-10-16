#include <bits/stdc++.h>
using namespace std;

void queues ();

/*
    Revisão:
    queue <a> p        cria uma fila de tipo a de nome p
    queue.empty()      diz se a fila está ou não vazia            O(1)
    queue.size()       diz quantos elementos há na fila           O(1)
    queue.front()      diz o valor do elemento no inicio da fila  O(1)
    queue.back()       diz o valor do elemento no final da fila   O(1)
    queue.push(x)      adiciona o valor x no final da fila        O(1)
    queue.pop()        remove o elemento do inicio da fila        O(1)
    queue.swap(queue)  troca o conteudo de duas filas             O(1)

    Links:
    http://www.cplusplus.com/reference/queue/queue/
    https://www.geeksforgeeks.org/queue-cpp-stl/
*/

int main (){

    queues ();

    return 0;
}





//Aqui serão testadas as estruturas de dados fila
//Filas são estuturas de dados onde os elementos são sempre adicionados no
//final dela, e só pode retirar o primeiro elemento atual da fila
//First in First out (FIFO)

void queues (){
    queue <int> numero;         //declara uma fila do tipo inteiro
    queue <char> character;     //e do tipo character
                                //os simbolos <tipo> indicam templates no c++
                                //é uma forma de criar uma estrutura de dados de vários tipos







    cout << "Primeira Parte-------------------------------------------------------------------------------\n";

    //Retorna 1 se a fila estiver vazia, e 0 se não
    cout << "A fila numero esta vazia : " << numero.empty() << endl;
    cout << "A fila character esta vazia : " << character.empty() << endl;










    cout << "\nSegunda Parte-------------------------------------------------------------------------------\n";

    cout <<  "Tamanho da fila numero : " << numero.size() << endl;          //Retorna quantos elementos ha na fila


    numero.push (10);                                                       //Adiciona o valor na fila
    cout << "\nValor no final da fila numero : " << numero.back() << endl;    //imprimi o valor no final da fila
    cout << "Valor no inicio da fila numero : " << numero.front() << endl;  //imprimi o valor no inicio da fila

    numero.push (20);                                                       //Adiciona o valor na fila
    cout << "\nValor no final da fila numero : " << numero.back() << endl;    //imprimi o valor no final da fila
    cout << "Valor no inicio da fila numero : " << numero.front() << endl;  //imprimi o valor no inicio da fila

    numero.push (30);                                                       //Adiciona o valor na fila
    cout << "\nValor no final da fila numero : " << numero.back() << endl;    //imprimi o valor no final da fila
    cout << "Valor no inicio da fila numero : " << numero.front() << endl;  //imprimi o valor no inicio da fila


    cout << "\nTamanho da fila numero : " << numero.size() << endl;           //Retorna quantos elementos ha na fila














    cout << "\nTerceira Parte-------------------------------------------------------------------------------\n";

    cout <<  "Tamanho da fila character : " << character.size() << endl;            //Retorna quantos elementos ha na fila


    character.push ('a');                                                           //Adiciona o valor na fila
    cout << "\nValor no final da fila character : " << character.back() << endl;      //imprimi o valor no final da fila
    cout << "Valor no inicio da fila character : " << character.front() << endl;    //imprimi o valor no inicio da fila

    character.push ('b');                                                           //Adiciona o valor na fila
    cout << "\nValor no final da fila character : " << character.back() << endl;      //imprimi o valor no final da fila
    cout << "Valor no inicio da fila character : " << character.front() << endl;    //imprimi o valor no inicio da fila

    character.push ('c');                                                           //Adiciona o valor na fila
    cout << "\nValor no final da fila character : " << character.back() << endl;      //imprimi o valor no final da fila
    cout << "Valor no inicio da fila character : " << character.front() << endl;    //imprimi o valor no inicio da fila


    cout << "\nTamanho da fila character : " << character.size() << endl;             //Retorna quantos elementos ha na fila














    cout << "\nQuarta Parte-------------------------------------------------------------------------------\n";

    cout << "Tamanho da fila character : " << character.size() << endl;             //Retorna quantos elementos ha na fila
    cout << "Valor no inicio da fila character : " << character.front() << endl;    //imprimi o valor no inicio da fila

    character.pop();                                                                //Remove o primeiro elemento da fila

    cout << "\nTamanho da fila character : " << character.size() << endl;             //Retorna quantos elementos ha na fila
    cout << "Valor no inicio da fila character : " << character.front() << endl;    //imprimi o valor no inicio da fila

    character.pop();                                                                //Remove o primeiro elemento da fila

    cout << "\nTamanho da fila character : " << character.size() << endl;             //Retorna quantos elementos ha na fila
    cout << "Valor no inicio da fila character : " << character.front() << endl;    //imprimi o valor no inicio da fila

    character.pop();                                                                //Remove o primeiro elemento da fila

    cout << "\nA fila character esta vazia : " << character.empty() << endl;          //Diz se a fila esta vazia ou nao













    cout << "\nQuinta Parte-------------------------------------------------------------------------------\n";


    queue <int> copyNumero = numero;                                     //Faz uma copia da fila numero
    cout << "valores no comeco e final da fila respectivamente:\n";

    while (!copyNumero.empty()){                                        //Enquanto a fila nao estiver vazia
        cout << copyNumero.front();                                     //Imprimi o valor no inicio da fila
        cout << " " << copyNumero.back() << endl;                       //e no final dela
        copyNumero.pop();                                               //e remove o valor no inicio da fila
    }










    cout << "\nSexta Parte-------------------------------------------------------------------------------\n";

    cout << "A fila copyNumero esta vazia : " << copyNumero.empty() << endl;        //Diz se a fila esta vazia ou nao
    cout << "A fila numero esta vazia : " << numero.empty() << endl;                //Diz se a fila esta vazia ou nao

    copyNumero.swap(numero);                                                        //Troca o conteudo das filas numero e copyNumero
    cout << "\nValores da fila copyNumero sao trocados com os da fila numero\n";

    cout << "\nA fila copyNumero esta vazia : " << copyNumero.empty() << endl;        //Diz se a fila esta vazia ou nao
    cout << "A fila numero esta vazia : " << numero.empty() << endl;                //Diz se a fila esta vazia ou nao




}
