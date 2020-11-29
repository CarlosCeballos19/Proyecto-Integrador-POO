#include "Usuario.h"
#include "Tarjeta.h"
#include "Transaccion.h"
#include "Ticket.h"

#include <iostream>
using namespace std;
//Teamo bye.
int main(){
    cout << "********* BIENVENIDO *********" << endl;
    cout << " " << endl;
    cout << "--- Cree su cuenta" << endl;
    cout << " " << endl;
    Usuario u1{};
    string nombre{};
    string correo{};
    long telefono{};
    string contrasena{};
    Tarjeta tarjeta{};
    u1.pedirNombre(nombre);
    u1.pedirCorreo(correo);
    u1.pedirTelefono(telefono);
    u1.pedirContrasena(contrasena);
    cout << " " << endl;
    cout << "--- Ahora, ingrese los datos de su tarjeta" << endl;
    cout << " " << endl;
    u1.pedirTarjeta(tarjeta);

    Tarjeta tj1{};
    tj1.pedirNumTarjeta(tj1.getNumTarjeta());
    //double numTarjeta{};
    //double fechaVencimiento{};
    //int cvv{};
    //tj1.pedirNombre(nombre);
    //tj1.pedirNumTarjeta(numTarjeta);
    //tj1.pedirFechaVenc(fechaVencimiento);
    //tj1.pedirCvv(cvv);

    Transaccion t1{};
    int nip{};
    string movRealizado{};
    string notificacion{};
    Usuario usuario{};
    cout << " " << endl;
    cout << "--- Finalice su transaccion" << endl;
    t1.pedirNip(nip);
    t1.movimientoRealizado(movRealizado);
    t1.crearNotificacion(u1);
    t1.enviarNotificacion(u1);

    Ticket tc1{};
    cout << " " << endl;
    cout << "--- Generacion de Ticket" << endl;
    tc1.crearTicket(u1,t1,tj1);

    return 0;
}
