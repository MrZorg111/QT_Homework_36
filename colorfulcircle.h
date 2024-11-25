#ifndef COLORFULCIRCLE_H
#define COLORFULCIRCLE_H
#include <QPixmap>
#include <QPaintEvent>
#include <QPainter>
#include <QWidget>


class ColorFulCircle : public QWidget{
private:
    void paintEvent(QPaintEvent *e) override;

    QPixmap mCurrentCircle;
    QPixmap mGreenCircle;
    QPixmap mYellowCircle;
    QPixmap mRedCircle;

public:
    ColorFulCircle() = default;
    ColorFulCircle(QWidget *parent);
    QSize minimumSizeHint() const override;

    void ColorGreen();
    void ColorYellow();
    void ColorRed();

    void setColor(int n);
};

#endif // COLORFULCIRCLE_H
