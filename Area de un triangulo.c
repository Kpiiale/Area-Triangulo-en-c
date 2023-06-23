#include <stdio.h>
#include <math.h> 

double calcularDistancias(double x1,double x2,double y1,double y2){
    double d=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    return d;  
}

double calcularPerimetro(double puntos[3][2], double *d1, double *d2, double *d3){
*d1=calcularDistancias(puntos[0][1],puntos[1][0],puntos[0][1], puntos[1][1]); 
*d2=calcularDistancias(puntos[0][0],puntos[2][0],puntos[0][1],puntos[2][1]);
*d3=calcularDistancias(puntos[1][0],puntos[2][0],puntos[1][1],puntos[2][1]);
double perimetro=*d1+*d2+*d3;   
return perimetro;  
}

double calcularArea(double perimetro, double *d1,double *d2, double *d3){
    double s= perimetro/2;  
double area= sqrt(s*(s- *d1) * (s - *d2) * (s - *d3));
return area;   

}
int main (int argc, char *argv[]) {
    double puntos[3][2]={{0,0},{0,3},{3,0}}; 
    double perimetro, area, d1,d2,d3; 
    perimetro=calcularPerimetro(puntos, &d1, &d2, &d3); 
    area=calcularArea(perimetro, &d1, &d2,&d3);
    printf("El perimetro es: %f\n",perimetro); 
    printf("El area del triangulo es: %f\n",area);

    return 0;
}
