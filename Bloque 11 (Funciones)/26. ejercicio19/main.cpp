/*Realice una funcion recursiva que sume los primeros n enteros positivos
nota: para plantear la funcion recursiva tenga en cuenta que la suma puede expresarse mediante
la siguiente manera:
suma(n)=1 si         n=1
        n+suma(n-1)  n>1
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

int suma(int);

int main()
{
    int n;
    cout<<"Digite un numero: ";
    cin>>n;
    cout<<"la suma de "<<n<<" es: "<<suma(n)<<endl;

    system("pause");
    return 0;
}
int suma(int n){
    if(n==1){
        return 1;
    }
    else{
        return n+suma(n-1);
    }
    return 0;
}
