#include <iostream>
using namespace std;
int main()
{
    int operando1, operando2, calculo;
    for(operando1 = 1;operando1 <=10;operando1++) {
        for(operando2 = 1; operando2 <=10;operando2++) {
            calculo = operando1 * operando2;
            cout<<endl<<operando1<<" * "<<operando2<<" = "<<calculo;
            
        }
          cout<<endl<<endl;
    }

    return 0;
}
