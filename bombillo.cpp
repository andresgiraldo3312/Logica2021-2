#include <iostream>

using namespace std;

class Lampara{
    
    public:
    
     int estado;      // 0: apagado, 1: encendido, 2: dañado.
     //int intensidad;  // 0 a 10
     
     
     Lampara(string marca_){
        
        //intensidad = 0;
        estado = 0;
        ciclos = 0;
        marca = marca_;
        vida_util = 2;
         
     };
     
     void encendido(){
        
        if(vida_util <= ciclos){
            
            cout << "La lampara se ha averiado" << endl;
            estado = 2;
            
        }
        
        if(estado != 2){
            
            ciclos++;
            estado = 1;
            MostrarEncendido();
            
        }else{
            MostrarAveriado();
        }
         
     };
     
     void apagado(){
         
        if(estado != 2){
            
            estado = 0;
            MostrarApagado();
            
        }else{
         
            MostrarAveriado();
        }
        
     };
     //void cambiarIntensidad(int brillo);
     //void informacion();
     //void cambiarBombilla();
    
    private:
    
     string marca;    // sylbania
     int ciclos;      // cuantas veces se ha encendido
     int vida_util;   // 2 - 6 veces
     
     void MostrarEncendido(){
        
        cout << " ___ " << endl << "( _ )" << endl << " \\_/ " << endl << "|___|" << endl;
         
     };
     
     void MostrarApagado(){
         
        cout << " ___ " << endl << "(   )" << endl << " \\_/ " << endl << "|___|" << endl;
         
     };
     
     void MostrarAveriado(){
        
        cout << " ___ " << endl << "( x )" << endl << " \\_/ " << endl << "|___|" << endl;
        
     };
    
};


int main(){
    
    Lampara Sala("panasonic");
    
    
    Sala.encendido();
    Sala.apagado();
    Sala.encendido();
    Sala.apagado();
    Sala.encendido();
    Sala.apagado();

    return 0;
}








