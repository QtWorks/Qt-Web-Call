#include "simplewebsocketdispatcher.h"
#include <QWebSocket>

SimpleWebSocketDispatcher::SimpleWebSocketDispatcher(QWebSocket *webSocket, QObject *parent) :
	IDispatcher(parent),
	webSocket(webSocket)
{
	if(this->webSocket->state() != QAbstractSocket::ConnectedState);
	this->webSocket->setParent(this);
	connect(this->webSocket, &QWebSocket::binaryMessageReceived,
			this, &SimpleWebSocketDispatcher::messageReceived);
}

void SimpleWebSocketDispatcher::sendMessage(const QByteArray &data)
{
	this->webSocket->sendBinaryMessage(data);
}

void SimpleWebSocketDispatcher::close()
{
	this->webSocket->close();
}
