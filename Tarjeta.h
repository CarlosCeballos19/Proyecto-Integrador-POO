#ifndef TARJETA_T
#define TARJETA_T

#include <iostream>
#include <string>
using namespace std;

class Tarjeta{
    private:
        string nombre;
        double numTarjeta;
        double fechaVencimiento;
        int cvv;
    public:
        Tarjeta(){
            //nombre = "";
            //numTarjeta = ;
            //fechaVencimiento = 00.00;
            //cvv = 000;
        }

        Tarjeta(string nombre, double fechaVencimiento, int cvv){
            this -> nombre = nombre;
            //this -> numTarjeta = numTarjeta;
            this -> fechaVencimiento = fechaVencimiento;
            this -> cvv = cvv;
        }

        //string getNombre(){return nombre;}
        //double getNumTarjeta(){return numTarjeta;}
        //double getFechaVencimiento(){return fechaVencimiento;}
        //int getCvv(){return cvv;}

        void setNombre(string nombre){this->nombre = nombre;}
        void setNumTarjeta(double numTarjeta){this->numTarjeta = numTarjeta;}
        void setFechaVencimiento(double fechaVencimiento){this->fechaVencimiento = fechaVencimiento;}
        void setCvv(int cvv){this->cvv = cvv;}

        void pedirNombre(string nombre){
            cout << "Nombre (use guion bajo como espacio): "; cin >> nombre;
            this -> nombre = nombre;
        }

        void pedirNumTarjeta(double numTarjeta){
            cout << "Numero de tarjeta: "; cin >> numTarjeta;
            this -> numTarjeta = numTarjeta;  
        }

        void pedirFechaVenc(double fechaVencimiento){
            cout << "Fecha de vencimiento (formato mes.ano): "; cin >> fechaVencimiento;
            this -> fechaVencimiento = fechaVencimiento;
        }

        void pedirCvv(int cvv){
            cout << "CVV: "; cin >> cvv;
            this -> cvv = cvv;
        }

        string getNombre(){return nombre;}
        double getNumTarjeta(){return numTarjeta;}
        double getFechaVencimiento(){return fechaVencimiento;}
        int getCvv(){return cvv;}
};

#endif