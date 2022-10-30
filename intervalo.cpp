#include <iostream>
using namespace std;

int main() {
    float entrada;
    float intervalos[5] = {0, 25, 50, 75, 100};
    string intervalos_string[5] = {"0", "25", "50", "75", "100"};
    string saida = "";

    cin >> entrada;
    
    /* 

        esse for abaixo é basicamente pra quando a entrada é exatamente igual a algum item

    */

    for(int i = 0; i < 5; i++) {
        if(entrada == intervalos[i]) {
            if (entrada == 100) {
                cout << "Fora do intervalo";
                break;
            }
            saida += "[";
            saida += intervalos_string[i];
           
            saida += ",";
            int proximo_num = i + 1;
            saida += intervalos_string[proximo_num];

            saida += "]";
            cout << saida << "\n";
            break;
        }
    }

    /*
        agora eu tenho q fazer pra quando a entrada for maior que um item e menor do que outro
    */
    
    return 0;
}