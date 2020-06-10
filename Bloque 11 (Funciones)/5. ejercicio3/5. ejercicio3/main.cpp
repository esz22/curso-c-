/*Escriba una funcion nombrada funpot() que eleve un numero entero que
 se le trasnmita a una potencia en un numero entero positivo y despliegue el resultado.
 El numero entero positivo debera ser el segundo valor transmitido a la funcion
*/

#include <iostream>
#include <conio.h>

using namespace std;

void pedirDatos();
void funpot(int x, int y);

int x;
int y;

int main()
{
    pedirDatos();
    funpot(x,y);

    getch();
    return 0;
}

void pedirDatos(){
    cout<<"Digite un numero: "<<endl;
    cin>>x;
    cout<<"Digite la potencia: "<<endl;
    cin>>y;
}
void funpot(int x, int y){
    long res=1;
    for(int i =1;i<=y;i++){
        res*=x;
    }
    cout<<"\nEl resultado es: "<<res<<endl;
}
