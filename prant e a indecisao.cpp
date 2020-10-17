
#include <bits/stdc++.h>
using namespace std;

void copiar_listas (int lista1[], int lista2[], int tam){
    for (int i = 0; i < tam; i++){
        lista2[i] = lista1[i];
    }
}

int main (){
    int tamanhoNome, quantLetras, quantTrocas;
    char p1, p2;
    int valor = 0;
    int maiorValor = 0;

    cin >> quantLetras >> tamanhoNome >> quantTrocas;

    bool lista_lf[26] = {false};
    bool palavra[tamanhoNome][26] = {0};
    //int melhor[tamanhoNome] = {0};
    //int melhor_atual[tamanhoNome] = {0};
    char melhor[100001];
    char melhor_atual[100001];

    for (int i = 0; i < quantLetras; i++){
        cin >> p1;
        lista_lf[p1%97] = true;
    }

    for (int i = 0; i < tamanhoNome; i++){
        cin >> p1;
        melhor[i] = p1;

        p1 = p1%97;
        if (lista_lf[p1]) valor++;
        palavra[i][p1] = true;
    }

    strcpy (melhor_atual, melhor);
    maiorValor = valor;

    for (int i = 0; i < quantTrocas; i++){
        cin >> p1 >> p2;
        p1 = p1 % 97;
        p2 = p2 % 97;

        for (int j = 0; j < tamanhoNome; j++){

            if (p1 == p2) break;
            else if (palavra[j][p1]) {
                if (!lista_lf[p1] && lista_lf[p2]) valor++;
                else if (lista_lf[p1] && !lista_lf[p2]) valor--;

                melhor[j] = p2 + 97;
                palavra[j][p1] = false;
                palavra[j][p2] = true;
            }

            else if (palavra[j][p2]) {
                if (!lista_lf[p1] && lista_lf[p2]) valor--;
                else if (lista_lf[p1] && !lista_lf[p2]) valor++;

                melhor[j] = p1 + 97;
                palavra[j][p2] = false;
                palavra[j][p1] = true;
            }

            if (valor > maiorValor){
                maiorValor = valor;
                strcpy (melhor_atual, melhor);
            }
        }

    }

    cout << maiorValor << endl;
    cout << melhor_atual;
    cout << endl;

    return 0;
}
