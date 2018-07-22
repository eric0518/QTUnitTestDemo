#include "cdirectortest.h"
#include "csingertest.h"

int main(int argc, char *argv[])
{
    CSingerTest signTest;
    QTest::qExec(&signTest, argc, argv);

    CDirectorTest directorTest;
    QTest::qExec(&directorTest, argc, argv);

    return 0;
}
