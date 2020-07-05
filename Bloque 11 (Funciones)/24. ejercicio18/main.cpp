/*Escriba una funcion llamada mayor() que devuelva la fecha mas reciente que se le transmitan.
por ejemplo, si se transmiten las fechas 10/0/2005 y 11/3/2015 a mayor(),
sera devuelta la segunda fecha
*/
#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

struct fecha{
    int dia;
    int mes;
    int ano;
};

fecha nuevaFecha();
void definicionDeFechas(vector<fecha> &);
fecha mayor(vector<fecha>);
void imprimirDatos(fecha);

int main()
{
    vector <fecha>v1;
    definicionDeFechas(v1);
    fecha may=mayor(v1);
    imprimirDatos(may);

    system("pause");
    return 0;
}
fecha nuevaFecha(){
    fecha nuevo;
    cout<<"\nDigite el dia: ";
    cin>>nuevo.dia;
    cout<<"\nDigite el mes: ";
    cin>>nuevo.mes;
    cout<<"\nDigite el ano: ";
    cin>>nuevo.ano;
    return nuevo;
}
void definicionDeFechas(vector<fecha> & vec){
    int n;
    cout<<"Cuantas fechas se van a comparar? ";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"\nDigite los datos de la fecha "<<i+1<<endl;
        fecha n=nuevaFecha();
        vec.push_back(n);
    }
}
fecha mayor(vector<fecha> vec){
    int dia=0;
    int mes=0;
    int ano=0;
    int aux;
    for(int i =0;i<vec.size();i++){
        if(vec.at(i).ano>ano){
            dia=vec.at(i).dia;
            mes=vec.at(i).mes;
            ano=vec.at(i).ano;
            aux=i;
        }
        else if(vec.at(i).ano==ano){
            if(vec.at(i).mes>mes){
                dia=vec.at(i).dia;
                mes=vec.at(i).mes;
                ano=vec.at(i).ano;
                aux=i;
            }
            else if(vec.at(i).mes==mes){
                if(vec.at(i).dia>dia){
                    dia=vec.at(i).dia;
                    mes=vec.at(i).mes;
                    ano=vec.at(i).ano;
                    aux=i;
                }
            }
        }
    }
    return vec.at(aux);

}
void imprimirDatos(fecha may){
    cout<<"\nFecha mayor ingresada: "<<may.dia<<"/"<<may.mes<<"/"<<may.ano<<endl;
}
