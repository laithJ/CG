


#pragma once

#include <QWidget>

class RenderWidget : public QWidget
{
    Q_OBJECT

  public:
    RenderWidget(QWidget *parent = 0);

    QSize minimumSizeHint() const override;
    QSize sizeHint() const override;

	  void myDrawLine(float x1, float y1, float x2, float y2);
      void myC(float x1, float y1, float x2, float y2);
     void myarcc(float x1, float y1, float x2, float y2);

  protected:
    void paintEvent(QPaintEvent *event) override;

};
