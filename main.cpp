
#include "vtkMyFoo.h"

// VTK includes
#include <vtkNew.h>

// STD includes
#include <cstdlib>

int main(int argc, char* argv[])
{
  vtkNew<vtkMyFoo> foo;
  foo->Hello();
  return EXIT_SUCCESS;
}
