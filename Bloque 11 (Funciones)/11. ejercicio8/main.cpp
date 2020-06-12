/*escriba una funcion nombrada cambio() que tenga un parametro en numero entero y seis parametros
de referencia en un numero entero nombrados cien, cincuenta, veinte, diez, cinco y uno respectivamente.
la funcion tiene que considerar el valor entero transmitido como una cantidad en dolares y convertir el
valor en el numero menor de billetes equivalentes
*/

#include <iostream>
#include <conio.h>

using namespace std;

void cambio(int x, int&,int&,int&,int&,int&,int&);

int main()
{
    int dinero;
    int cien=0;
    int cincuenta=0;
    int veinte=0;
    int diez=0;
    int cinco=0;
    int uno=0;

    cout<<"digite la cantidad en dolares: "<<endl;
    cin>>dinero;

    cambio(dinero,cien,cincuenta,veinte,diez,cinco,uno);
    cout<<"\n"<<cien<<", billetes de 100"<<endl;
    cout<<cincuenta<<", billetes de 50"<<endl;
    cout<<veinte<<", billetes de 20"<<endl;
    cout<<diez<<", billetes de 10"<<endl;
    cout<<cinco<<", billetes de 5"<<endl;
    cout<<uno<<", billetes de 1"<<endl;

    getch();
    return 0;
}

void cambio(int x, int&cien,int&cincuenta,int&veinte,int&diez,int&cinco,int&uno){
    cien=x/100;
    x%=100;
    cincuenta=x/50;
    x%=50;
    veinte=x/20;
    x%=20;
    diez=x/10;
    x%=10;
    cinco=x/5;
    x%=5;
    uno=x%5;
}
