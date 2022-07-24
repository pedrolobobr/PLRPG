#ifndef PLRPG_H
#define PLRPG_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class PLRPG; }
QT_END_NAMESPACE

class PLRPG : public QMainWindow
{
    Q_OBJECT

public:
    PLRPG(QWidget *parent = nullptr);
    ~PLRPG();


private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();



private:
    Ui::PLRPG *ui;
};
#endif // PLRPG_H
