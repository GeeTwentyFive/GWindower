c++ -O2 -march=x86-64-v2 -I ../libs/windows/glfw -c ../GWindower.cpp -o GWindower.o
@"
CREATE libGWindower_windows.a
ADDMOD GWindower.o
ADDLIB ../libs/windows/glfw/libglfw3.a
SAVE
END
"@ | ar -M
rm GWindower.o