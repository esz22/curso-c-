/*realice una funcion que tome como parametros un vector de numeros enteros y devuelva la suma de sus elementos
*/
#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

int suma(vector<int>v1);
void cuadrado(vector<int>&v1);
void imprimir(vector<int>v1);

int main()
{
    vector<int> numeros;

    for(int i =1;i<=3;i++){
        numeros.push_back(i);
    }

    cout<<"la suma es: "<<suma(numeros)<<endl;
    cuadrado(numeros);
    imprimir(numeros);


    getch();
    return 0;
}
int suma(vector<int>v1){
    int sum=0;
    for(int i =0;i<v1.size();i++){
        sum+=v1.at(i);
    }
    return sum;
}
void cuadrado(vector<int>&v1){
    for(int i=0;i<v1.size();i++){
        v1.at(i)*=v1.at(i);
    }
}
void imprimir(vector<int>v1){
    for(int i=0;i<v1.size();i++){
        cout<<v1.at(i)<<" ";
    }
    cout<<endl;
}
