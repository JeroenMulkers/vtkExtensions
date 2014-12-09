#include "vtkInteractorStyleSeries.h"
#include "vtkRenderWindowInteractor.h"

vtkStandardNewMacro(vtkInteractorStyleSeries);

void vtkInteractorStyleSeries::OnKeyPress(){
    vtkRenderWindowInteractor* rwi = this->Interactor;
    std::string key = rwi->GetKeySym();
    if(key == "Left") reader->Previous();
    if(key == "Right") reader->Next();
    vtkInteractorStyleTrackballCamera::OnKeyPress();
    rwi->Render();
}

void vtkInteractorStyleSeries::SetReader(vtkXMLStructuredGridSeriesReader* reader_){
    reader = reader_;
}

