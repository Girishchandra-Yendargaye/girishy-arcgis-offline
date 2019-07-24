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

#include "Girishy_3D.h"

#include "Basemap.h"
#include "ArcGISTiledElevationSource.h"
#include "Scene.h"
#include "SceneGraphicsView.h"

#include <QUrl>

using namespace Esri::ArcGISRuntime;

Girishy_3D::Girishy_3D(QWidget* parent /*=nullptr*/):
    QMainWindow(parent)
{


    // Create a scene using the topographic Basemap
    Scene* scene = new Scene(this);


    // Create a scene view, and pass in the scene
    m_sceneView = new SceneGraphicsView(scene, this);

    // set the sceneView as the central widget
    setCentralWidget(m_sceneView);
}

// destructor
Girishy_3D::~Girishy_3D()
{

}
