#include <iostream>

int valor=0;

void relleno(int valor, float **f);

void imprimeCabezas(int valor, float **f);

void obtenerM(int valor, float **f);



int main(void){
    
    std::cout<<"Escriba un numero del 3 al 11 "<<std::endl;
    
    std::cin>>valor;
    
    if (valor>=3 && valor<=11){
       float ** Matriz = new float *[valor];
       for (int i=0; i<valor; i++){
           Matriz[i] = new float[valor+2];
       }
       relleno(valor, Matriz);
       imprimeCabezas(valor,Matriz);
       obtenerM(valor,Matriz);
    }
    
    else{
       std::cout<<"No esta en el rango indicado"<<std::endl;  
    
    }
    
   
    return 0;
    
    
}


void relleno(int valor,float **f){
    for (int i=0; i<valor+2; i++){
        for (int j=0; j<valor; j++){
            

            f[j][i]=i+j;
            
    }  
}
      
}

void imprimeCabezas(int valor, float **f){

    float sumatoria=0;
	float sumar=0;
    
	std::cout<<"Primera fila: "<<" ";
    for (int i =0; i <valor;i++) {
	std::cout<<f[i][0]<<" ";
	sumatoria+=f[i][0];
    }
    
    std::cout<<std::endl;
	
	for (int j=0; j<valor+2;j++){
		sumar+=f[0][j];
	}
	std::cout<<std::endl;
    std::cout<<"Suma de los elementos de la primera columna: "<<" "<<sumar<<std::endl;

}


void obtenerM(int valor,float **f){

  for (int  j =0;  j < valor+2; j++) {


      for (int i = 0; i <valor; i++) {

        std::cout<<"     "<<f[i][j]<<"     ";

  }

  std::cout<<std::endl;

  }

}



