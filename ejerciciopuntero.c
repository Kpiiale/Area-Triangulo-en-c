#include <stdio.h>
void calcularPrecio(float cantidad, float *precioxproducto, float precio){
*precioxproducto=cantidad*precio;  
} 
float descuento(float *precioxproducto, float *desc){
    float valor;
*desc=*precioxproducto*0.1; 
valor= *precioxproducto-*desc;
return valor; 
} 
int main (int argc, char *argv[]) {
    char producto[3][50]={"Productos1", "producto2", "producto3"}; 
    float precio[3]={30,40,50};
    float precioxproducto, desc,valor;  
    float cantidad=10; 
    calcularPrecio(cantidad, &precioxproducto, precio[0]);  
    valor=descuento(&precioxproducto, &desc);  
    printf("La cantidad total es: %.2f\n", precioxproducto); 
    printf("%f",valor); 
        return 0;
}