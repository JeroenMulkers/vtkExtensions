#include "vtkXMLStructuredGridSeriesReader.h"

vtkStandardNewMacro(vtkXMLStructuredGridSeriesReader);

void vtkXMLStructuredGridSeriesReader::SetFiles(int nmb_, char ** fnames_){
    nmb = nmb_;
    fnames = fnames_;
    selected = 0;
    this->SetFileName(fnames[0]);
    std::cout << fnames[selected] << std::endl;
}

void vtkXMLStructuredGridSeriesReader::Next(){
    selected += 1;
    if (selected==nmb) selected=0;
    this->SetFileName(fnames[selected]);
    std::cout << fnames[selected] << std::endl;
}

void vtkXMLStructuredGridSeriesReader::Previous(){
    selected -= 1;
    if (selected==-1) selected = nmb-1;
    this->SetFileName(fnames[selected]);
    std::cout << fnames[selected] << std::endl;
}
