#include "mainwindow.h"
#include <QMainWindow>
#include <QDebug>


MainWindow::MainWindow(QWidget* parent): QWidget(parent)
{
    this->setGeometry(1000, 500, 500, 300);
    timer = new Timer();

    QLabel * lbl1 = new QLabel("Enter number of faculties", this);
    lbl1->setGeometry(50, 10, 200, 30);

    num_faculties = new QLineEdit(this);
    num_faculties->setGeometry(50, 50, 50, 20);

    QPushButton* pb_set_num = new QPushButton("Ok", this);
    pb_set_num->setGeometry(50, 75, 150, 40);


    QPushButton* pb_quit = new QPushButton("Quit", this);
    pb_quit->setGeometry(400, 10, 80, 50);

    lbl_wrong_number = new QLabel("", this);
    lbl_wrong_number->setStyleSheet("QLabel { color : red; }");
    lbl_wrong_number->setGeometry(200, 270, 200, 30);

    lbl2 = new QLabel("", this);
    lbl2->setGeometry(50, 130, 250, 30);

    pb_add_faculties = new QPushButton("add faculty", this);
    pb_add_faculties->setGeometry(50, 190, 150, 40);

    faculties_names = new QLineEdit(this);
    faculties_names->setGeometry(50, 160, 200, 30);


    QPushButton* pb_count_values = new QPushButton("Count distint values", this);
    pb_count_values->setGeometry(300, 160, 150, 30);

    lbl4 = new QLabel("", this);
    lbl4->setGeometry(300, 195, 200, 20);

    lbl5 = new QLabel("", this);
    lbl5->setStyleSheet("QLabel { color : red; }");
    lbl5->setGeometry(300, 215, 200, 20);


    connect(pb_set_num, SIGNAL(clicked()), this, SLOT(check_ledit_number()));
    connect(this, SIGNAL(got_new_number()), this, SLOT(set_num_facult()));
    connect(pb_add_faculties, SIGNAL(clicked()), this, SLOT(add_facult()));
    connect(pb_quit, SIGNAL(clicked()), this, SLOT(close()));
    connect(pb_count_values, SIGNAL(clicked()), this, SLOT(count_dist_facs()));
}


bool MainWindow::check_ledit_number()
{
    bool flag = false;
    int tmp_num;

    QString txt = this->num_faculties->text();
    tmp_num = txt.toInt(&flag);


    if(txt.isEmpty() || !flag || tmp_num < 0)
    {
        lbl_wrong_number->setText("Enter correct faculty number");
        lbl_wrong_number->show();
        return false;
    }
    else
    {
        num_of_facs = tmp_num;
        emit got_new_number();
    }
    return true;
}


void MainWindow::set_num_facult()
{
        QString num_txt = QString::number(num_of_facs);

        lbl2->setText("You need input " + num_txt + " faculties below.");
        lbl_wrong_number->setText("");
        lbl2->show();
        faculties_names->show();
        pb_add_faculties->show();
        lbl_wrong_number->show();
}



void MainWindow::add_facult()
{

    QString tmp_fac = faculties_names->text();

    if(num_of_facs)
    {
        fac_set_.insert(tmp_fac);
        num_of_facs--;

        QString num_txt = QString::number(num_of_facs);
        lbl2->setText("You need to input " + num_txt + " faculties below.");
        lbl2->show();
    }
    else
    {
        lbl_wrong_number->setText("Enter correct faculty number");
        lbl_wrong_number->show();
    }
}


void MainWindow::count_dist_facs()
{

    if (fac_set_.isEmpty())
    {
        lbl4->setText("Your data collection is empty");
    }
    else
    {
        int count_nums = 0;
        timer->start();
        count_nums = fac_set_.size();
        timer->stop();

        lbl4->setText("Your have " + QString::number(count_nums) + " distinct values");
        lbl5->setText("Elapsed time: " + QString::number(timer->elapsed_time()));
    }
}





