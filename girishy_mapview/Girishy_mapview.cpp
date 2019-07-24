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

#include "Girishy_mapview.h"

#include "Basemap.h"
#include "Map.h"
#include "MapGraphicsView.h"

#include <ArcGISTiledLayer.h>
#include <TileCache.h>

using namespace Esri::ArcGISRuntime;

Girishy_mapview::Girishy_mapview(QWidget* parent /*=nullptr*/):
    QMainWindow(parent)
{


    TileCache* tileCache = new TileCache("E:/testpath/name_of_file.tpk", this);
    ArcGISTiledLayer* tiledLayer = new ArcGISTiledLayer(tileCache, this);

    Basemap* basemap = new Basemap(tiledLayer,this);
    // Create the Widget view
    m_mapView = new MapGraphicsView(this);

    // Create a map using the topographic Basemap
    m_map = new Map(basemap);

    // Set map to map view
    m_mapView->setMap(m_map);

    // set the mapView as the central widget
    setCentralWidget(m_mapView);
}

// destructor
Girishy_mapview::~Girishy_mapview()
{

}
