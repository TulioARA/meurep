#include <iostream>

using namespace std;

int main()
{
    int soma=1,k=0, aux, n=0, verif=0;
    cout<<"Qual o numero quer achar?";
    cin>> n;
    for(int i=0;i<n;i++){
        aux = k;
        k = soma;
        soma = aux + k;
        if(n==k||n==soma||n==(k+soma)){
            cout<<"Esse numero esta na sequencia de fibonacci.";
            verif =3;
            break;
        }
    }
    if(verif==0){
        cout<<"Esse numero nao esta na sequencia de fibonacci.";
    }

}
