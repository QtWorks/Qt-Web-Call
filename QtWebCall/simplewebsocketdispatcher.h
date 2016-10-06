#ifndef SIMPLEWEBSOCKETDISPATCHER_H
#define SIMPLEWEBSOCKETDISPATCHER_H

#include "idispatcher.h"
#include "qtwebcall_global.h"
class QWebSocket;

class QTWEBCALLSHARED_EXPORT SimpleWebSocketDispatcher : public IDispatcher
{
	Q_OBJECT

public:
	explicit SimpleWebSocketDispatcher(QWebSocket *webSocket, QObject *parent = nullptr);

public slots:
	void sendMessage(const QByteArray &data) override;
	void close() override;

private:
	QWebSocket *webSocket;
};

#endif // SIMPLEWEBSOCKETDISPATCHER_H
