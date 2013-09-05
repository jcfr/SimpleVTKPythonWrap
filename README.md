SimpleVTKPythonWrap
===================

Simple project illustrating how VTK python wrapping could be simplified by adopting vtkMacroKitPythonWrap.cmake



Usage
-----

```
$ cmake -DVTK_DIR:PATH=/home/jchris/Projects/Slicer-AHM-Superbuild-Release/VTK-build/ \
 -DPYTHON_INCLUDE_DIR:PATH=/home/jchris/Projects/Slicer-AHM-Superbuild-Release/python-install/include/python2.7 \
 -DPYTHON_LIBRARY:FILEPATH=/home/jchris/Projects/Slicer-AHM-Superbuild-Release/python-install/lib/libpython2.7.so \
 ../SimpleVTKPythonWrap
 
$ make
```
