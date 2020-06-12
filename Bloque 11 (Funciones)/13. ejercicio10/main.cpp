/*escriba una funcion llamada calc_anos() que tenga un parametro entero que represente el numero total de
dias desde la fecha 1/1/2000 y parametros de referencia nombrados ano, mes y fecha actual para el numero dado
de dias que se le transmitan. para este problema suponga que cada año tiene 365 dias y cada mes tiene 30 dias.
*/
#include <iostream>
#include <conio.h>

using namespace std;

void calc_anos(int totald,int&,int&,int&);

int main()
{
    int totalDias,ano,mes, dias;

    cout<<"digite el total de dias: "<<endl;
    cin>>totalDias;

    calc_anos(totalDias,ano,mes,dias);
    cout<<"\nFecha actual: "<<dias+1<<"/"<<mes+1<<"/"<<ano+2000<<endl;


    getch();
    return 0;
}
void calc_anos(int totald,int& anos,int& meses,int& dias){
    anos=totald/365;
    totald%=365;
    meses=totald/30;
    dias=totald%30;
}
