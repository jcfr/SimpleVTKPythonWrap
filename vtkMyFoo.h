#ifndef __vtkMyFoo_h
#define __vtkMyFoo_h

// VTK includes
#include <vtkObject.h>

//-----------------------------------------------------------------------------
class vtkMyFoo : public vtkObject
{
public:
  static vtkMyFoo *New();
  vtkTypeRevisionMacro(vtkMyFoo,vtkObject);
  void PrintSelf(ostream& os, vtkIndent indent);

  void Hello()const;

protected:

  vtkMyFoo();
  virtual ~vtkMyFoo();
  vtkMyFoo(const vtkMyFoo&);
  void operator=(const vtkMyFoo&);

};

#endif

