#ifndef WEBCALLEXCEPTION_H
#define WEBCALLEXCEPTION_H

#include <exception>
#include <QString>
#include "qtwebcall_global.h"

class QTWEBCALLSHARED_EXPORT WebCallException : public std::exception
{
public:
	WebCallException(const QString &reason);

	QString qWhat() const;
	const char *what() const override;

private:
	const QByteArray reason;
};

#endif // WEBCALLEXCEPTION_H
