#ifndef USUARIO_U
#define USUARIO_U

#include "Tarjeta.h"
#include <iostream>
#include <string>
using namespace std;

class Usuario{
    private:
        string nombre;
        string correo;
        double telefono;
        string contrasena;
        Tarjeta tarjeta;
    public:
        Usuario(){
            nombre = "";
            correo = "xxxxxx@xxxx.com";
            telefono = 0000000000;
            contrasena = "xddxdcdxd";
            tarjeta = Tarjeta{};
        }

        Usuario(string nombre, string correo, double telefono, string contrasena){
            this -> nombre = nombre;
            this -> correo = correo;
            this -> telefono = telefono;
            this -> contrasena = contrasena;
            this -> tarjeta = tarjeta;
        }
        
        
        Tarjeta getTarjeta(){return tarjeta;}
        string getNombre(){return nombre;}
        string getCorreo(){return correo;}
        double getTelefono(){return telefono;}
        string getContrasena(){return contrasena;}



        void setNombre(string nombre){this->nombre = nombre;}
        void setCorreo(string correo){this->correo = correo;}
        void setTelefono(double telefono){this->telefono = telefono;}
        void setContrasena(string contrasena){this->contrasena = contrasena;}
        void setTarjeta(Tarjeta tarjeta){this-> tarjeta = tarjeta;}
        
        void pedirNombre(string nombre){
            cout << "Nombre (use guion bajo como espacio): "; cin >> nombre;
            this -> nombre = nombre;
        }

        void pedirCorreo(string correo){
            cout << "Correo: "; cin >> correo;
            setCorreo(correo);
            this -> correo = correo;
        }

        void pedirTelefono(double telefono){
            cout << "Telefono: "; cin >> telefono;
            this -> telefono = telefono;
        }

        void pedirContrasena(string contrasena){
            cout << "Contrasena: "; cin >> contrasena;
            this -> contrasena = contrasena;
        }

        void pedirTarjeta(Tarjeta t){
            string nombre{};
            long numTarjeta{};
            double fechaVencimiento{};
            int cvv{};
            t.pedirNombre(nombre);
            t.pedirNumTarjeta(numTarjeta);
            t.pedirFechaVenc(fechaVencimiento);
            t.pedirCvv(cvv);
        }
};

#endif