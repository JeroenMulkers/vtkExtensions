#ifndef VTKINTERACTORSTYLESERIES_H
#define VTKINTERACTORSTYLESERIES_H

#include "vtkObjectFactory.h"
#include "vtkInteractorStyleTrackballCamera.h"
#include "vtkXMLStructuredGridSeriesReader.h"

class vtkInteractorStyleSeries : public vtkInteractorStyleTrackballCamera {

  public:
    static vtkInteractorStyleSeries* New();
    vtkTypeMacro(vtkInteractorStyleSeries, vtkInteractorStyleTrackballCamera);
    virtual void OnKeyPress();
    void SetReader(vtkXMLStructuredGridSeriesReader* reader_);

  private:
    vtkXMLStructuredGridSeriesReader * reader;
};

#endif
