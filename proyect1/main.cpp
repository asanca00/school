#include <QCoreApplication>
#include <qDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << "Proyecto 1";

    qDebug () << "Cambio 1";

    return a.exec();
}
