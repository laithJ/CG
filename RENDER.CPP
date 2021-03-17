
#include "RenderWidget.h"
#include <QPainter>
#include <PPUViewer.cpp>
#include <QtWidgets>

RenderWidget::RenderWidget(QWidget *parent) : QWidget(parent)
{
  // to be implemeted later
}

QSize RenderWidget::minimumSizeHint() const
{
  return QSize(100, 100);
}

QSize RenderWidget::sizeHint() const
{
  return QSize(600, 600);
}

void RenderWidget::paintEvent(QPaintEvent *)
{
  QPainter painter(this);

 //    painter.setRenderHint(QPainter::Antialiasing, false);
  QColor color(200,200, 0);
  painter.setPen(color);

  painter.drawRect(QRect(0, 0, width() - 1, height() - 1));
  
  for (int x = 100; x < 200; ++x)
  {
    painter.drawPoint(x, x);
  }

  myDrawLine(50, 70, 500, 370);





  myC(50, 70, 500, 370);

  myarcc(50, 70, 500, 370);




}





void RenderWidget::myDrawLine(float x1, float y1, float x2, float y2)
{
  QPainter painter(this);

  //    painter.setRenderHint(QPainter::Antialiasing, false);
  QColor color(200, 200,1);
  painter.setPen(color);


 
  //Algorithm DrawLineBresenham_case1(x0, y0, x1, y1)
     // Calculate the constants dx, dy, 2dy, and (2dy – 2dx);

  float y = y1;
  float dx=5;
  float dy=10;
  

  float p  ; // i.e., p0
  p = ((2*dy)- dx);
  painter.drawPoint(x1,y1); // first point

  for (int x = x1 + 1; x <= x1; ++x)
  {
      if(p < 0)
      {
          painter.drawPoint(x, y);
          p = p + 2*dy;
      }
else
{
y = y + 1;
painter.drawPoint(x, y);
p = p+ ((2*dy)-(2*dx));
}
  } // fo
 







}



void RenderWidget::myC(float x1, float y1, float x2, float y2)
{
    /*
    QPainter painter(this);

    //    painter.setRenderHint(QPainter::Antialiasing, false);
    QColor color(255, 255, 0);
    painter.setPen(color);

    float ϴ = 0;

   float π = 3.14;

   float r = 3.5;
   float x = 0;
   float y = 0;
   float Yc = 5;
   float Xc = 5;
    while (ϴ <2*π)
    {
        x = Xc + (r * cos(ϴ));
            
        y = Yc + (r * sin(ϴ));
            
        painter.drawPoint(x, y);
        ϴ = ϴ + (1/r);
    }
      
      */

    }





void RenderWidget::myarcc(float x1, float y1, float x2, float y2)
{
    QPainter painter(this);

    //    painter.setRenderHint(QPainter::Antialiasing, false);
    QColor color(255, 255, 0);
    painter.setPen(color);

    float ϴ = 0;

    double π = 3.14;

    float r = 3.5;
    float x = 0;
    float y = 0;
    float Yc = 5;
    float Xc = 5;
    float ϴ1 = 2;

    float ϴ2 = 2;
    while (ϴ1 < ϴ2)
    {
        x = Xc + (r * cos(ϴ));

        y = Yc + (r * sin(ϴ));

        painter.drawPoint(x, y);
        ϴ = ϴ + (1 / r);
    }


   





}


