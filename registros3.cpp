//Alexander Jesús Téllez Mesa
#include<iostream>
#include<string>
using namespace std;

struct personas{
    string nombres;
    int dia;
    int anuario;
    int mes;

};

int main (){
    int n,nale;
    personas prns[45];
    cout<<"ingresa la cantidad de personas: "<<endl;
    cin>>n;
    cin.ignore(1000,'\n');
    for(int i=1; i<=n;i++){
        cout<<"ingrese el nombre de la persona "<<i<<":"<<endl;
        getline(cin,prns[i].nombres);
        cout<<"ingrese el dia de nacimiento de la persona "<<i<<":"<<endl;
        cin>>prns[i].dia;
        cout<<"ingrese el mes de nacimiento: "<<endl;
        cin>>prns[i].mes;
        cout<<"ingresa el año de Nacimiento: "<<endl;
        cin>>prns[i].anuario;
        cin.ignore(1000,'\n');
    }
    cout<<"el primer cumpleaños es: "<<prns[1].mes<<endl;
   do{
        cout<<"escribe el numero de un mes: "<<endl;
        cin>>nale;
        if(nale!=0){
            cout<<"los datos de las personas que cumplen años ese mes son: "<<endl;
            for(int i=1; i<=n;i++){
                if(nale==prns[i].mes){
                    cout<<"su nombre es: "<<endl;
                    cout<<prns[i].nombres<<endl;
                    cout<<"el dia en el que nacio es: "<<endl;
                    cout<<prns[i].dia<<endl;
                    cout<<"el año en el que nacio es: "<<endl;
                    cout<<prns[i].anuario<<endl;
               }
            }
        }
        else{
            cout<<"el mes elegido no existe...."<<endl;
        }
    }while(nale!=0);
	
    return 0;
}