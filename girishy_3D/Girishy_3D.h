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

#ifndef GIRISHY_3D_H
#define GIRISHY_3D_H

namespace Esri
{
namespace ArcGISRuntime
{
class SceneGraphicsView;
}
}

#include <QMainWindow>

class Girishy_3D : public QMainWindow
{
    Q_OBJECT
public:
    Girishy_3D(QWidget* parent = nullptr);
    ~Girishy_3D();

public slots:

private:
    Esri::ArcGISRuntime::SceneGraphicsView*     m_sceneView = nullptr;
};

#endif // GIRISHY_3D_H
