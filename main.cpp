#include <QApplication>
#include "common.h"
#include <QDebug>

int main(int argc, char* argv[]) {
  QApplication a(argc, argv);

  Minner w;
  w.show();

  QTranslator trans;
  QString locale = QLocale::system().name();
  qDebug() << "locale:" << locale;
  qDebug() << "Cur dir:" << QDir::currentPath();
  trans.load("../minner_ru");
  a.installTranslator(&trans);

  return a.exec();
}
