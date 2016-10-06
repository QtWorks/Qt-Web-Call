#include "webcallexception.h"

WebCallException::WebCallException(const QString &reason) :
	std::exception(),
	reason(reason.toUtf8())
{}

QString WebCallException::qWhat() const
{
	return QString::fromUtf8(this->reason);
}

const char *WebCallException::what() const
{
	return this->reason.constData();
}
