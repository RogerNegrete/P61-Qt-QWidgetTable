#include "persona.h"

Persona::Persona(QObject *parent)
    : QObject{parent}
{

}


Persona::Persona(const QString &nombre, const QString &apellido, const QString &telefono, const QString &email, const QDate &fechaNacimiento) :
    m_nombre(nombre),
    m_apellido(apellido),
    m_telefono(telefono),
    m_email(email),
    m_fechaNacimiento(fechaNacimiento)
{}

const QString &Persona::nombre() const
{
    return m_nombre;
}

const QString &Persona::apellido() const
{
    return m_apellido;
}

const QString &Persona::telefono() const
{
    return m_telefono;
}

const QString &Persona::email() const
{
    return m_email;
}


const QDate &Persona::fechaNacimiento() const
{
return m_fechaNacimiento;
}

int Persona::calcularEdad() const {
    QDate fechaActual = QDate::currentDate();
    int edad = fechaActual.year() - m_fechaNacimiento.year();

    if (fechaActual.month() < m_fechaNacimiento.month() || (fechaActual.month() == m_fechaNacimiento.month() && fechaActual.day() < m_fechaNacimiento.day())) {
        edad--;
    }

    return edad;
}
