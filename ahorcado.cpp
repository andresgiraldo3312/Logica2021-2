#include <iostream>

using namespace std;

class Juego{
    
    public:
        Juego(int vidas_);        // listo
        void Jugar();             // listo
    
    private:
    
        void IngresarLetra();      // ok
        void BuscarLetra();        // ok
        void MostrarPalabra();     // ok
        
        void ImprimirIntento();    // ok
        
        void Cero();               // listo
        void Uno();                // ok
        void Dos();                // ok
        void Tres();               // ok
        void Cuatro();             // ok
        void Cinco();              // ok
        void Seis();               // ok
        
        char letra;
        char avance[10];
        char palabra[10];
        int vidas;
        int longitud;
    
}

int main(){

    
    Juego Ahorcado(6);
    Ahorcado.Jugar();
    
    return 0;
}


Juego::Juego(int vidas_){
    
    palabra = {'c','o','l','o','m','b','i','a'};
    avance = {'_','_','_','_','_','_','_','_'};
    vidas = vidas_;
    longitud = 8;
    
};



void Juego::Jugar(){
    
    while(vidas > 0){
        
        IngresarLetra();
        BuscarLetra();
        ImprimirIntento();
        MostrarPalabra();
        
    }
    
};


void Juego::Seis(){
    
    cout << "______" << endl;
    cout << "||   |" << endl;
    cout << "||    " << endl;
    cout << "||    " << endl;
    cout << "||    " << endl;
    cout << "||    " << endl;

}
    


/*
______
||   |   
||   O
||  /|\
||  / \
||

_ _ _ _ _ _ 

*/
