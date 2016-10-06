#include <QCoreApplication>
#include <QtTest>
#include <iostream>

#include "providertest.h"

int main(int argc, char *argv[])
{
	QCoreApplication app(argc, argv);
	QTEST_SET_MAIN_SOURCE_PATH

	QObjectList tests = {
		new ProviderTest(&app)
	};

	std::cout << qPrintable(QStringLiteral("============= Testing session with %1 Tests =============\n")
							.arg(tests.size()))
			  << std::endl;

	auto failCount = 0;
	foreach(auto test, tests) {
		auto res = QTest::qExec(test, argc, argv);
		if(res != EXIT_SUCCESS)
			failCount++;
		std::cout << std::endl;
	}

	std::cout << qPrintable(QStringLiteral("============= Testing completed: %1 Successfull, %2 Failed =============")
							.arg(tests.size() - failCount)
							.arg(failCount))
			  << std::endl;
	return EXIT_SUCCESS;
}
