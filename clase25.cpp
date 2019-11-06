#include <iostream>
#include <cmath>

int N=0;
float Matriz[0][0];

void relleno(int N,float **Matriz);

void imprimecabezas(int N,float **Matriz);

void imprime(int N,float **Matriz);


void relleno(int N,float **Matriz){
    for (int i=0; i<N+2; i++){
        for (int j=0; j<N; j++){
            
        
            Matriz[i][j]=i+j;
            std::cout<< Matriz[i][j]<< std::endl;
            
    }  
}
      
}

void imprimecabezas(int N, float **Matriz){

    float sum=0;

    for (int i =0; i <N;i++) {

    std::cout<<Matriz[i][0]<<" ";

    sum+=Matriz[i][0];


    }
}



int main(void){
    
    std::cout<<"Escriba un numero del 3 al 11 "<<std::endl;
    std::cin>>N;
    
    if (N>3 && N<11){
       new float *[N];
       for (int i=0; i<N; i++){
           Matriz[i] = new float[N+2];
       }
       std::cout<<relleno(N, Matriz)<<std::endl;
       std::cout<<imprimecabezas(N,Matriz)<<std::cout;
    
    }
    
    else{
       std::cout<<"No esta en el rango indicado"<<std::endl;  
    
    }
    
   
    return 0;
    
    
}



