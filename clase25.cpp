#include <iostream>
#include <cmath>

int N;
float Matriz[0][0];



float relleno(){
    for (int i=0; i<N+2; i++){
        for (int j=0; j<N; j++){
            std::cout<< "Posicion [ " << i+j << " ] [ " << i+j << " ]" << std::endl;
        
            Matriz[i][j]=i+j;
            
    }  
}
      
}


int main(void){
    
    std::cout<<"Escriba un numero del 3 al 11 "<<std::endl;
    std::cin>>N;
    
    if (N>3 && N<11){
       std::cout<<"Esta en el rango indicado"<<std::endl;
       std::cout<<relleno()<<std::endl;
    
    }
    
    else{
       std::cout<<"No esta en el rango indicado"<<std::endl;  
    
    }
    int Matriz[N+2][N];
   
    return 0;
    
    
}


