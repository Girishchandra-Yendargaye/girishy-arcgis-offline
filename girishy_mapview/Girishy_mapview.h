// Copyright 2016 ESRI
//
// All rights reserved under the copyright laws of the United States
// and applicable international laws, treaties, and conventions.
//
// You may freely redistribute and use this sample code, with or
// without modification, provided you include the original copyright
// notice and use restrictions.
//
// See the Sample code usage restrictions document for further information.
//

#ifndef GIRISHY_MAPVIEW_H
#define GIRISHY_MAPVIEW_H

namespace Esri
{
namespace ArcGISRuntime
{
class Map;
class MapGraphicsView;
}
}

#include <QMainWindow>

class Girishy_mapview : public QMainWindow
{
    Q_OBJECT
public:
    Girishy_mapview(QWidget* parent = nullptr);
    ~Girishy_mapview();

public slots:

private:
    Esri::ArcGISRuntime::Map*                   m_map = nullptr;
    Esri::ArcGISRuntime::MapGraphicsView*       m_mapView = nullptr;
};

#endif // GIRISHY_MAPVIEW_H
