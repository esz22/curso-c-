/*Recursividdad
Factorual de un numero
*/
#include <iostream>
#include <conio.h>

using namespace std;

int factorial(int);

int main()
{
    int n;
    cout<<"Digite un numero: ";
    cin>>n;
    cout<<"El factorial de "<<n<<" es: "<<factorial(n)<<endl;

    getch();
    return 0;
}
int factorial(int n){
    if(n==0){
        return 1;
    }
    else if(n>0){
        return n*=factorial(n-1);
    }
    return 0;
}
