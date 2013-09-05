
#include "vtkMyFoo.h"

// VTK includes
#include <vtkObjectFactory.h>

//-----------------------------------------------------------------------------
vtkCxxRevisionMacro(vtkMyFoo, "$Revision: $");
vtkStandardNewMacro(vtkMyFoo);

//-----------------------------------------------------------------------------
vtkMyFoo::vtkMyFoo()
{
}

//-----------------------------------------------------------------------------
vtkMyFoo::~vtkMyFoo()
{
}

//-----------------------------------------------------------------------------
void vtkMyFoo::PrintSelf(ostream& os, vtkIndent indent)
{
  this->Superclass::PrintSelf(os, indent);
}

//-----------------------------------------------------------------------------
void vtkMyFoo::Hello()const
{
  std::cout << "Hello" << std::endl;
}

