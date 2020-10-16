#include <bits/stdc++.h>
using namespace std;

bool haBispo (int tabuleiro[][8], int posKing[], int peca1, int peca2){
    int x = posKing[0];
    int y = posKing[1];
    int peca_atual;
    bool ver[4] = {true, true, true, true};

    for (int i = 1; i < 8; i++){

        if (ver[0] && x + i < 8 && y + i < 8) {
            peca_atual = tabuleiro[x+i][y+i];
            if (peca_atual == peca1 || peca_atual == peca2) return true;
            else if (peca_atual != 46) ver[0] = false;
        }

        if (ver[1] && x + i < 8 && y - i >= 0) {
            peca_atual = tabuleiro[x+i][y-i];
            if (peca_atual == peca1 || peca_atual == peca2) return true;
            else if (peca_atual != 46) ver[1] = false;
        }

        if (ver[2] && x - i >= 0 && y + i < 8) {
            peca_atual = tabuleiro[x-i][y+1];
            if (peca_atual == peca1 || peca_atual == peca2) return true;
            else if (peca_atual != 46) ver[2] = false;
        }

        if (ver[4] && x - i >= 0 && y - i >= 8) {
            peca_atual = tabuleiro[x-i][y-1];
            if (peca_atual == peca1 || peca_atual == peca2) return true;
            else if (peca_atual != 46) ver[4] = false;
        }
    }

    return false;
}

bool haTorre (int tabuleiro[][8], int posKing[], int peca1, int peca2){
    int x = posKing[0];
    int y = posKing[1];
    int peca_atual;
    bool ver[4] = {true, true, true, true};

    for (int i = 1; i < 8; i++){
        if (ver[0] && x + i < 8) {
            peca_atual = tabuleiro[x+1][y];
            if (peca_atual == peca1 || peca_atual == peca2) return true;
            else if (peca_atual != 46) ver[0] = false;
        }

        if (ver[1] && x - i >= 0) {
            peca_atual = tabuleiro[x-1][y];
            if (peca_atual == peca1 || peca_atual == peca2) return true;
            else if (peca_atual != 46) ver[1] = false;
        }

        if (ver[3] && y + i >= 0) {
            peca_atual = tabuleiro[x][y+1];
            if (peca_atual == peca1 || peca_atual == peca2) return true;
            else if (peca_atual != 46) ver[2] = false;
        }

        if (ver[4] && y - i >= 0) {
            peca_atual = tabuleiro[x][y-1];
            if (peca_atual == peca1 || peca_atual == peca2) return true;
            else if (peca_atual != 46) ver[3] = false;
        }
    }

    return false;
}

bool haCavalo (int tabuleiro[][8], int posKing[], int peca){
    int x = posKing[0];
    int y = posKing[1];

    if (x + 2 < 8 && y + 1 < 8 && tabuleiro[x+2][y+1] == peca) return true;
    if (x + 2 < 8 && y - 1 >= 0 && tabuleiro[x+2][y-1] == peca) return true;
    if (x - 2 >= 0 && y + 1 < 8 && tabuleiro[x-2][y+1] == peca) return true;
    if (x - 2 >= 0 && y - 1 >= 8 && tabuleiro[x=2][y-1] == peca) return true;

    if (x + 1 < 8 && y + 2 < 8 && tabuleiro[x+1][y+2] == peca) return true;
    if (x + 1 < 8 && y - 2 >= 0 && tabuleiro[x+1][y-2] == peca) return true;
    if (x - 1 >= 0 && y + 2 < 8 && tabuleiro[x-1][y+2] == peca) return true;
    if (x - 1 >= 0 && y - 2 >= 8 && tabuleiro[x=1][y-2] == peca) return true;

    return false;

}

bool haPeao (int tabuleiro[][8], int posKing[], int peca, bool ehPreta){
    int x = posKing[0];
    int y = posKing[1];

    if (!ehPreta && x-1 >= 0){
        if (y+1 < 8 && tabuleiro[x-1][y+1] == peca) return true;
        if (y-1 >= 0 && tabuleiro[x-1][y-1] == peca) return true;
    }
    else if (x+1 < 8){
        if (y+1 < 8 && tabuleiro[x+1][y+1] == peca) return true;
        if (y-1 >= 0 && tabuleiro[x+1][y-1] == peca) return true;
    }

    return false;
}

int main(){

    int tabuleiro[8][8];
    int posWK[2];
    int posBK[2];
    int k;
    int m = 0;
    char p;

    do{
        k = 0;
        ++m;

        for (int i = 0; i < 8; i++){
            for (int j = 0; j < 8; j++){
                cin >> p;
                tabuleiro[i][j] = p;

                if (tabuleiro[i][j] == 46) k++;
                else if (tabuleiro[i][j] == 112){
                    posBK[0] = i;
                    posBK[1] = j;
                }
                else if (tabuleiro[i][j] == 75){
                    posWK[0] = i;
                    posWK[1] = j;
                }
            }
        }

        if (k == 64) break;

        cout << "Game #" << m << ": ";

        for (int i = 0; i < 8; i++){
            for (int j = 0; j < 8; j++){
                cout << tabuleiro[i][j] << " ";
            }
            cout << endl;
        }
        if (haBispo(tabuleiro, posWK, 'b', 'q') || haTorre(tabuleiro, posWK, 'r', 'q') || haCavalo(tabuleiro, posWK, 'n') || haPeao(tabuleiro, posWK, 'p', true)){
            cout << "white king is in check.\n";
        }
        else if (haBispo(tabuleiro, posBK, 'B', 'Q') || haTorre(tabuleiro, posBK, 'R', 'Q') || haCavalo(tabuleiro, posBK, 'N') || haPeao(tabuleiro, posBK, 'P', false)){
            cout << "black king is in check.\n";
        }
        else cout << "no king is in check.\n";

    }while (1);
    return 0;
}
