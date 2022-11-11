#ifndef TEST5_H
#define TEST5_H

#include <QMainWindow>
#include <QStandardItemModel>
#include <QItemDelegate>
#include <QStandardItemModel>
#include <QTableView>

QT_BEGIN_NAMESPACE
namespace Ui { class Test5; }
QT_END_NAMESPACE

class Test5 : public QMainWindow
{
    Q_OBJECT

public:
    Test5(QWidget *parent = nullptr);
    ~Test5();

private slots:

    void init();
    void on_btnExit_clicked();
    void on_btnMenuShow_clicked();
    void wczytaj();
    void on_btnAnalyserAdd_clicked();
    void initMenu();
    void on_pushButton_clicked();


    void on_btnSaveAnal_clicked();
    void on_actionOpcje_triggered();
void initDB();


private:
    Ui::Test5 *ui;
    QTimer *timer;
    QStandardItemModel *model;
};
#endif // TEST5_H










