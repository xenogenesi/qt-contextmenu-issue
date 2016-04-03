#include "mywidget.h"

#include <QMenu>
#include <QCursor>
#include <QDebug>

#ifdef QT_NO_DEBUG_OUTPUT
#undef QT_NO_DEBUG_OUTPUT
#endif

#include <stdio.h>

void MyWidget::contextMenuEvent(QContextMenuEvent *event)
{
  Q_UNUSED(event);
  // event->scenePos() is available
  QMenu menu(this);
  menu.addAction("test 1");
  menu.addAction("test 2");

  menu.exec(QCursor::pos()/*event->pos()*/);
}

bool MyWidget::event(QEvent *e)
{
  switch(e->type()) {
  case QEvent::Enter:
	qDebug() << "************************** Enter";
	fprintf(stderr, "enter\n");
    break;
  case QEvent::Leave:
    qDebug() << "************************** Leave";
	fprintf(stderr, "leave\n");
    break;
	
  case QEvent::TabletPress:
    qDebug() << "************************** TabletPress";
    break;
  case QEvent::TabletMove:
    qDebug() << "************************** TabletMove";
    break;
  case QEvent::TabletRelease:
    qDebug() << "************************** TabletRelease";
    break;

  case QEvent::MouseButtonPress:
    qDebug() << "**************************MouseButtonPress"; // << m_pressure << " " << m_tabletEvent;
	fprintf(stderr, "mouse button press\n");
    break;
	// case QEvent::MouseMove:
  //   qDebug() << "**************************MouseMove" <<  m_pressure;
  //   break;
  case QEvent::MouseButtonRelease:
    qDebug() << "**************************MouseButtonRelease";
	fprintf(stderr, "mouse button release\n");	
    break;
	
  case QEvent::MouseButtonDblClick:
    qDebug() << "============================== MouseButtonDblClick";
    break;
  default:
	break;
  }

	return QWidget::event(e);
}

