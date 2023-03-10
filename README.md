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