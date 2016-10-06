#ifndef IDISPATCHER_H
#define IDISPATCHER_H

#include <QObject>
#include "qtwebcall_global.h"

class QTWEBCALLSHARED_EXPORT IDispatcher : public QObject
{
	Q_OBJECT

public:
	virtual ~IDispatcher();

public slots:
	virtual void sendMessage(const QByteArray &data) = 0;
	virtual void close() = 0;

signals:
	void messageReceived(const QByteArray &data);

protected:
	IDispatcher(QObject *parent = nullptr);
};

#endif // IDISPATCHER_H
