@echo off

set BUILD_TYPE=Ninja
set BUILD_SUFFIX=Ninja

chcp 65001

set BUILD_FOLDER=build %BUILD_SUFFIX%
set SOURCE_FOLDER=projects

if not exist %BUILD_FOLDER% mkdir %BUILD_FOLDER%

cd %BUILD_FOLDER%

cmake -G %BUILD_TYPE% ..\%SOURCE_FOLDER%
cmake --build .

copy ..\%SOURCE_FOLDER%\obuchaika\run_obuchaika.bat ./obuchaika
copy ..\%SOURCE_FOLDER%\shaker_sort\run_shaker_sort.bat ./shaker_sort

copy ..\run_tests.bat .