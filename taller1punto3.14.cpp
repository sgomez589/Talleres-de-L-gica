#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    
    int a, b, c;
    
cout << "Inserte el primer número entero. ";
cin >> a;

cout << "Inserte el segundo número entero. ";
cin >> b;

cout << "Inserte el tercer número entero. ";
cin >> c;


if (a<b){
    
if(b>c){
    
cout << "No están en orden numérico."  ;  }

if (b<c){

cout << "Están en órden numérico.";

}
}

if (a>b){
    
if(b>c){
    
cout << "Están en orden numérico.";   }

if (b<c){

cout << "No están en órden numérico.";

} 
}
}