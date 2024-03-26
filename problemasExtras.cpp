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
/*
#include <iostream>
void menuOpciones();
bool check(int opc);
int main(){
    menuOpciones();
}
void menuOpciones(){
    int piedra = 0, persona = 0;
    bool win;
    std::cout << "++++++++++ Piedra, papel o tijeras ++++++++++\n";
    std::cout << "Ingrese el numero de intentos a jugar: "; int entos; std::cin >> entos;
    for(int i = 0; i < entos; i++){
        std::cout << "Ingrese una opcion: \nPiedra: [1]\nPapel: [2]\nTijera: [3]\n";
        int opc; std::cin >> opc;
        win = check(opc);
        win ? persona ++ : piedra ++;
    }
    std::cout << "RESULTADOS\ncomputador: " << piedra << "\nPersona: " << persona;
    std::cout << std::endl;
    if(persona == piedra) std::cout << "Empate, f";
    else if( persona > piedra) std::cout << "Ganaste, bien!";
    else std::cout << "f, bro :c";
    
}
bool check(int opc){
    srand(time(NULL));
    int random = rand() % 3;
    if(random == opc){
        std::cout << "Felicidades!\n";
        return true;
    } 
    else std::cout << "f :c\n";
    return false;
}
*/
/*
#include <iostream>
void menuOpciones();
int main(){
    menuOpciones();
}
void menuOpciones(){
    std::string preguntas[] = {"En que anho se creo c++?", "Quien invento c++?", "Cual es el predecesor de c++", "La tierra es plana"};
    std::string respuestas[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
    {"A. Guido van Rossum, ", "B. Bjarne Stroustrup", "John Carmack", "D. Mark Zuckerburg"},
    {"A. c", "B. c+", "C. c--", "D. B++"},
    {"A. S`i", "B. No", "C. tal vez", "D. xd"}};
    char opc;
    char correctas[] = {'C', 'B', 'A', 'B'};
    int score = 0;
    const int SIZE = sizeof(preguntas) / sizeof(preguntas[0]);
    std::cout << "********** JUEGO DE PREGUNTAS ***********\n";
    for(int i = 0; i < SIZE; i++){
        std::cout << "\n***************************\n";
        std::cout << i + 1 << ". " << preguntas[i] << '\n';
        std::cout << "***************************\n";
        for(int j = 0; j < sizeof(respuestas[0]) / sizeof(respuestas[0][0]); j++){
            std::cout << respuestas[i][j] <<", \n";
        }
        std::cin >> opc;
        opc = toupper(opc);
        if(opc == correctas[i]) score++;
    }
    std::cout << "*****************************\n";
    std::cout << "********** SCORE ************\n";
    std::cout << "*****************************\n";
    std::cout << "Buenas: " << score << '\n';
    std::cout << "Malas: " << 5 - score << '\n';
    std::cout << "Score: " << score/(double)SIZE * 100 << '%';
}
*/
