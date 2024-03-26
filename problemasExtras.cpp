/*
#include <iostream>
//#include <iomanip>
double calcularSuma(double a, double b, double c, double d);
double calcularProducto(double a, double b, double c, double d);
double calcularResta(double a, double b, double c, double d);
double calcularMayor(double a, double b, double c, double d);
double calcularMenor(double a, double b, double c, double d);
int main(){
    using std::cin;
    std::cout << "Ingrese cuatro numeros: \n";
    double num1, num2, num3, num4;
    cin >> num1; cin >> num2; cin >> num3; cin >> num4;
    std::cout << calcularSuma(num1, num2, num3, num4) << '\n';
    std::cout << calcularProducto(num1, num2, num3, num4) << '\n';
    std::cout << calcularResta(num1, num2, num3, num4) << '\n';
    std::cout << calcularMayor(num1, num2, num3, num4) << '\n';
    std::cout << calcularMenor(num1, num2, num3, num4) << '\n';
}
double calcularSuma(double a, double b, double c, double d){
    return a + b + c + d;
}
double calcularProducto(double a, double b, double c, double d){
    return a * b * c * d;
}
double calcularResta(double a, double b, double c, double d){
    return calcularProducto(a, b, c, d) - calcularSuma(a, b, c, d);
}
double calcularMayor(double a, double b, double c, double d){
    double mayor;
    mayor = std::max(a, b);
    mayor = std::max(mayor, c);
    mayor = std::max(mayor, d);
    return mayor;
}
double calcularMenor(double a, double b, double c, double d){
    double menor;
    menor = std::min(a, b);
    menor = std::min(menor, c);
    menor = std::min(menor, d);
    return menor;
}
*/
