#include <QString>
#include <QtTest>
#include <QCoreApplication>

class CSingerTest : public QObject
{
    Q_OBJECT

public:
    CSingerTest();

private Q_SLOTS:
    void initTestCase();
    void cleanupTestCase();
    void testCase1_data();
    void testCase1();
};

CSingerTest::CSingerTest()
{
}

void CSingerTest::initTestCase()
{
}

void CSingerTest::cleanupTestCase()
{
}

void CSingerTest::testCase1_data()
{
    QTest::addColumn<QString>("data");
    QTest::newRow("0") << QString();
}

void CSingerTest::testCase1()
{
    QFETCH(QString, data);
    QVERIFY2(true, "Failure");
}

QTEST_MAIN(CSingerTest)

#include "csingertest.moc"
