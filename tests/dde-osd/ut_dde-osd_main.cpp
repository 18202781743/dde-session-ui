#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include <QApplication>
#include <QDebug>

#ifdef QT_DEBUG
#include <sanitizer/asan_interface.h>
#endif

#define private public

int main(int argc, char *argv[])
{
    qputenv("QT_QPA_PLATFORM", "offscreen");
    QApplication app(argc,argv);
    qDebug() << "start dde-osd test cases ..............";
    ::testing::InitGoogleMock(&argc, argv);
    ::testing::InitGoogleTest(&argc, argv);
    int ret = RUN_ALL_TESTS();
    qDebug() << "end dde-osd test cases ..............";

#ifdef QT_DEBUG
    __sanitizer_set_report_path("asan_osd.log");
#endif

    return ret;
}
