//#include "mainwindow.h"

#include <QApplication>
#include <QObject>
#include <QSlider>
#include <QWidget>
#include <QVBoxLayout>
#include "colorfulcircle.h"

/**/
int main(int argc, char *argv[])
{    //MainWindow w;w.show(); я пока не разобрался можно ли это удалять из проекта, оставлю пока тут
    QApplication app(argc, argv);
    //
    QWidget *fild = new QWidget;
    fild->setFixedSize(300, 500);

    auto *circle = new ColorFulCircle(fild);
    circle->setFixedSize(300, 600);
    circle->move(0, 200);

    auto *mSlider = new QSlider(Qt::Horizontal, fild);
    mSlider->setMinimum(0);
    mSlider->setMaximum(100);
    mSlider->setFixedHeight(30);
    mSlider->setFixedWidth(300);

    auto *layoutV = new QVBoxLayout(fild);
    layoutV->addWidget(fild);

    QObject::connect(mSlider, &QSlider::valueChanged, circle, &ColorFulCircle::setColor);
    fild->show();

    return app.exec();
}
