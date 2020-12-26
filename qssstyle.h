#ifndef QSSSTYLE_H
#define QSSSTYLE_H
#include<QString>
class qssstyle
{
public:
    qssstyle();
    //谁需要谁调用
   static QString background_color(QString color);
   static QString fontcolor(QString color);
   static QString border_color(QString color);
   static QString font_size(QString size,QString font);
   static QString text_align(QString align);
   static QString font_style(QString style);
   static QString font_weight(QString weight);
   static QString text_decoration(QString decoration);
   static QString border_style(QString style);
   static QString border_width(QString width);
   static QString border_radius(QString radius);
};

#endif // QSSSTYLE_H
