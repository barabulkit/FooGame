# Building
Build SDL2 (can require superuser priveleges to install lib)
```
cd SDL2
mkdir build && cd build
cmake ..
cmake --build . --target install
```
Build SDL2_image (also superuser can be required)
```
cd SDL2_image
mkdir build && cd build
cmake ..
cmake --build . --target install
```
Build project
```
mkdir build && cd build
cmake ..
cmake --build .
```
# Windows Troubleshooting (if necessary)
use 
```make install```
instead of
```cmake --build . --target install```
then add folders SDL2 and SDL2_image in your path variable