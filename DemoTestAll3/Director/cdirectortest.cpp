#include <QString>
#include <QtTest>
#include <QCoreApplication>

class CDirectorTest : public QObject
{
    Q_OBJECT

public:
    CDirectorTest();

private Q_SLOTS:
    void initTestCase();
    void cleanupTestCase();
    void testCase1_data();
    void testCase1();
};

CDirectorTest::CDirectorTest()
{
}

void CDirectorTest::initTestCase()
{
}

void CDirectorTest::cleanupTestCase()
{
}

void CDirectorTest::testCase1_data()
{
    QTest::addColumn<QString>("data");
    QTest::newRow("0") << QString();
}

void CDirectorTest::testCase1()
{
    QFETCH(QString, data);
    QVERIFY2(true, "Failure");
}

QTEST_MAIN(CDirectorTest)

#include "cdirectortest.moc"
