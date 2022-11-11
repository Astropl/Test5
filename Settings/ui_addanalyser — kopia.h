/********************************************************************************
** Form generated from reading UI file 'addanalyser.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDANALYSER_H
#define UI_ADDANALYSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddAnalyser
{
public:
    QWidget *centralwidget;
    QFrame *frmAnalizatorAdd;
    QPushButton *btnZapiszSN;
    QLineEdit *lineModel;
    QPushButton *btnZapiszModel;
    QLabel *lblModel;
    QLabel *lblNumerSeryjny;
    QLineEdit *lineProducent;
    QLabel *lblProducent;
    QComboBox *comboBoxShowProducent;
    QComboBox *comboBoxShowModel;
    QPushButton *btnZapiszProducent;
    QTextBrowser *lblInfoAddanalyser_2;
    QLineEdit *lineSN;
    QTextBrowser *lblInfoAddanalyser;
    QLabel *lblCaloscSNInfo;
    QLabel *lblAnalizator;
    QLabel *lblCaloscProducent;
    QLabel *lblCaloscProducentInfo;
    QPushButton *btnZapiszCalosc;
    QLabel *lblCaloscModelInfo;
    QLabel *lblCaloscModel;
    QLabel *lblcaloscNumerSeryjny;
    QPushButton *btnExit;
    QFrame *frmKontrahentAdd;
    QPushButton *btnZapiszKontrahent;
    QComboBox *comboBoxPomoc;
    QLabel *lblDaneAdresowe;
    QPushButton *pushButton_2;
    QScrollArea *frmDaneAdres;
    QWidget *scrollAreaWidgetContents;
    QLabel *lblUrl;
    QLabel *lblEmail;
    QLabel *lblTelDod;
    QLabel *lblTel;
    QLabel *lblUlica;
    QLabel *lblMiasto;
    QLabel *lblKraj;
    QLabel *label_16;
    QScrollArea *frmDaneAdres3;
    QWidget *scrollAreaWidgetContents_2;
    QLabel *lblNrMieszkania;
    QLabel *lblWojewodztwo;
    QLabel *lblKodPocztowy;
    QScrollArea *frmDaneAdres2;
    QWidget *scrollAreaWidgetContents_3;
    QComboBox *cmbWczytajKraj;
    QComboBox *cmbWczytajMiasta;
    QLineEdit *lineEditWczytajUlica;
    QLineEdit *lineEditWczytajTelefon;
    QLineEdit *lineEditWczytajTelefonDod;
    QLineEdit *lineEditWczytajEmail;
    QLineEdit *lineEditWczytajUrl;
    QScrollArea *frmDaneAdres4;
    QWidget *scrollAreaWidgetContents_4;
    QComboBox *cmbWczytajWojewodztwa;
    QLineEdit *lineEditWczytajKodPocztowy;
    QLineEdit *lineEditWczytajNrDomu;
    QScrollArea *frmDane2;
    QWidget *scrollAreaWidgetContents_7;
    QLineEdit *lineEditWczytajNumer;
    QLineEdit *lineEditWczytajNazwa_1;
    QLineEdit *lineEditWczytajImie;
    QLineEdit *lineEditWczytajNazwisko;
    QPushButton *pushButton;
    QScrollArea *scrollArea_5;
    QWidget *scrollAreaWidgetContents_5;
    QPushButton *btnZapiszKontrahenta;
    QPushButton *btnExit_2;
    QScrollArea *frmDane1;
    QWidget *scrollAreaWidgetContents_6;
    QLabel *lblImie;
    QLabel *lblNazwisko;
    QLabel *lblNazwa;
    QLabel *lblNumer;
    QLineEdit *lineEditWczytajKraj;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AddAnalyser)
    {
        if (AddAnalyser->objectName().isEmpty())
            AddAnalyser->setObjectName("AddAnalyser");
        AddAnalyser->resize(961, 613);
        centralwidget = new QWidget(AddAnalyser);
        centralwidget->setObjectName("centralwidget");
        frmAnalizatorAdd = new QFrame(centralwidget);
        frmAnalizatorAdd->setObjectName("frmAnalizatorAdd");
        frmAnalizatorAdd->setGeometry(QRect(790, 400, 141, 81));
        frmAnalizatorAdd->setFrameShape(QFrame::StyledPanel);
        frmAnalizatorAdd->setFrameShadow(QFrame::Raised);
        btnZapiszSN = new QPushButton(frmAnalizatorAdd);
        btnZapiszSN->setObjectName("btnZapiszSN");
        btnZapiszSN->setGeometry(QRect(40, 20, 91, 29));
        lineModel = new QLineEdit(frmAnalizatorAdd);
        lineModel->setObjectName("lineModel");
        lineModel->setGeometry(QRect(30, 10, 101, 26));
        btnZapiszModel = new QPushButton(frmAnalizatorAdd);
        btnZapiszModel->setObjectName("btnZapiszModel");
        btnZapiszModel->setGeometry(QRect(50, 30, 81, 29));
        lblModel = new QLabel(frmAnalizatorAdd);
        lblModel->setObjectName("lblModel");
        lblModel->setGeometry(QRect(40, 20, 91, 20));
        lblNumerSeryjny = new QLabel(frmAnalizatorAdd);
        lblNumerSeryjny->setObjectName("lblNumerSeryjny");
        lblNumerSeryjny->setGeometry(QRect(30, 20, 101, 20));
        lineProducent = new QLineEdit(frmAnalizatorAdd);
        lineProducent->setObjectName("lineProducent");
        lineProducent->setGeometry(QRect(50, 10, 81, 26));
        lblProducent = new QLabel(frmAnalizatorAdd);
        lblProducent->setObjectName("lblProducent");
        lblProducent->setGeometry(QRect(80, 30, 51, 20));
        comboBoxShowProducent = new QComboBox(frmAnalizatorAdd);
        comboBoxShowProducent->setObjectName("comboBoxShowProducent");
        comboBoxShowProducent->setGeometry(QRect(50, 20, 81, 26));
        comboBoxShowModel = new QComboBox(frmAnalizatorAdd);
        comboBoxShowModel->setObjectName("comboBoxShowModel");
        comboBoxShowModel->setGeometry(QRect(60, 20, 71, 26));
        btnZapiszProducent = new QPushButton(frmAnalizatorAdd);
        btnZapiszProducent->setObjectName("btnZapiszProducent");
        btnZapiszProducent->setGeometry(QRect(30, 20, 101, 29));
        lblInfoAddanalyser_2 = new QTextBrowser(frmAnalizatorAdd);
        lblInfoAddanalyser_2->setObjectName("lblInfoAddanalyser_2");
        lblInfoAddanalyser_2->setGeometry(QRect(20, 20, 111, 51));
        lineSN = new QLineEdit(frmAnalizatorAdd);
        lineSN->setObjectName("lineSN");
        lineSN->setGeometry(QRect(30, 20, 91, 26));
        lblInfoAddanalyser = new QTextBrowser(frmAnalizatorAdd);
        lblInfoAddanalyser->setObjectName("lblInfoAddanalyser");
        lblInfoAddanalyser->setGeometry(QRect(20, 10, 111, 51));
        lblCaloscSNInfo = new QLabel(frmAnalizatorAdd);
        lblCaloscSNInfo->setObjectName("lblCaloscSNInfo");
        lblCaloscSNInfo->setGeometry(QRect(40, 30, 111, 20));
        lblAnalizator = new QLabel(frmAnalizatorAdd);
        lblAnalizator->setObjectName("lblAnalizator");
        lblAnalizator->setGeometry(QRect(30, 30, 101, 20));
        lblCaloscProducent = new QLabel(frmAnalizatorAdd);
        lblCaloscProducent->setObjectName("lblCaloscProducent");
        lblCaloscProducent->setGeometry(QRect(30, 30, 91, 20));
        lblCaloscProducentInfo = new QLabel(frmAnalizatorAdd);
        lblCaloscProducentInfo->setObjectName("lblCaloscProducentInfo");
        lblCaloscProducentInfo->setGeometry(QRect(40, 30, 111, 20));
        btnZapiszCalosc = new QPushButton(frmAnalizatorAdd);
        btnZapiszCalosc->setObjectName("btnZapiszCalosc");
        btnZapiszCalosc->setGeometry(QRect(30, 20, 61, 29));
        lblCaloscModelInfo = new QLabel(frmAnalizatorAdd);
        lblCaloscModelInfo->setObjectName("lblCaloscModelInfo");
        lblCaloscModelInfo->setGeometry(QRect(30, 20, 101, 20));
        lblCaloscModel = new QLabel(frmAnalizatorAdd);
        lblCaloscModel->setObjectName("lblCaloscModel");
        lblCaloscModel->setGeometry(QRect(20, 30, 111, 20));
        lblcaloscNumerSeryjny = new QLabel(frmAnalizatorAdd);
        lblcaloscNumerSeryjny->setObjectName("lblcaloscNumerSeryjny");
        lblcaloscNumerSeryjny->setGeometry(QRect(20, 30, 111, 20));
        btnExit = new QPushButton(centralwidget);
        btnExit->setObjectName("btnExit");
        btnExit->setGeometry(QRect(780, 480, 93, 29));
        frmKontrahentAdd = new QFrame(centralwidget);
        frmKontrahentAdd->setObjectName("frmKontrahentAdd");
        frmKontrahentAdd->setGeometry(QRect(20, 20, 821, 501));
        frmKontrahentAdd->setFrameShape(QFrame::StyledPanel);
        frmKontrahentAdd->setFrameShadow(QFrame::Raised);
        btnZapiszKontrahent = new QPushButton(frmKontrahentAdd);
        btnZapiszKontrahent->setObjectName("btnZapiszKontrahent");
        btnZapiszKontrahent->setGeometry(QRect(610, 470, 131, 29));
        comboBoxPomoc = new QComboBox(frmKontrahentAdd);
        comboBoxPomoc->setObjectName("comboBoxPomoc");
        comboBoxPomoc->setGeometry(QRect(610, 340, 181, 22));
        lblDaneAdresowe = new QLabel(frmKontrahentAdd);
        lblDaneAdresowe->setObjectName("lblDaneAdresowe");
        lblDaneAdresowe->setGeometry(QRect(10, 130, 111, 16));
        pushButton_2 = new QPushButton(frmKontrahentAdd);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(500, 390, 80, 23));
        frmDaneAdres = new QScrollArea(frmKontrahentAdd);
        frmDaneAdres->setObjectName("frmDaneAdres");
        frmDaneAdres->setGeometry(QRect(10, 150, 120, 160));
        frmDaneAdres->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 118, 158));
        lblUrl = new QLabel(scrollAreaWidgetContents);
        lblUrl->setObjectName("lblUrl");
        lblUrl->setGeometry(QRect(10, 130, 47, 20));
        lblEmail = new QLabel(scrollAreaWidgetContents);
        lblEmail->setObjectName("lblEmail");
        lblEmail->setGeometry(QRect(10, 110, 47, 20));
        lblTelDod = new QLabel(scrollAreaWidgetContents);
        lblTelDod->setObjectName("lblTelDod");
        lblTelDod->setGeometry(QRect(10, 90, 91, 20));
        lblTel = new QLabel(scrollAreaWidgetContents);
        lblTel->setObjectName("lblTel");
        lblTel->setGeometry(QRect(10, 70, 47, 20));
        lblUlica = new QLabel(scrollAreaWidgetContents);
        lblUlica->setObjectName("lblUlica");
        lblUlica->setGeometry(QRect(10, 50, 47, 20));
        lblMiasto = new QLabel(scrollAreaWidgetContents);
        lblMiasto->setObjectName("lblMiasto");
        lblMiasto->setGeometry(QRect(10, 30, 47, 20));
        lblKraj = new QLabel(scrollAreaWidgetContents);
        lblKraj->setObjectName("lblKraj");
        lblKraj->setGeometry(QRect(10, 10, 47, 20));
        frmDaneAdres->setWidget(scrollAreaWidgetContents);
        label_16 = new QLabel(frmKontrahentAdd);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(620, 390, 151, 16));
        frmDaneAdres3 = new QScrollArea(frmKontrahentAdd);
        frmDaneAdres3->setObjectName("frmDaneAdres3");
        frmDaneAdres3->setGeometry(QRect(380, 150, 151, 81));
        frmDaneAdres3->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 149, 79));
        lblNrMieszkania = new QLabel(scrollAreaWidgetContents_2);
        lblNrMieszkania->setObjectName("lblNrMieszkania");
        lblNrMieszkania->setGeometry(QRect(10, 50, 131, 20));
        lblWojewodztwo = new QLabel(scrollAreaWidgetContents_2);
        lblWojewodztwo->setObjectName("lblWojewodztwo");
        lblWojewodztwo->setGeometry(QRect(10, 10, 71, 20));
        lblKodPocztowy = new QLabel(scrollAreaWidgetContents_2);
        lblKodPocztowy->setObjectName("lblKodPocztowy");
        lblKodPocztowy->setGeometry(QRect(10, 30, 81, 20));
        frmDaneAdres3->setWidget(scrollAreaWidgetContents_2);
        frmDaneAdres2 = new QScrollArea(frmKontrahentAdd);
        frmDaneAdres2->setObjectName("frmDaneAdres2");
        frmDaneAdres2->setGeometry(QRect(130, 150, 250, 161));
        frmDaneAdres2->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName("scrollAreaWidgetContents_3");
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 248, 159));
        cmbWczytajKraj = new QComboBox(scrollAreaWidgetContents_3);
        cmbWczytajKraj->setObjectName("cmbWczytajKraj");
        cmbWczytajKraj->setGeometry(QRect(9, 10, 235, 22));
        cmbWczytajMiasta = new QComboBox(scrollAreaWidgetContents_3);
        cmbWczytajMiasta->setObjectName("cmbWczytajMiasta");
        cmbWczytajMiasta->setGeometry(QRect(10, 30, 235, 22));
        lineEditWczytajUlica = new QLineEdit(scrollAreaWidgetContents_3);
        lineEditWczytajUlica->setObjectName("lineEditWczytajUlica");
        lineEditWczytajUlica->setGeometry(QRect(10, 50, 235, 20));
        lineEditWczytajTelefon = new QLineEdit(scrollAreaWidgetContents_3);
        lineEditWczytajTelefon->setObjectName("lineEditWczytajTelefon");
        lineEditWczytajTelefon->setGeometry(QRect(10, 70, 235, 20));
        lineEditWczytajTelefonDod = new QLineEdit(scrollAreaWidgetContents_3);
        lineEditWczytajTelefonDod->setObjectName("lineEditWczytajTelefonDod");
        lineEditWczytajTelefonDod->setGeometry(QRect(10, 90, 235, 20));
        lineEditWczytajEmail = new QLineEdit(scrollAreaWidgetContents_3);
        lineEditWczytajEmail->setObjectName("lineEditWczytajEmail");
        lineEditWczytajEmail->setGeometry(QRect(10, 110, 235, 20));
        lineEditWczytajUrl = new QLineEdit(scrollAreaWidgetContents_3);
        lineEditWczytajUrl->setObjectName("lineEditWczytajUrl");
        lineEditWczytajUrl->setGeometry(QRect(10, 130, 235, 20));
        frmDaneAdres2->setWidget(scrollAreaWidgetContents_3);
        frmDaneAdres4 = new QScrollArea(frmKontrahentAdd);
        frmDaneAdres4->setObjectName("frmDaneAdres4");
        frmDaneAdres4->setGeometry(QRect(530, 150, 221, 80));
        frmDaneAdres4->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName("scrollAreaWidgetContents_4");
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 219, 78));
        cmbWczytajWojewodztwa = new QComboBox(scrollAreaWidgetContents_4);
        cmbWczytajWojewodztwa->setObjectName("cmbWczytajWojewodztwa");
        cmbWczytajWojewodztwa->setGeometry(QRect(0, 10, 200, 22));
        lineEditWczytajKodPocztowy = new QLineEdit(scrollAreaWidgetContents_4);
        lineEditWczytajKodPocztowy->setObjectName("lineEditWczytajKodPocztowy");
        lineEditWczytajKodPocztowy->setGeometry(QRect(0, 30, 200, 20));
        lineEditWczytajNrDomu = new QLineEdit(scrollAreaWidgetContents_4);
        lineEditWczytajNrDomu->setObjectName("lineEditWczytajNrDomu");
        lineEditWczytajNrDomu->setGeometry(QRect(0, 50, 200, 20));
        frmDaneAdres4->setWidget(scrollAreaWidgetContents_4);
        frmDane2 = new QScrollArea(frmKontrahentAdd);
        frmDane2->setObjectName("frmDane2");
        frmDane2->setGeometry(QRect(120, 10, 431, 91));
        frmDane2->setWidgetResizable(true);
        scrollAreaWidgetContents_7 = new QWidget();
        scrollAreaWidgetContents_7->setObjectName("scrollAreaWidgetContents_7");
        scrollAreaWidgetContents_7->setGeometry(QRect(0, 0, 429, 89));
        lineEditWczytajNumer = new QLineEdit(scrollAreaWidgetContents_7);
        lineEditWczytajNumer->setObjectName("lineEditWczytajNumer");
        lineEditWczytajNumer->setGeometry(QRect(10, 0, 113, 20));
        lineEditWczytajNumer->setReadOnly(true);
        lineEditWczytajNazwa_1 = new QLineEdit(scrollAreaWidgetContents_7);
        lineEditWczytajNazwa_1->setObjectName("lineEditWczytajNazwa_1");
        lineEditWczytajNazwa_1->setGeometry(QRect(10, 20, 411, 20));
        lineEditWczytajImie = new QLineEdit(scrollAreaWidgetContents_7);
        lineEditWczytajImie->setObjectName("lineEditWczytajImie");
        lineEditWczytajImie->setGeometry(QRect(10, 40, 411, 20));
        lineEditWczytajNazwisko = new QLineEdit(scrollAreaWidgetContents_7);
        lineEditWczytajNazwisko->setObjectName("lineEditWczytajNazwisko");
        lineEditWczytajNazwisko->setGeometry(QRect(10, 60, 411, 20));
        frmDane2->setWidget(scrollAreaWidgetContents_7);
        pushButton = new QPushButton(frmKontrahentAdd);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(500, 360, 80, 23));
        scrollArea_5 = new QScrollArea(frmKontrahentAdd);
        scrollArea_5->setObjectName("scrollArea_5");
        scrollArea_5->setGeometry(QRect(489, 350, 100, 71));
        scrollArea_5->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName("scrollAreaWidgetContents_5");
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 98, 69));
        btnZapiszKontrahenta = new QPushButton(scrollAreaWidgetContents_5);
        btnZapiszKontrahenta->setObjectName("btnZapiszKontrahenta");
        btnZapiszKontrahenta->setGeometry(QRect(10, 10, 80, 23));
        btnExit_2 = new QPushButton(scrollAreaWidgetContents_5);
        btnExit_2->setObjectName("btnExit_2");
        btnExit_2->setGeometry(QRect(10, 40, 80, 23));
        scrollArea_5->setWidget(scrollAreaWidgetContents_5);
        frmDane1 = new QScrollArea(frmKontrahentAdd);
        frmDane1->setObjectName("frmDane1");
        frmDane1->setGeometry(QRect(10, 10, 111, 91));
        frmDane1->setWidgetResizable(true);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName("scrollAreaWidgetContents_6");
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 109, 89));
        lblImie = new QLabel(scrollAreaWidgetContents_6);
        lblImie->setObjectName("lblImie");
        lblImie->setGeometry(QRect(10, 40, 47, 13));
        lblNazwisko = new QLabel(scrollAreaWidgetContents_6);
        lblNazwisko->setObjectName("lblNazwisko");
        lblNazwisko->setGeometry(QRect(10, 60, 47, 13));
        lblNazwa = new QLabel(scrollAreaWidgetContents_6);
        lblNazwa->setObjectName("lblNazwa");
        lblNazwa->setGeometry(QRect(10, 20, 47, 13));
        lblNumer = new QLabel(scrollAreaWidgetContents_6);
        lblNumer->setObjectName("lblNumer");
        lblNumer->setGeometry(QRect(10, 0, 47, 13));
        frmDane1->setWidget(scrollAreaWidgetContents_6);
        lineEditWczytajKraj = new QLineEdit(frmKontrahentAdd);
        lineEditWczytajKraj->setObjectName("lineEditWczytajKraj");
        lineEditWczytajKraj->setGeometry(QRect(150, 390, 235, 20));
        AddAnalyser->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AddAnalyser);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 961, 22));
        AddAnalyser->setMenuBar(menubar);
        statusbar = new QStatusBar(AddAnalyser);
        statusbar->setObjectName("statusbar");
        AddAnalyser->setStatusBar(statusbar);

        retranslateUi(AddAnalyser);

        QMetaObject::connectSlotsByName(AddAnalyser);
    } // setupUi

    void retranslateUi(QMainWindow *AddAnalyser)
    {
        AddAnalyser->setWindowTitle(QCoreApplication::translate("AddAnalyser", "MainWindow", nullptr));
        btnZapiszSN->setText(QCoreApplication::translate("AddAnalyser", "btnZapiszSN", nullptr));
        lineModel->setText(QString());
        btnZapiszModel->setText(QCoreApplication::translate("AddAnalyser", "btnZapiszModel", nullptr));
        lblModel->setText(QCoreApplication::translate("AddAnalyser", "lblModel", nullptr));
        lblNumerSeryjny->setText(QCoreApplication::translate("AddAnalyser", "lblNumerSeryjny", nullptr));
        lblProducent->setText(QCoreApplication::translate("AddAnalyser", "lblProducent", nullptr));
        btnZapiszProducent->setText(QCoreApplication::translate("AddAnalyser", "btnZapiszProducent", nullptr));
        lblCaloscSNInfo->setText(QCoreApplication::translate("AddAnalyser", "TextLabel", nullptr));
        lblAnalizator->setText(QCoreApplication::translate("AddAnalyser", "lblAnalizator", nullptr));
        lblCaloscProducent->setText(QCoreApplication::translate("AddAnalyser", "lblCaloscProducent", nullptr));
        lblCaloscProducentInfo->setText(QCoreApplication::translate("AddAnalyser", "TextLabel", nullptr));
        btnZapiszCalosc->setText(QCoreApplication::translate("AddAnalyser", "btnZapiszCalosc", nullptr));
        lblCaloscModelInfo->setText(QCoreApplication::translate("AddAnalyser", "TextLabel", nullptr));
        lblCaloscModel->setText(QCoreApplication::translate("AddAnalyser", "lblCaloscModel", nullptr));
        lblcaloscNumerSeryjny->setText(QCoreApplication::translate("AddAnalyser", "lblcaloscNumerSeryjny", nullptr));
        btnExit->setText(QCoreApplication::translate("AddAnalyser", "btnExit", nullptr));
        btnZapiszKontrahent->setText(QCoreApplication::translate("AddAnalyser", "btnZapiszKontrahent", nullptr));
        lblDaneAdresowe->setText(QCoreApplication::translate("AddAnalyser", "lblDaneAdresowe", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AddAnalyser", "Wyjdz", nullptr));
        lblUrl->setText(QCoreApplication::translate("AddAnalyser", "lblUrl", nullptr));
        lblEmail->setText(QCoreApplication::translate("AddAnalyser", "lblEmail", nullptr));
        lblTelDod->setText(QCoreApplication::translate("AddAnalyser", "lblTelDod", nullptr));
        lblTel->setText(QCoreApplication::translate("AddAnalyser", "lblTel", nullptr));
        lblUlica->setText(QCoreApplication::translate("AddAnalyser", "lblUlica", nullptr));
        lblMiasto->setText(QCoreApplication::translate("AddAnalyser", "lblMiasto", nullptr));
        lblKraj->setText(QCoreApplication::translate("AddAnalyser", "lblKraj", nullptr));
        label_16->setText(QCoreApplication::translate("AddAnalyser", "Pomoccnicza ilosc kontrahent\303\263w", nullptr));
        lblNrMieszkania->setText(QCoreApplication::translate("AddAnalyser", "lblNrMieszkania", nullptr));
        lblWojewodztwo->setText(QCoreApplication::translate("AddAnalyser", "lblWojewodztwo", nullptr));
        lblKodPocztowy->setText(QCoreApplication::translate("AddAnalyser", "lblKodPocztowy", nullptr));
        pushButton->setText(QCoreApplication::translate("AddAnalyser", "Zapisz", nullptr));
        btnZapiszKontrahenta->setText(QCoreApplication::translate("AddAnalyser", "btnZapiszKontrahenta", nullptr));
        btnExit_2->setText(QCoreApplication::translate("AddAnalyser", "btnExit_2", nullptr));
        lblImie->setText(QCoreApplication::translate("AddAnalyser", "lblImie", nullptr));
        lblNazwisko->setText(QCoreApplication::translate("AddAnalyser", "lblNazwisko", nullptr));
        lblNazwa->setText(QCoreApplication::translate("AddAnalyser", "lblNazwa", nullptr));
        lblNumer->setText(QCoreApplication::translate("AddAnalyser", "lblNumer:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddAnalyser: public Ui_AddAnalyser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDANALYSER_H
