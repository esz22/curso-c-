/*Defina una estructura que indique el tiempo empleado por un ciclista en una etapa. la estructura debe
tenerl tres campos: horas, minutos y segundos. Escriba un programa que dados n etapas
calcule el tiempo total empleado en correr todas las etapas
*/

#include <iostream>
#include <conio.h>
#include <cstdio>

struct tiempo{
    int horas;
    int minutos;
    int segundos;
};

using namespace std;

int main()
{
    int n;
    int hTotal=0;
    int mTotal=0;
    int sTotal=0;

    cout<<"digite el numero de etapas del recorrido: "<<endl;
    cin>>n;
    struct tiempo etapas[n];

    for(int i=0;i<n;i++){
        fflush(stdin);
        cout<<"\nDigite las horas realizadas en la etapa "<<i+1<<": "<<endl;
        cin>>etapas[i].horas;
        cout<<"Digite los minutos realizados en la etapa "<<i+1<<": "<<endl;
        cin>>etapas[i].minutos;
        cout<<"Digite los segundos realizados en la etapa "<<i+1<<": "<<endl;
        cin>>etapas[i].segundos;

        hTotal+=etapas[i].horas;
        mTotal+=etapas[i].minutos;
        sTotal+=etapas[i].segundos;
    }
    if(sTotal>=60){
        mTotal+=sTotal/60;
        sTotal=sTotal%60;
    }
    if(mTotal>=60){
        hTotal+=mTotal/60;
        mTotal=mTotal%60;
    }

    cout<<"\nTiempo total en la competicion:"<<endl;
    cout<<"Horas: "<<hTotal<<":"<<mTotal<<":"<<sTotal<<endl;

    getch();
    return 0;
}
