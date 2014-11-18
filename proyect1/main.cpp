#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << "Proyecto 1";

    qDebug () << "Cambio 1";
    // Hay que hacer cambios

    // Otro cambio

    return a.exec();
}
