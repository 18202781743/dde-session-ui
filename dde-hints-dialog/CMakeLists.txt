# SPDX-FileCopyrightText: 2023 UnionTech Software Technology Co., Ltd.
#
# SPDX-License-Identifier: GPL-3.0-or-later

file(GLOB_RECURSE Hints_Dialog_SRCS
    "src/*.h"
    "src/*.cpp"
)

list(REMOVE_ITEM Hints_Dialog_SRCS "${CMAKE_SOURCE_DIR}/dde-hints-dialog/src/main.cpp")

set(Hints_Dialog_Includes
    Dtk${DTK_VERSION_MAJOR}::Widget
    Qt${QT_VERSION_MAJOR}::Widgets
)

set(Hints_Dialog_Libraries
    Dtk${DTK_VERSION_MAJOR}::Widget
    Qt${QT_VERSION_MAJOR}::Widgets
)

add_subdirectory("src")
#add_subdirectory("tests")
