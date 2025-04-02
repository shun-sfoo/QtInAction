#include <QApplication>
#include <QDebug>
#include <QGridLayout>
#include <QLabel>
#include <QMainWindow>

class Label : public QLabel
{
public:
    explicit Label(QWidget *parent = nullptr)
        : QLabel(parent)
    {
        setAlignment(Qt::AlignCenter);
        setStyleSheet(R"(
                  QLabel {
                  margin: 20px;
                  font-size: 40px;
                  }
                  )");
    }
};

class MainWindow : public QMainWindow
{
public:
    explicit MainWindow(QWidget *parent = nullptr)
        : QMainWindow(parent)
    {
        setWindowTitle("九九乘法表");
        // setGeometry(1000, 1000, 500, 400);

        QWidget *centerWidget = new QWidget;
        setCentralWidget(centerWidget);
        auto *layout = new QGridLayout;
        centerWidget->setLayout(layout);
        for (int i = 1; i <= 9; ++i) {
            for (int j = 1; j <= 9; ++j) {
                auto label = new Label;
                label->setText(QString("%1 * %2 = %3").arg(i).arg(j).arg(i * j));
                layout->addWidget(label, i - 1, j - 1);
            }
        }
    }
};

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    MainWindow win;
    win.show();

    return app.exec();
}
