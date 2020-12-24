
#ifndef UT_CUSTOMCOMMANDSEARCHRSTPANEL_TEST_H
#define UT_CUSTOMCOMMANDSEARCHRSTPANEL_TEST_H

#include "ut_defines.h"
#include "mainwindow.h"

#include <gtest/gtest.h>

class CustomCommandSearchRstPanel;
class UT_CustomCommandSearchRstPanel_Test : public ::testing::Test
{
public:
    UT_CustomCommandSearchRstPanel_Test();

public:
    //这里的几个函数都会自动调用

    //用于做一些初始化操作
    virtual void SetUp();

    //用于做一些清理操作
    virtual void TearDown();
public:
    CustomCommandSearchRstPanel* m_cmdSearchPanel = nullptr;

    //普通窗口
    MainWindow *m_normalWindow = nullptr;
    TermProperties m_normalTermProperty;
};

#endif//UT_CUSTOMCOMMANDSEARCHRSTPANEL_TEST_H

