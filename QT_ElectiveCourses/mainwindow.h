#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QSet>
#include <QString>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>

#include "timer.h"


class MainWindow:public QWidget
{
    Q_OBJECT
public:
    MainWindow(QWidget* parent=nullptr);

public slots:
    void add_facult();
    void set_num_facult();
    bool check_ledit_number();
    void count_dist_facs();


signals:
    void got_new_number();


private:
    QLineEdit* num_faculties = nullptr;
    QLabel* lbl2 = nullptr;
    QLineEdit* faculties_names = nullptr;
    QPushButton* pb_add_faculties = nullptr;
    QLabel* lbl_wrong_number = nullptr;
    QLabel* lbl4 = nullptr;
    QLabel* lbl5 = nullptr;

    QSet<QString> fac_set_;
    uint num_of_facs = 0;
    Timer* timer = nullptr;

};

#endif // MAINWINDOW_H
