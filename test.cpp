#include <QApplication>
#include <QPushButton>
#include <QVBoxLayout>

#include "mywidget.h"

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);

  QWidget* window=new MyWidget();
  // QVBoxLayout* layout=new QVBoxLayout();
  // window->setLayout(layout);
  // QPushButton* button=new QPushButton("Hello");
  // layout->addWidget(button);
  window->show();

  return app.exec();
}

