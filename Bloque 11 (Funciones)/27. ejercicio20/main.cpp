/*Realice una funcion recursiva para la serie fibonacci
Nota: la serie esta formada por la secuencia de numeros:
0, 1, 1, 2, 3, 5, 8, 13, 21, 24...
*/
#include <iostream>
#include <conio.h>

using namespace std;

int fibonacci(int);

int main()
{
    int n;
    do{
        cout<<"Digite un numero: ";
        cin>>n;
    }
    while(n<0);

    for(int i=0;i<n;i++){
        cout<<fibonacci(i)<<", ";
    }

    getch();
    return 0;
}
int fibonacci(int n){
    if(n<2){
        return n;
    }
    else if(n>=2){
        return fibonacci(n-1)+fibonacci(n-2);
    }
    return 0;
}
