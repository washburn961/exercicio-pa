#include <iostream>
using namespace std;

int main()
{
    int num1, num2, dif1, dif2, numqtd, i(1), status_pa, dummy;

    cout << "Digite a quantidade de numeros na sequencia: ";
    cin >> numqtd;
    cout << "Digite um numero da sequencia " << "(" << i << "/" << numqtd << "): ";
    cin >> num1;
    i++;
    cout << "Digite um numero da sequencia " << "(" << i << "/" << numqtd << "): ";
    cin >> num2;
    i++;
    dif1 = num2 - num1;
        while (i <= numqtd)
        {
            num1 = num2;
            cout << "Digite um numero da sequencia " << "(" << i << "/" << numqtd << "): ";
            cin >> num2;
            dif2 = num2 - num1;
            if (dif1 == dif2)
            {
                dif1 = dif2;
                status_pa=1;
            }
            else
            {
                i++;
                status_pa=0;
                while (i <= numqtd)
                {
                    cout << "Digite um numero da sequencia " << "(" << i << "/" << numqtd << "): ";
                    cin >> dummy;
                    i++;
                }
            }
            i++;
        }
    if (status_pa == 1)
    {
        cout << "Progressao aritmetica de razao: " << dif2 << endl;
    }
    else
    {
        cout << "Nao e progessao aritmetica." << endl;
    }
    return 0;
}
