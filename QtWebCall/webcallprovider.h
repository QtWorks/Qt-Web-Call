#ifndef WEBCALLPROVIDER_H
#define WEBCALLPROVIDER_H

#include <QObject>
#include "qtwebcall_global.h"
class QWebSocket;
class IDispatcher;

class QTWEBCALLSHARED_EXPORT WebCallProvider : public QObject
{
	Q_OBJECT

public:
	explicit WebCallProvider(IDispatcher *dispatcher, QObject *parent = nullptr);
	explicit WebCallProvider(QWebSocket *webSocket, QObject *parent = nullptr);

signals:

public slots:
};

#endif // WEBCALLPROVIDER_H
