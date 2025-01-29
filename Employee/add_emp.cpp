#include "add_emp.h"
#include "ui_add_emp.h"
#include <fstream>
#include <QtWidgets>

add_emp::add_emp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_emp)
{
    ui->setupUi(this);
}

add_emp::~add_emp()
{
    delete ui;
}

void add_emp::on_emp_add_clicked()
{
    using namespace std;
    QFile qFile("employees.csv");
    if (qFile.open(QIODevice::Append))
    {
        int id=ui->emp_id->toPlainText().toInt();
        QString name= ui->emp_name->toPlainText();
        QDate dob = ui->emp_dob->date();
        QString Role=ui->role->currentText();

        QTextStream out(&qFile);
        out << id << "," << name << "," << dob.toString("dd.MM.yyyy") << "," << Role;
    }
    qFile.close();
}

