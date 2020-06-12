/*escriba una funcion nombrada tiempo() que tenga un parametro en numero
entero llamado totalseg y tres parametros de referencia enteros nombrados
horas, min y seg. la funcion es convertir el numero de segundos transmitido
en un numero equivalente de horas, minutos y segundos.
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

void tiempo(int totalSeg, int&,int&,int&);

int main()
{
    int tiemp;
    int horas;
    int minutos;
    int segundos;

    cout<<"digite el total de segundos: "<<endl;
    cin>>tiemp;

    tiempo(tiemp,horas,minutos,segundos);

    cout<<"\n"<<horas<<", horas"<<endl;
    cout<<minutos<<", minutos"<<endl;
    cout<<segundos<<", segundos"<<endl;

    system("pause");
    return 0;
}

void tiempo(int totalSeg, int& horas,int& minutos ,int& segundos){
    horas=totalSeg/3600;
    totalSeg%=3600;
    minutos=totalSeg/60;
    segundos=totalSeg%60;
}
