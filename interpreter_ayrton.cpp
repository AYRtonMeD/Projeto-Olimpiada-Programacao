#include <bits/stdc++.h>
using namespace std;

int contador (int registers[], int ram[]){
    int op = 0, v1 = 0, v2 = 0;
    int i = 0;
    int total_op = 0;

    do{
        op = ram[i] / 100;
        v1 = (ram[i] % 100) / 10;
        v2 = ram[i] % 10;

        ++total_op;
        ++i;

        if (op == 2)      registers[v1] = v2;
        else if (op == 3) registers[v1] += v2;
        else if (op == 4) registers[v1] *= v2;
        else if (op == 5) registers[v1] = registers[v2];
        else if (op == 6) registers[v1] += registers[v2];
        else if (op == 7) registers[v1] *= registers[v2];
        else if (op == 8) registers[v1] = ram[registers[v2]];
        else if (op == 9) ram[registers[v2]] = registers[v1];

        else if (op == 0 && registers[v2] != 0) i = registers[v1];
        registers[v1] %= 1000;

    }while (op != 1);

    return total_op;
}

int main(){
    int n;
    bool eh = false;
    cin >> n;

    for (int i = 0; i <= n; i++){
        int registers[10] = {0};
        int ram[1000] = {0};

        int k = 0;

        string p;
        setbuf(stdin, NULL);

        while (getline(cin, p) && !p.empty()){


            ram[k] += (p[0] - 48) * 100;
            ram[k] += (p[1] - 48) * 10;
            ram[k] += (p[2] - 48);

            k++;
        }
        if (eh) cout << endl;
        if (i > 0) {
            cout << contador(registers, ram) << "\n";
            eh = true;
        }
    }

    return 0;
}
