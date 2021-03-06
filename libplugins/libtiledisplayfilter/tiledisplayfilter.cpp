#include "tiledisplayfilter.h"

#include "model/modellocator.h"
#include <QPen>

TileDisplayFilter::TileDisplayFilter(QObject *parent) :
    QObject(parent)
{
    setName("Tile Disply Filter");
}



bool TileDisplayFilter::drawTile(FilterContext *pcContext, QPainter *pcPainter, ComFrame *pcFrame, double dScale, QRect *pcScaledArea)
{

    QPen iPen;
    iPen.setStyle(Qt::SolidLine);
    iPen.setWidth(3);
    iPen.setBrush(QColor(0,255,255));
    pcPainter ->setBrush(Qt::NoBrush);
    pcPainter ->setPen(iPen);
    pcPainter ->drawRect(*pcScaledArea);

    return true;


}
