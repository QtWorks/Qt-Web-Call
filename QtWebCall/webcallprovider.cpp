#include "webcallprovider.h"

WebCallProvider::WebCallProvider(IDispatcher *dispatcher, QObject *parent) :
	QObject(parent)
{

}

WebCallProvider::WebCallProvider(QWebSocket *webSocket, QObject *parent) :
	QObject(parent)
{

}
