#include "colorfulcircle.h"
#include <QPixmap>
#include <QPainter>
#include <QPaintEvent>
#include <QDate>

ColorFulCircle::ColorFulCircle(QWidget *parent) {
    setParent(parent);

    mGreenCircle = QPixmap(":/painter/green.jpg");
    mYellowCircle = QPixmap(":/painter/yellow.jpg");
    mRedCircle = QPixmap(":/painter/red.jpg");
    mCurrentCircle = mGreenCircle;
}

QSize ColorFulCircle::minimumSizeHint() const{
    return QSize(200, 200);
}

void ColorFulCircle::paintEvent(QPaintEvent *e) {
    QPainter p(this);
    p.drawPixmap(e->rect(), mCurrentCircle);
}

void ColorFulCircle::ColorGreen() {
    mCurrentCircle = mGreenCircle;
    update();
}

void ColorFulCircle::ColorYellow() {
    mCurrentCircle = mYellowCircle;
    update();
}

void ColorFulCircle::ColorRed() {
    mCurrentCircle = mRedCircle;
    update();
}

void ColorFulCircle::setColor(int n) {
    if (n <= 33) {
        ColorGreen();
    }
    else if(n > 33 && n <= 66) {
        ColorYellow();
    }
    else {
        ColorRed();
    }
}
