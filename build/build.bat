c++ -O2 -march=x86-64-v2 -c ../GWindower.cpp -o GWindower.o
ar rcs libgwindower.a GWindower.o
rm GWindower.o