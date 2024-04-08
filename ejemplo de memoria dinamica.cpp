#include <iostream>

void llenarDatos(char *unidadTrabajo, bool *genero, std::string *categoriaTrabajador, double *sueldo);
void logica(char *unidadTrabajo, bool *genero, std::string *categoriaTrabajador, double *sueldo, double *descuento, double *bonificacionSimple, double *bonificacionEspecial);
int main(){
    char *unidadTrabajo = new char;
    bool *genero = new bool;
    std::string *categoriaTrabajador = new std::string;
    double *sueldo = new double;
    llenarDatos(unidadTrabajo, genero, categoriaTrabajador, sueldo);

    double *descuento = new double; *descuento = 0;
    double *bonificacionSimple = new double; *bonificacionSimple = 0;
    double *bonificacionEspecial = new double; *bonificacionEspecial = 0;
    logica(unidadTrabajo, genero, categoriaTrabajador, sueldo, descuento, bonificacionSimple, bonificacionEspecial);

    std::cout << "++++ Resultados +++++\n";
    std::cout << "Sueldo basico: " << *sueldo << "\n";
    std::cout << "Importe bonificacion simple: " << *bonificacionSimple << "\n";
    std::cout << "Importe bonificacion especial: " << *bonificacionEspecial << "\n";
    std::cout << "Importe de descuento: " << *descuento << "\n";
    std::cout << "Sueldo neto: " << (*sueldo) + (*bonificacionSimple) + (*bonificacionEspecial) - (*descuento);
    std::cout << std::endl;
    delete unidadTrabajo, genero, categoriaTrabajador, sueldo, descuento, bonificacionSimple, bonificacionEspecial;

}
void llenarDatos(char *unidadTrabajo, bool *genero, std::string *categoriaTrabajador, double *sueldo){
    int temp = 0;
    double pago = 0;
    std::cout << "============== SISTEMA DE SUELDOS ==============\n";
    do{
        std::cout << "Ingrese la unidad de trabajo: \nA: [1]\nB: [2]\nC: [3]\n"; std::cin >> temp;
        if (std::cin.fail()) {
            std::cin.clear(); // Limpiar el estado de error
            std::cin.ignore();
        }
        if(temp != 1 && temp != 2 && temp != 3) std::cout << "Intente de nuevo: \n";
    }while(temp != 1 && temp != 2 && temp != 3);
    switch(temp){
        case 1: *unidadTrabajo = 'A'; break;
        case 2: *unidadTrabajo = 'B'; break;
        case 3: *unidadTrabajo = 'C'; break;
    }
    do{
        std::cout << "Ingrese el genero: \nMasculino: [1]\nFemenino: [2]\n"; std::cin >> temp;
        if(temp != 1 && temp != 2) std::cout << "Intente de nuevo: \n";
        if(std::cin.fail()){
            std::cin.clear(); 
            std::cin.ignore();
        }
    }while(temp != 1 && temp != 2);
    switch(temp){
        case 1: *genero = true; break;
        case 2: *genero = false; break;
    }
    do{
        std::cout << "Ingrese la categoria del trabajador: \nFuncionario: [1]\nEmpleado: [2]\nObrero: [3]\n"; std::cin >> temp;
        if(temp != 1 && temp != 2 && temp != 3) std::cout << "Intente de nuevo: \n";
        if(std::cin.fail()){
            std::cin.clear();
            std::cin.ignore();
        }
    }while(temp != 1 && temp != 2 && temp != 3);
    switch(temp){
        case 1: *categoriaTrabajador = "Funcionario"; break;
        case 2: *categoriaTrabajador = "Empleado"; break;
        case 3: *categoriaTrabajador = "Obrero"; break;
    }
    do{
        std::cout << "Ingrese el sueldo del trabajador: "; std::cin >> pago;
        
        if( std::cin.fail()){
            std::cin.clear();
            std::cin.ignore();
            std::cout << "Intente de nuevo!\n";
            continue;
        }

        if(*categoriaTrabajador == "Funcionario"){
            if(pago < 5000 || pago > 10000){
                std::cout << "Intente de nuevo!\n";
                continue;
            }
        }else if(*categoriaTrabajador == "Empleado"){
            if(pago < 3000 || pago > 5000){
                std::cout << "Intente de nuevo!\n";
                continue;
            }
        }else if(*categoriaTrabajador == "Obrero"){

            if(pago < 1000 || pago > 3000){
                std::cout << "Intente de nuevo!\n";
                continue;
            }
        }
        break;
    }while(true);
    *sueldo = pago;
}

void logica(char *unidadTrabajo, bool *genero, std::string *categoriaTrabajador, double *sueldo, double *descuento, double *bonificacionSimple, double *bonificacionEspecial){
    if(*categoriaTrabajador == "Funcionario"){
        switch(*unidadTrabajo){
            case 'C': *descuento = 0;
            default: *descuento = (*sueldo) * 0.10;
        }
    }else if(*categoriaTrabajador == "Empleado"){
        switch(*unidadTrabajo){
            case 'C': *descuento = 0;
            default: *descuento = (*sueldo) * 0.08;
        }
    }else if(*categoriaTrabajador == "Obrero"){
        switch(*unidadTrabajo){
            case 'C': *descuento = 0;
            default: *descuento = (*sueldo) * 0.05;
        }
    }
    *bonificacionSimple *= (*genero) == false && (*sueldo) < 3000 ? 0.10 : 0;
    *bonificacionSimple *= (*genero) == true && (*sueldo) < 5000 ? 0.05 : 0;
    
    *bonificacionEspecial = (*sueldo) * 0.08;
}
