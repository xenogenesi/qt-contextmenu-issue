#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QContextMenuEvent>
#include <QObject>
#include <QWidget>

class MyWidget : public QWidget
{
    Q_OBJECT

public:
  MyWidget(QWidget *parent = 0)  : QWidget(parent) {};
  void contextMenuEvent(QContextMenuEvent *event);
  bool event(QEvent *e);
};


#endif
