//Alexander Jesús Téllez Mesa
#include<iostream>
#include<string>
using namespace std;

struct deportistas{
    string nombres;
    string pais;
    string diciplina;
    int medallas;

};

int main (){
    deportistas deportista[100];
    int num;
    cout<<"INGRESE LA CANTIDAD DE DEPORTISTAS: "<<endl;
    cin>>num;
    cin.ignore(100,'\n');
    cout<<"INGRESE LOS DATOS DE CADA DEPORTISTA: "<<endl;
    for(int i=1;i<=num;i++){
        cout<<"Nombre del deporista "<<i<<":"<<endl;
        getline(cin,deportista[i].nombres);
        cout<<"Pais del que proviene el deportista "<<i<<":"<<endl;
        getline(cin,deportista[i].pais);
        cout<<"Diciplina que practica el deportista "<<i<<":"<<endl;
        getline(cin,deportista[i].diciplina);
        cout<<"Cantidad de medallas que tiene el deportista "<<i<<":"<<endl;
        cin>>deportista[i].medallas;
        cin.ignore(100,'\n');
	}
}


	
    return 0;
}