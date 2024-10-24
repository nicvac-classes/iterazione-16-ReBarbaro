#include <iostream>
using namespace std;

int main() {
    int N,i;
    float numero,max;
    cout<<"quante volte devo inserire i numeri?"<<endl;
    cin>>N;
    i=1;
    while(i<=N){
        cout<<"scrivi il numero"<<endl;
        cin>>numero;
        if(i==1){
            max=numero;
            }else{
                if(numero>max){
                    max=numero;
                 }
                  }
                  i=i+1;
                 }
                 cout<<"il numero massimo é "<<max<<endl;  



}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
