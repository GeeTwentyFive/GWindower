c++ -O2 -march=x86-64-v2 -I ../libs/linux/glfw -c ../GWindower.cpp -o GWindower.o &&
ar -M <<EOF
CREATE libGWindower_linux.a
ADDMOD GWindower.o
ADDLIB ../libs/linux/glfw/libglfw3.a
SAVE
END
EOF
rm GWindower.o