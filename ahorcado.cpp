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
        
        void Cero();               // ok
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
        int descubiertas;
    
};

int main(){

    
    Juego Ahorcado(6);
    Ahorcado.Jugar();
    
    return 0;
}


Juego::Juego(int vidas_){
    
    FILE *fichero = fopen("fichero.txt", "r");
    
    srand(time(NULL));
    int n = rand() % 5 + 1;
    int j;
    char caracter;
    
    cout << n << endl;
    
    for(int i = 1; i < n; i++){
        
        j = 0;
        caracter = fgetc(fichero);
        
        while( caracter != '\n' ){
            
            palabra[j] = caracter;
            caracter = fgetc(fichero);
            avance[j] =  '_';
            j++;
            
        }
        
    }
    
    fclose(fichero);
    
    
    vidas = vidas_;
    longitud = j;
    descubiertas = 0;
    
};



void Juego::Jugar(){
    
    while(vidas > 0 and descubiertas < longitud){
        
        IngresarLetra();
        BuscarLetra();
        ImprimirIntento();
        MostrarPalabra();
        
    }
    
    if(descubiertas == longitud){
        
        cout << "!!! Enhorabuena felicitaciones ¡¡¡" << endl;
        
    }else{
        
        cout << "Acaba de perder " << endl;
    }
    
};


void Juego::IngresarLetra(){
    
    cout << " " << endl;
    
    cout << "Ingrese la letra: ";
    cin >> letra;
    
}

void Juego::MostrarPalabra(){
    
    
    for(int i = 0; i < longitud; i++){
        
        cout << avance[i] << " ";
        
    }
    
    cout << endl;
    
}

void Juego::BuscarLetra(){
    
    bool No_acerto = true;
    
    for(int i=0; i < longitud; i++){
        
        if(letra == palabra[i]){
            
            avance[i] = letra;
            No_acerto = false;
            descubiertas++;
        }
        
    }
    
    if(No_acerto){
        
        vidas--;
        
    }
    
}

void Juego::Seis(){
    
    cout << "______" << endl;
    cout << "||   |" << endl;
    cout << "||    " << endl;
    cout << "||    " << endl;
    cout << "||    " << endl;
    cout << "||    " << endl;

}
    

void Juego::Cinco(){
    
    cout << "______" << endl;
    cout << "||   |" << endl;
    cout << "||   O" << endl;
    cout << "||    " << endl;
    cout << "||    " << endl;
    cout << "||    " << endl;

}

void Juego::Cuatro(){
    
    cout << "______" << endl;
    cout << "||   |" << endl;
    cout << "||   O" << endl;
    cout << "||   |" << endl;
    cout << "||    " << endl;
    cout << "||    " << endl;

}

void Juego::Tres(){
    
    cout << "______" << endl;
    cout << "||   |" << endl;
    cout << "||   O" << endl;
    cout << "||   |\\" << endl;
    cout << "||    " << endl;
    cout << "||    " << endl;

}

void Juego::Dos(){
    
    cout << "______" << endl;
    cout << "||   |" << endl;
    cout << "||   O" << endl;
    cout << "||  /|\\" << endl;
    cout << "||    " << endl;
    cout << "||    " << endl;

}

void Juego::Uno(){
    
    cout << "______" << endl;
    cout << "||   |" << endl;
    cout << "||   O" << endl;
    cout << "||  /|\\" << endl;
    cout << "||    \\" << endl;
    cout << "||    " << endl;

}

void Juego::Cero(){
    
    cout << "______" << endl;
    cout << "||   |" << endl;
    cout << "||   O" << endl;
    cout << "||  /|\\" << endl;
    cout << "||  / \\" << endl;
    cout << "||    " << endl;

}

void Juego::ImprimirIntento(){
    
    cout << " " << endl;
    
    switch(vidas){
        
        case 0: 
            Cero();
            break;
        case 1: 
            Uno();
            break;
        case 2: 
            Dos();
            break;
        case 3: 
            Tres();
            break;
        case 4: 
            Cuatro();
            break;
        case 5: 
            Cinco();
            break;
        case 6: 
            Seis();
            break;
        
    }
    
    cout << " " << endl;
    cout << " " << endl;
    
}
