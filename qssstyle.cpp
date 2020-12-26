#include "qssstyle.h"

qssstyle::qssstyle()
{

}
QString qssstyle::background_color(QString color)
{
    return QString("background-color:%1;").arg(color);
}

QString qssstyle::fontcolor(QString color)
{
    return QString("color:%1;").arg(color);
}

QString qssstyle::border_color(QString color)
{
    return QString("border-color:%1;").arg(color);
}

QString qssstyle::font_size(QString size, QString font)
{
    return QString("font:%1px \"%2\" ;").arg(size,font);
}

QString qssstyle::text_align(QString align)
{
    return QString("text-align:%1;").arg(align);
}

QString qssstyle::font_style(QString style)
{
    return QString("font-style:%1;").arg(style);
}

QString qssstyle::font_weight(QString weight)
{
    return QString("font-weight:%1;").arg(weight);
}

QString qssstyle::text_decoration(QString decoration)
{
    return QString("text-decoration:%1;").arg(decoration);
}

QString qssstyle::border_style(QString style)
{
    return QString("border-style:%1;").arg(style);
}

QString qssstyle::border_width(QString width)
{
    return QString("border-width:%1px;").arg(width);
}

QString qssstyle::border_radius(QString radius)
{
    return QString("border-radius:%1px;").arg(radius);
}
