#include "MainWindow.h"
#include <QDebug>
#include <QMenuBar>
#include <QSettings>
#include <QTextEdit>
#include <qmainwindow.h>
#include <qmenu.h>
#include <qmenubar.h>
#include <qobjectdefs.h>
#include <qsettings.h>
#include <qwidget.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    auto menuBar = new QMenuBar;
    setMenuBar(menuBar);

    QMenu *menu = menuBar->addMenu("文件");
    QAction *action = menu->addAction("打开");
    action->setObjectName("open");
    action = menu->addAction("保存");
    action->setObjectName("save");

    menu = menuBar->addMenu("编辑");
    action = menu->addAction("自动换行");
    action->setObjectName("autoNewLine");
    action->setCheckable(true);

    m_edit = new QTextEdit;
    setCentralWidget(m_edit);

    QMetaObject::connectSlotsByName(this);
    QSettings settings("neo", "notepad");
    bool enableAutoNewLine = settings.value("enableAutoNewLine", true).toBool();
    action->setChecked(enableAutoNewLine);
    on_autoNewLine_triggered(enableAutoNewLine);
}

void MainWindow::on_open_triggered()
{
    qDebug() << "on_open_triggered";
}

void MainWindow::on_save_triggered()
{
    qDebug() << "on_save_triggered";
}

void MainWindow::on_autoNewLine_triggered(bool checked)
{
    if (checked) {
        m_edit->setLineWrapMode(QTextEdit::WidgetWidth);
    } else {
        m_edit->setLineWrapMode(QTextEdit::NoWrap);
    }
    QSettings settings("neo", "notepad");
    settings.setValue("enableAutoNewLine", checked);
}
