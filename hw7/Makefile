OBJ := main.o Cube.o Cylinder.o

geometry: $(OBJ)
	g++ -g $(OBJ) -o geometry

Cube.o: Cube.cc Cube.hh
	g++ -g -c Cube.cc
	
Cylinder.o: Cylinder.cc Cylinder.hh
	g++ -g -c Cylinder.cc

main.o: main.cc Cube.hh Cylinder.hh
	g++ -g -c main.cc
clean:
	rm *.o geometry