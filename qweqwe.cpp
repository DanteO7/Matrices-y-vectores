#include <iostream>
using namespace std;

int main() {
bool simetrica=true;
int filas, columnas;
cout << "Ingrese la cantidad de filas de la matriz: ";
cin >> filas;
cout << "Ingrese la cantidad de filas de la matriz: ";
cin >> columnas;
int matriz [filas][columnas];
int transpuesta [columnas][filas];
int multiplicacion[filas][filas];
for(int i=0;i<filas;i++){
    for(int j=0;j<columnas;j++){
        cout << "Ingresar un valor para ["<<i<<"]["<<j<<"]: ";
        cin >> matriz[i][j];
    }
}cout<<endl<< "La original es: "<<endl;
for(int i=0;i<filas;i++){
    for(int j=0;j<columnas;j++){
        cout << matriz[i][j] << " ";
    }cout<<endl;
}
for(int i=0;i<filas;i++){
    for(int j=0;j<columnas;j++){
        transpuesta[i][j]=0;
    }
}
for(int i=0;i<filas;i++){
    for(int j=0;j<columnas;j++){
         transpuesta[j][i] = matriz[i][j];
    }
}cout<<endl<< "La transpuesta es: "<<endl;
for(int i=0;i<columnas;i++){
    for(int j=0;j<filas;j++){
        cout << transpuesta[i][j] << " ";
    }cout<<endl;
}
for(int i=0;i<filas;i++){
    for(int j=0;j<filas;j++){
        multiplicacion[i][j]=0;
    }
}
for(int i=0;i<filas;i++){
    for(int j=0;j<filas;j++){
        for(int k=0;k<columnas;k++){
            multiplicacion[i][j]+=matriz[i][k]*transpuesta[k][j];
        }
    }
}cout<<endl<< "La multiplicacion de la original con la transpuesta es: "<<endl;
for(int i=0;i<filas;i++){
    for(int j=0;j<filas;j++){
        cout << multiplicacion[i][j] << " ";
    }cout<<endl;
}cout << endl;
if(filas==columnas){
for(int i=0;i<filas;i++){
    for(int j=0;j<columnas;j++){
        if(matriz[i][j]!=matriz[j][i]){
           simetrica=false;
           break;
        }
    }
}
if(!simetrica){
   cout << "La matriz no es simetrica";
}else{
   cout << "La matriz es simetrica";
}
}else{
    cout<<"No es simetrica ya que no es cuadrada";
}
cout << endl;
return 0;
}
