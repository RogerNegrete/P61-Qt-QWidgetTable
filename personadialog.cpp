#include "personadialog.h"
#include "qcalendar.h"
#include "ui_personadialog.h"

PersonaDialog::PersonaDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PersonaDialog)
{
    ui->setupUi(this);
   connect(ui->edadCBox, SIGNAL(activated(int)), this, SLOT(on_edadCBox_activated(int)));
}

PersonaDialog::~PersonaDialog()
{
    delete ui;
}

void PersonaDialog::on_buttonBox_accepted()
{
    QString nombre = ui->inNombre->text();
    QString apellido = ui->inApellido->text();
    QString telefono = ui->inTelefono->text();
    QString email = ui->inEmail->text();
    this->m_persona = new Persona(nombre, apellido, telefono, email);
    accept();
}


void PersonaDialog::on_buttonBox_rejected()
{
    reject();
}

Persona *PersonaDialog::persona() const
{
    return m_persona;
}


void PersonaDialog::on_edadCBox_activated(int index)
{

}


void PersonaDialog::on_bttnDate_clicked()
{
    Calendario *calendary = new Calendario(this);
    //calendary->exec();
    calendary->show();
}

