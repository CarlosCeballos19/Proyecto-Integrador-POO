#ifndef TRANSACCION_T
#define TRANSACCION_T

#include "Usuario.h"

#include <iostream>
#include <string>


using namespace std;
class Transaccion{
    private: 
    int nip;
    string movRealizado;
    string notificacion;
    Usuario usuario;

    public:
    Transaccion(){
        nip = 000;
        movRealizado = " ";
        notificacion = "No hay ningun dato";
        usuario = Usuario{};
    }

    Transaccion(int nip, string movRealizado, string notificacion, Usuario usuario ){
        this -> nip = nip;
        this -> movRealizado = movRealizado;
        this -> notificacion = notificacion;  
        this -> usuario = usuario; 
    }
     
        int getNip(){return nip;}
        string getMovRealizado(){return movRealizado;}
        string getNotificacion(){return notificacion;}
        Usuario getUsuario(){return usuario;}

        void setNip(int nip){this -> nip = nip;}
        void setMovRealizado(string movRealizado){this -> movRealizado = movRealizado;}
        void setNotificacion(string notificacion){this -> notificacion = notificacion;}
        void setUsuario(Usuario usuario){this -> usuario = usuario;}

    void pedirNip(int nip){
        cout << "Digite su NIP: "; cin >> nip;
        this -> nip = nip;
    }
    void movimientoRealizado(string movRealizado){
        cout << "Movimientos que se pueden realizar: " << endl;
        cout << "(a) Deposito" << endl;
        cout << "(b) Pago" << endl;
        cout << "(c) Retiro" << endl;
        cout << "Que movimiento quiere realizar? "; cin >> movRealizado;
        this -> movRealizado = movRealizado; 
        while (movRealizado != "a" && movRealizado != "b" && movRealizado != "c" ){
            cout << " Opcion invalida, Que movimiento quiere realizar? "; cin >> movRealizado;
            this -> movRealizado = movRealizado; 
        }
            if (movRealizado == "a"){
                movRealizado = "Deposito";
                this -> movRealizado = movRealizado;
            }
            if (movRealizado == "b"){
                movRealizado = "Pago";
                this -> movRealizado = movRealizado; 
            }

            if (movRealizado == "c"){
                movRealizado = "Retiro";
                this -> movRealizado = movRealizado;
            }  
    }

    void crearNotificacion(Usuario u){
        string noti{};
        noti = "Estimado(a) " + u.getNombre() + ", hemos detectado el siguiente movimiento: " + movRealizado;
        cout<<"Notificacion generada:"<<endl;
        cout<< noti <<endl;
    }
    void enviarNotificacion(Usuario u){
        string notif{};
        notif = "La notificacion ha sido enviada al siguiente correo: " + u.getCorreo();
        cout << notif << endl;
    }
};
#endif
