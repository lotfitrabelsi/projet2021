#ifndef PLAINTE_H
#define PLAINTE_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class Plainte
{
public:
    Plainte();
    Plainte(int,QString,QString,int);
    int getid_pl();
    QString gettype();
    QString getnom_accuse();
    int getcin();
    void setid_pl(int);
    void settype(QString);
    void setnom_accuse(QString);
    void setcin(int);
    bool ajouter();
    bool modifier(int id_pl,QString nom_accuse, QString type,int cin );
    QSqlQueryModel * rechercher(int id_pl);
        QSqlQueryModel * afficher();
        QSqlQueryModel *Trier(QString );
        bool supprimer(int);
private:
    int id_pl, cin ;
    QString nom_accuse,type;
};

#endif // PLAINTE_H
