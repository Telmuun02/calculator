#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <math.h>

#include <QMainWindow>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    QString sign;

private slots:
    void on_button1_clicked();

    void on_button2_clicked();

    void on_buttonAdd_clicked();

    void on_buttonEqual_clicked();

    void on_button3_clicked();

    void on_button4_clicked();

    void on_button5_clicked();

    void on_button6_clicked();

    void on_button7_clicked();

    void on_button8_clicked();

    void on_button9_clicked();

    void on_buttonminus_clicked();

    void on_buttonmulti_clicked();

    void on_buttonhuvaah_clicked();

    void on_button0_clicked();

    void on_buttonC_clicked();

    void on_buttonCE_clicked();

    void on_buttondot_clicked();

    void on_buttonhasah_clicked();

    void on_buttonuldegdel_clicked();

    void on_buttonkvadrat_clicked();

    void on_buttonsqrt_clicked();

    void on_buttonback_clicked();

private:
    Ui::MainWindow *ui;
    float result, huvaagch;
    long long hariu;
};
#endif // MAINWINDOW_H
