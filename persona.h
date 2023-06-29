#ifndef PERSONA_H
#define PERSONA_H

#include "qdatetime.h"
#include <QObject>
#include <QDate>

class Persona : public QObject
{
    Q_OBJECT
public:
    explicit Persona(QObject *parent = nullptr);
    Persona(const QString &nombre, const QString &apellido, const QString &telefono, const QString &email, const QDate &fechaNacimiento);

    const QString &nombre() const;
    const QString &apellido() const;
    const QString &telefono() const;
    const QString &email() const;
    const QDate &fechaNacimiento() const;
    int calcularEdad() const;

signals:

private:
    QString m_nombre;
    QString m_apellido;
    QString m_telefono;
    QString m_email;
    QDate m_fechaNacimiento;
};

#endif // PERSONA_H
