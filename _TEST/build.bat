cd ../build &&
./build.bat &&
cd ../_TEST &&
c++ -O2 -march=x86-64-v2 -I ../libs/windows/glfw main.cpp ../build/libgwindower.a -o TEST.exe