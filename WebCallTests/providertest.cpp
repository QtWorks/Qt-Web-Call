#include "providertest.h"
#include <QtTest>
#include <QCoreApplication>

ProviderTest::ProviderTest(QObject *parent) :
	QObject(parent)
{}

void ProviderTest::initTestCase()
{
}

void ProviderTest::cleanupTestCase()
{
}

void ProviderTest::connectTest_data()
{
	QTest::addColumn<QString>("data");
	QTest::newRow("0") << QString();
}

void ProviderTest::connectTest()
{
	QFETCH(QString, data);
	QVERIFY2(true, "Failure");
}
