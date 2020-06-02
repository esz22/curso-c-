#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main()
{
    //Escribaa un programa que calcule el valor de  2^1+2^2+2^3+...+2~n

    int n,suma=0;

    cout << "Digite el valor de n" << endl;
    cin >>n;


    for(int i=1;i<=n;i++){
        int pot=1;
        //pot=pow(2,i);
        for(int j =1;j<=i;j++){
            pot*=2;
        }
        suma+=pot;
    }

    cout<<"\nLa suma de lass potencias es: "<<suma<<endl;

    system("pause");
    return 0;
}
