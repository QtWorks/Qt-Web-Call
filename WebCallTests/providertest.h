#ifndef PROVIDERTEST_H
#define PROVIDERTEST_H

#include <QString>
#include <QObject>

class ProviderTest : public QObject
{
	Q_OBJECT

public:
	ProviderTest(QObject *parent);

private slots:
	void initTestCase();
	void cleanupTestCase();
	void connectTest_data();
	void connectTest();
};

#endif // PROVIDERTEST_H
