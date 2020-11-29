#ifndef TICKET_T
#define TICKET_T

#include "Tarjeta.h"
#include "Transaccion.h"
#include "Usuario.h"

#include <iostream>
#include <string>
using namespace std;
class Ticket{
    private:
    Tarjeta tarjeta;
    Usuario usuario;
    Transaccion transaccion;

    public:
    Ticket(){
        tarjeta= Tarjeta{};
        usuario= Usuario{};
        transaccion= Transaccion{};
    }
    Ticket(Tarjeta tarjeta, Usuario usuario, Transaccion transaccion){
        this->tarjeta=tarjeta;
        this->usuario=usuario;
        this->transaccion=transaccion;
    }
    Tarjeta getTarjeta(){return tarjeta;}
    Usuario getUsuario(){return usuario;}
    Transaccion getTransaccion(){return transaccion;}

    void setTarjeta(Tarjeta tarjeta){this -> tarjeta = tarjeta;}
    void setNotificacion(Transaccion transaccion){this -> transaccion = transaccion;}
    void setUsuario(Usuario usuario){this -> usuario = usuario;}

    void crearTicket(Usuario u1, Transaccion t, Tarjeta tj){
        double num{};
        //double numtarjet{};
        //cout<< t. <<endl;
        //tj.pedirNumTarjeta(tj.getNumTarjeta());
        //cout<<numtarjet<<endl;
        string ticket{};
        double tarjeta1{};
        tarjeta1 = u1.getTarjeta().getNumTarjeta();
        //num= u1.pedirTarjeta();
        //cout<<num<<endl;
        ticket = "Resumen: \nNombre: " + u1.getNombre()+ "\nNum. Tarjeta: " + to_string(tarjeta1) + "\nTransaccion realizada: " + (t.getMovRealizado());
        cout << ticket << endl; 
    }

};//clase Ticket

#endif