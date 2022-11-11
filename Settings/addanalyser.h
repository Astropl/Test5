#ifndef ADDANALYSER_H
#define ADDANALYSER_H

#include <QMainWindow>

namespace Ui {
class addanalyser;
}

class addanalyser : public QMainWindow
{
    Q_OBJECT

public:
    explicit addanalyser(QWidget *parent = nullptr);
    ~addanalyser();

private:
    Ui::addanalyser *ui;
};

#endif // ADDANALYSER_H
