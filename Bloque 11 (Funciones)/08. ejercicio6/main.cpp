/*escriba una plantilla de funcion llamada maximo() que devuelva el valor maximo de tres argumentos
que se transmitan a la funcion cuando sea llamada. Suponga que los tres argumentos seran del mismo tipo de datos.
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

template <class tipod>
tipod maximo(tipod x, tipod y, tipod z);

int main()
{
    int a=0;
    int b=0;
    int c=0;

    cout<<"el valor maximo es: "<<maximo(a,b,c)<<endl;

    system("pause");
    return 0;
}
template <class tipod>
tipod maximo(tipod x, tipod y, tipod z){
    tipod maxim;
    if(y>x && y>z){
        maxim=y;
    }
    else if(x>y && x>z){
        maxim=x;
    }
    else if(z>y && z>x){
        maxim=z;
    }
    else{
        maxim=false;
    }
}
