#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "plainte.h"
#include "amende.h"
#include <QApplication>
#include <QMessageBox>
#include <QIntValidator>
#include <QTabWidget>
#include <QString>
#include <QFile>
#include <QSqlQuery>
#include <QPixmap>
#include <QDebug>
#include <QInputDialog>
#include "QSqlRecord"
#include "QSqlQuery"
#include <QSqlDatabase>
#include <QSqlError>
#include<QtPrintSupport/QPrinter>
#include<QPdfWriter>
#include <QFileDialog>
#include<QTextDocument>
#include<QFile>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
     ui->le_id->setValidator(new QIntValidator(0, 99999, this));
     ui->tab_plainte_2->setModel(P.afficher());
     ui->le_idm->setValidator(new QIntValidator(0, 99999, this));
     ui->tab_amende_2->setModel(A.afficher());

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pb_ajouter_clicked()
{
    int  id_pl=ui->le_id->text().toInt();
    QString nom_accuse=ui->le_nom->text();
    QString type=ui->le_type1->text();
    int  cin=ui->le_cin->text().toInt();

    Plainte P(id_pl,nom_accuse,type,cin);

    bool test=P.ajouter();
    if(test){
        QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("ajout succesful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
          ui->tab_plainte_2->setModel(P.afficher());
    }
    else{

        QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                    QObject::tr("ajout failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
}

void MainWindow::on_pb_supprimer_clicked()
{
Plainte P1;
P1.setid_pl(ui->le_id_supp->text().toInt());
bool test=P1.supprimer(P1.getid_pl());
if(test){
    QMessageBox::information(nullptr, QObject::tr("OK"),
                QObject::tr("supprimer succesful.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);
    ui->tab_plainte_2->setModel(P.afficher());
}
else{

    QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                QObject::tr("supprimer failed.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);
}
}

void MainWindow::on_pb_ajouter2_clicked()
{
    int  id_am=ui->le_idm->text().toInt();
    QString status=ui->le_status->text();
    QString type=ui->le_type->text();
    int  prix_am=ui->le_prix->text().toInt();

    Amende A(id_am,status,type,prix_am);

    bool test=A.ajouter();
    if(test){
        QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("ajout succesful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
          ui->tab_amende_2->setModel(A.afficher());
    }
    else{

        QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                    QObject::tr("ajout failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
}

void MainWindow::on_pb_supprimer_1_clicked()
{
    Amende A1;
    A1.setid_am(ui->le_idm_supp->text().toInt());
    bool test=A1.supprimer(A1.getid_am());
    if(test){
        QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("supprimer succesful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
        ui->tab_amende_2->setModel(A.afficher());
    }
    else{

        QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                    QObject::tr("supprimer failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
}

void MainWindow::on_pb_modifier_clicked()
{
    int row=ui->tab_plainte_2->selectionModel()->currentIndex().row();
    QString id_pl=ui->tab_plainte_2->model()->index(row,0).data().toString(); //row = ligne / 0 : colonne
    QString nom_accuse=ui->tab_plainte_2->model()->index(row,1).data().toString();
    QString type=ui->tab_plainte_2->model()->index(row,2).data().toString();

    QString cin=ui->tab_plainte_2->model()->index(row,3).data().toString();

    if(row==-1)
    {
        QMessageBox ::information(nullptr,QObject::tr("modifier un plainte"),
                                          QObject::tr("aucune selection.\n"
                                              "click ok to exit"),QMessageBox::Ok);
    }
    else
    {
        ui->le_id->setText(id_pl);
        ui->le_nom->setText(nom_accuse);
        ui->le_type1->setText(type);
      ui->le_cin->setText(cin);
    }
}

void MainWindow::on_pushButton_clicked()
{
    int id_pl = ui->le_id->text().toInt();
    QString nom_accuse = ui->le_nom->text();
    QString type= ui->le_type1->text();
    int cin= ui->le_cin->text().toInt();

    Plainte P(id_pl,nom_accuse,type,cin);
    bool test =P.modifier(id_pl,nom_accuse,type,cin);

    if(test)
    {ui->tab_plainte_2->setModel(P.afficher());
        QMessageBox::information(nullptr, QObject::tr("modifier un plainte"),
                                 QObject::tr("fournisseur  modifié.\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Modifier un plainte"),
                              QObject::tr("Erreur !.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
}

void MainWindow::on_pushButton_2_clicked()
{
    int row=ui->tab_amende_2->selectionModel()->currentIndex().row();
    QString id_am=ui->tab_amende_2->model()->index(row,0).data().toString(); //row = ligne / 0 : colonne
    QString status=ui->tab_amende_2->model()->index(row,1).data().toString();
    QString type=ui->tab_amende_2->model()->index(row,2).data().toString();

    QString prix_am=ui->tab_amende_2->model()->index(row,3).data().toString();

    if(row==-1)
    {
        QMessageBox ::information(nullptr,QObject::tr("modifier amende"),
                                          QObject::tr("aucune selection.\n"
                                              "click ok to exit"),QMessageBox::Ok);
    }
    else
    {
        ui->le_idm->setText(id_am);
        ui->le_type->setText(type);
        ui->le_status->setText(status);
      ui->le_prix->setText(prix_am);
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    int id_am = ui->le_idm->text().toInt();
    QString status = ui->le_status->text();
    QString type= ui->le_type->text();
    int prix_am= ui->le_prix->text().toInt();

    Amende A(id_am,status,type,prix_am);
    bool test =A.modifier(id_am,status,type,prix_am);

    if(test)
    {ui->tab_amende_2->setModel(A.afficher());
        QMessageBox::information(nullptr, QObject::tr("modifier amende"),
                                 QObject::tr("materiel  modifié.\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Modifier amende"),
                              QObject::tr("Erreur !.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);

}



void MainWindow::on_recherche_clicked()
{
    QSqlQueryModel *modal=new QSqlQueryModel();
                    QSqlQuery request;
                   QString type=ui->rechercher->currentText();
                   QString val=ui->le_recherche->text();
                   val="%"+val+"%";
                   if (type=="id"){
                       request.prepare("SELECT * FROM PLAINTE WHERE id_pl LIKE :val ");
                   }else if (type=="nom"){
                       request.prepare("SELECT * FROM PLAINTE WHERE nom_accuse LIKE:val");
                   }else if (type=="cin"){
                       request.prepare("SELECT * FROM PLAINTE WHERE cin LIKE :val");
                   }else if (type=="type"){
                       request.prepare("SELECT * FROM PLAINTE WHERE type LIKE :val");
                   }
                   request.bindValue(":val",val);
                   request.exec();
                   modal->setQuery(request);
                   ui->tab_plainte_2->setModel(modal);

}




void MainWindow::on_trie_activated()
{
    Plainte P;
    QString choix= ui->trie->currentText();
    ui->tab_plainte_2->setModel(P.Trier(choix));
}

void MainWindow::on_trie_2_activated()
{
    Amende A;
    QString choix= ui->trie_2->currentText();
    ui->tab_amende_2->setModel(A.Trier(choix));
}

void MainWindow::on_recherche1_clicked()
{
    QSqlQueryModel *modal=new QSqlQueryModel();
                    QSqlQuery request;
                   QString type=ui->rechercher_2->currentText();
                   QString val=ui->le_recherche1->text();
                   val="%"+val+"%";
                   if (type=="idm"){
                       request.prepare("SELECT * FROM amendes WHERE id_am LIKE:val ");
                   }else if (type=="nom"){
                       request.prepare("SELECT * FROM amendes WHERE status LIKE:val");
                   }else if (type=="type"){
                       request.prepare("SELECT * FROM amendes WHERE type LIKE:val");
                   }else if (type=="prix"){
                       request.prepare("SELECT * FROM amendes WHERE prix_am LIKE:val");
                   }
                   request.bindValue(":val",val);
                   request.exec();
                   modal->setQuery(request);
                   ui->tab_amende_2->setModel(modal);

}
