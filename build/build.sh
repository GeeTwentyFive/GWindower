c++ -O2 -march=x86-64-v2 -I ../libs/linux/glfw -c ../GWindower.cpp -o GWindower.o &&
ar x ../libs/linux/glfw/libglfw3.a &&
ar rcs libgwindower.a *.o
rm *.o