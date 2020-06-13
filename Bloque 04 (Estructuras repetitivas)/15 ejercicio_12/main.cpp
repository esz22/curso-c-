#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    //Hacer un programa que calcule el resultado de la siguiente expresion: 1-2+3-4+5-6...n
    int n,suma=0;

    cout<<"Digite el numero de elementos"<<endl;
    cin>>n;

    for(int i=1;i<=n;i++){
        if(i%2==0){
            suma-=i;
        }
        else{
            suma+=i;
        }
    }
    cout<<"el valor de la suma es: "<<suma<<endl;

    system("pause");
    return 0;
}
