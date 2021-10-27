#include <iostream>

using namespace std;

class Lampara{
    
    public:
    
    int estado;      // 0: apagado, 1: encendido, 2: dañado.
    //int intensidad;  // 0 a 10
    
    Lampara(string marca_);
    void encendido();
    void apagado();
    //void cambiarIntensidad(int brillo);
    //void informacion();
    //void cambiarBombilla();
    
    private:
    
    string marca;    // sylbania
    int ciclos;      // cuantas veces se ha encendido
    int vida_util;   // 2 - 6 veces
    
    void MostrarEncendido();
    void MostrarApagado();
    void MostrarAveriado();
    
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



Lampara::Lampara(string marca_){
    
    //intensidad = 0;
    estado = 0;
    ciclos = 0;
    marca = marca_;
    vida_util = 2;
     
 };
 
void Lampara::encendido(){
    
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
 
void Lampara::apagado(){
     
    if(estado != 2){
        
        estado = 0;
        MostrarApagado();
        
    }else{
     
        MostrarAveriado();
    }
    
};
     

void Lampara::MostrarEncendido(){

    cout << " ___ " << endl << "( _ )" << endl << " \\_/ " << endl << "|___|" << endl;
 
};
    
void Lampara::MostrarApagado(){
 
    cout << " ___ " << endl << "(   )" << endl << " \\_/ " << endl << "|___|" << endl;
     
};

void Lampara::MostrarAveriado(){

    cout << " ___ " << endl << "( x )" << endl << " \\_/ " << endl << "|___|" << endl;

};






