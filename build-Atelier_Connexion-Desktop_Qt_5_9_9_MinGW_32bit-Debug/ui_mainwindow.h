/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_2;
    QLineEdit *le_type1;
    QLineEdit *le_nom;
    QLabel *label;
    QPushButton *pb_ajouter;
    QLineEdit *le_id;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *le_cin;
    QTableView *tab_plainte_2;
    QLineEdit *le_id_supp;
    QPushButton *pb_supprimer;
    QLabel *label_3;
    QLabel *label_11;
    QLabel *label_12;
    QPushButton *pb_modifier;
    QPushButton *pushButton;
    QLineEdit *le_recherche;
    QPushButton *recherche;
    QComboBox *rechercher;
    QComboBox *trie;
    QLabel *label_16;
    QWidget *tab_4;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *le_idm;
    QLineEdit *le_status;
    QLineEdit *le_type;
    QLineEdit *le_prix;
    QPushButton *pb_ajouter2;
    QTableView *tab_amende_2;
    QLineEdit *le_idm_supp;
    QPushButton *pb_supprimer_1;
    QLabel *label_10;
    QLabel *label_13;
    QLabel *label_14;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *recherche1;
    QLineEdit *le_recherche1;
    QComboBox *trie_2;
    QComboBox *rechercher_2;
    QLabel *label_15;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(969, 523);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 30, 921, 491));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 100, 47, 13));
        le_type1 = new QLineEdit(tab);
        le_type1->setObjectName(QStringLiteral("le_type1"));
        le_type1->setGeometry(QRect(160, 100, 113, 20));
        le_nom = new QLineEdit(tab);
        le_nom->setObjectName(QStringLiteral("le_nom"));
        le_nom->setGeometry(QRect(160, 60, 113, 20));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 60, 81, 16));
        pb_ajouter = new QPushButton(tab);
        pb_ajouter->setObjectName(QStringLiteral("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(220, 200, 75, 23));
        le_id = new QLineEdit(tab);
        le_id->setObjectName(QStringLiteral("le_id"));
        le_id->setGeometry(QRect(160, 30, 113, 20));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 30, 47, 13));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 150, 47, 13));
        le_cin = new QLineEdit(tab);
        le_cin->setObjectName(QStringLiteral("le_cin"));
        le_cin->setGeometry(QRect(160, 140, 113, 20));
        tab_plainte_2 = new QTableView(tab);
        tab_plainte_2->setObjectName(QStringLiteral("tab_plainte_2"));
        tab_plainte_2->setGeometry(QRect(350, 140, 451, 261));
        le_id_supp = new QLineEdit(tab);
        le_id_supp->setObjectName(QStringLiteral("le_id_supp"));
        le_id_supp->setGeometry(QRect(80, 290, 113, 20));
        pb_supprimer = new QPushButton(tab);
        pb_supprimer->setObjectName(QStringLiteral("pb_supprimer"));
        pb_supprimer->setGeometry(QRect(220, 290, 75, 23));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 290, 47, 13));
        label_11 = new QLabel(tab);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(120, 250, 141, 16));
        label_12 = new QLabel(tab);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(420, 40, 101, 16));
        pb_modifier = new QPushButton(tab);
        pb_modifier->setObjectName(QStringLiteral("pb_modifier"));
        pb_modifier->setGeometry(QRect(110, 200, 80, 22));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 200, 80, 22));
        le_recherche = new QLineEdit(tab);
        le_recherche->setObjectName(QStringLiteral("le_recherche"));
        le_recherche->setGeometry(QRect(460, 110, 161, 21));
        recherche = new QPushButton(tab);
        recherche->setObjectName(QStringLiteral("recherche"));
        recherche->setGeometry(QRect(670, 110, 80, 22));
        rechercher = new QComboBox(tab);
        rechercher->setObjectName(QStringLiteral("rechercher"));
        rechercher->setGeometry(QRect(360, 110, 73, 22));
        trie = new QComboBox(tab);
        trie->setObjectName(QStringLiteral("trie"));
        trie->setGeometry(QRect(680, 80, 73, 22));
        label_16 = new QLabel(tab);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(770, 80, 47, 14));
        tabWidget->addTab(tab, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        label_6 = new QLabel(tab_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 40, 47, 14));
        label_7 = new QLabel(tab_4);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(40, 80, 47, 14));
        label_8 = new QLabel(tab_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(40, 120, 47, 14));
        label_9 = new QLabel(tab_4);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(40, 160, 47, 14));
        le_idm = new QLineEdit(tab_4);
        le_idm->setObjectName(QStringLiteral("le_idm"));
        le_idm->setGeometry(QRect(140, 40, 113, 21));
        le_status = new QLineEdit(tab_4);
        le_status->setObjectName(QStringLiteral("le_status"));
        le_status->setGeometry(QRect(140, 80, 113, 21));
        le_type = new QLineEdit(tab_4);
        le_type->setObjectName(QStringLiteral("le_type"));
        le_type->setGeometry(QRect(140, 120, 113, 21));
        le_prix = new QLineEdit(tab_4);
        le_prix->setObjectName(QStringLiteral("le_prix"));
        le_prix->setGeometry(QRect(140, 160, 113, 21));
        pb_ajouter2 = new QPushButton(tab_4);
        pb_ajouter2->setObjectName(QStringLiteral("pb_ajouter2"));
        pb_ajouter2->setGeometry(QRect(220, 200, 81, 22));
        tab_amende_2 = new QTableView(tab_4);
        tab_amende_2->setObjectName(QStringLiteral("tab_amende_2"));
        tab_amende_2->setGeometry(QRect(480, 100, 431, 192));
        le_idm_supp = new QLineEdit(tab_4);
        le_idm_supp->setObjectName(QStringLiteral("le_idm_supp"));
        le_idm_supp->setGeometry(QRect(80, 290, 113, 21));
        pb_supprimer_1 = new QPushButton(tab_4);
        pb_supprimer_1->setObjectName(QStringLiteral("pb_supprimer_1"));
        pb_supprimer_1->setGeometry(QRect(220, 290, 80, 22));
        label_10 = new QLabel(tab_4);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(30, 290, 47, 14));
        label_13 = new QLabel(tab_4);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(150, 260, 111, 16));
        label_14 = new QLabel(tab_4);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(490, 30, 201, 16));
        pushButton_2 = new QPushButton(tab_4);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(120, 200, 80, 22));
        pushButton_3 = new QPushButton(tab_4);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 200, 80, 22));
        recherche1 = new QPushButton(tab_4);
        recherche1->setObjectName(QStringLiteral("recherche1"));
        recherche1->setGeometry(QRect(720, 70, 80, 22));
        le_recherche1 = new QLineEdit(tab_4);
        le_recherche1->setObjectName(QStringLiteral("le_recherche1"));
        le_recherche1->setGeometry(QRect(570, 70, 141, 21));
        trie_2 = new QComboBox(tab_4);
        trie_2->setObjectName(QStringLiteral("trie_2"));
        trie_2->setGeometry(QRect(730, 40, 73, 22));
        rechercher_2 = new QComboBox(tab_4);
        rechercher_2->setObjectName(QStringLiteral("rechercher_2"));
        rechercher_2->setGeometry(QRect(490, 70, 73, 22));
        label_15 = new QLabel(tab_4);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(820, 40, 47, 14));
        tabWidget->addTab(tab_4, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 969, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Gestion des Clients", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "type", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Nom accuse", Q_NULLPTR));
        pb_ajouter->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        le_id->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "id", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "cin", Q_NULLPTR));
        pb_supprimer->setText(QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "id", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "supprimer plainte", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "afficher plainte", Q_NULLPTR));
        pb_modifier->setText(QApplication::translate("MainWindow", "recuperer", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "modifier", Q_NULLPTR));
        recherche->setText(QApplication::translate("MainWindow", "recherche", Q_NULLPTR));
        rechercher->clear();
        rechercher->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "id", Q_NULLPTR)
         << QApplication::translate("MainWindow", "nom", Q_NULLPTR)
         << QApplication::translate("MainWindow", "type", Q_NULLPTR)
         << QApplication::translate("MainWindow", "cin", Q_NULLPTR)
        );
        trie->clear();
        trie->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "id", Q_NULLPTR)
         << QApplication::translate("MainWindow", "nom", Q_NULLPTR)
         << QApplication::translate("MainWindow", "type", Q_NULLPTR)
         << QApplication::translate("MainWindow", "cin", Q_NULLPTR)
        );
        label_16->setText(QApplication::translate("MainWindow", "sort by", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Nouvel plainte", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "id", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "status", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "type", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "prix", Q_NULLPTR));
        pb_ajouter2->setText(QApplication::translate("MainWindow", "ajouter", Q_NULLPTR));
        pb_supprimer_1->setText(QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "id", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "supprimer amende", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "afficher amende", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "recuperer", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "modifier", Q_NULLPTR));
        recherche1->setText(QApplication::translate("MainWindow", "recherche", Q_NULLPTR));
        trie_2->clear();
        trie_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "idm", Q_NULLPTR)
         << QApplication::translate("MainWindow", "status", Q_NULLPTR)
         << QApplication::translate("MainWindow", "type", Q_NULLPTR)
         << QApplication::translate("MainWindow", "prix_am", Q_NULLPTR)
        );
        rechercher_2->clear();
        rechercher_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "idm", Q_NULLPTR)
         << QApplication::translate("MainWindow", "status", Q_NULLPTR)
         << QApplication::translate("MainWindow", "type", Q_NULLPTR)
         << QApplication::translate("MainWindow", "prix_am", Q_NULLPTR)
        );
        label_15->setText(QApplication::translate("MainWindow", "sort by", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "nouveau amende", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
