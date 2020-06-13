#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    //Escriba un programa que calcule las soluciones de una equacion de segundo grado de la forma a*pow(x,2)+b*x+c=0,
    // teniendo en cuenta que (chicharronera)

    float a,b,c,x1=0,x2=0;

    cout <<"Digite el valor de a: "<<endl;
    cin >>a;
    cout <<"Digite el valor de b: "<<endl;
    cin >>b;
    cout <<"Digite el valor de c: "<<endl;
    cin >>c;


    x1=((-b)+sqrt(pow(b,2)-(4*a*c)))/(2*a);
    x2=((-b)-sqrt(pow(b,2)-(4*a*c)))/(2*a);

    cout << "la primer raiz es: "<<x1 << endl;
    cout << "la segunda raiz es: "<<x2 << endl;
    return 0;
}
