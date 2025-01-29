#ifndef ADD_EMP_H
#define ADD_EMP_H

#include <QDialog>

namespace Ui {
class add_emp;
}

class add_emp : public QDialog
{
    Q_OBJECT

public:
    explicit add_emp(QWidget *parent = nullptr);
    ~add_emp();

private slots:
    void on_emp_add_clicked();

private:
    Ui::add_emp *ui;
};

#endif // ADD_EMP_H
