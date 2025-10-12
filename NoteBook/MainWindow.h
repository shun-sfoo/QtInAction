#pragma once
#include <QMainWindow>
#include <qmainwindow.h>
#include <qobjectdefs.h>
#include <qtextedit.h>
#include <qwidget.h>

class MainWindow : public QMainWindow
{
    Q_OBJECT
private: QTextEdit *m_edit; public:
    explicit MainWindow(QWidget *parent = nullptr);

private Q_SLOTS:
    void on_open_triggered();
    void on_save_triggered();
    void on_autoNewLine_triggered(bool checked);
};
