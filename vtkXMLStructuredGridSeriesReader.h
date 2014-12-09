#ifndef VTKXMLSTRUCTUREDGRIDREADER_H
#define VTKXMLSTRUCTUREDGRIDREADER_H

#include "vtkObjectFactory.h"
#include "vtkXMLStructuredGridReader.h"

class vtkXMLStructuredGridSeriesReader : public vtkXMLStructuredGridReader {

    public:
        vtkTypeMacro(vtkXMLStructuredGridSeriesReader, vtkXMLStructuredGridReader);
        static vtkXMLStructuredGridSeriesReader* New();

        void SetFiles(int nmb_, char ** fnames_);
        void Next();
        void Previous();
        void Select(int);

    private:
        char ** fnames;
        int nmb;
        int selected;
};

#endif
