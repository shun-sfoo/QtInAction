cmake_minimum_required(VERSION 3.16)
# >= 3.16 Qt5/6 完整支持所有自动化功能

project(QtInAction)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# set(QT5_DIR /opt/lib/cmake/Qt5)
# 查找 Qt 库（必须在使用自动化功能前调用）
find_package(Qt5 REQUIRED COMPONENTS Core Widgets REQUIRED)

set(CMAKE_AUTOMOC ON)   # 自动生成 Qt 元对象代码（moc）
set(CMAKE_AUTORCC ON)   # 自动编译 Qt 资源文件（.qrc）
set(CMAKE_AUTOUIC ON)   # 自动处理 Qt 界面文件（.ui）

add_subdirectory(ChineseMultiplicationTable)
add_subdirectory(Calculator)
add_subdirectory(NoteBook)
