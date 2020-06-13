/*intercambiar el valor de dos variables utilizando paso de parametros por referencia
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

void intercambio(int&,int&);

int main()
{
    int num1,num2;

    cout<<"Digite dos numeros: "<<endl;
    cin>>num1>>num2;

    intercambio(num1,num2);

    cout<<"ahora el primer numero es: "<<num1<<endl;
    cout<<"ahora el segundo numero es: "<<num2<<endl;

    system("pause");
    return 0;
}

void intercambio(int& num1,int&num2){
    int aux=num1;
    num1=num2;
    num2=aux;
}
