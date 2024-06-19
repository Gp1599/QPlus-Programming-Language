GXAPPLICATION = gx+
GXOBJECTS = $(patsubst %.cpp, %.o, $(wildcard src/*.cpp))

#This compiles the programming language interpreter
main: $(GXOBJECTS)
	g++ -o $(GXAPPLICATION) $<
%.o : %.cpp
	g++ -c $<
	mv $(subst src/,, $(patsubst %.cpp, %.o, $<)) $(patsubst %.cpp, %.o, $<)

#This removes both the gx+ execuable and all the object files in the src directory
clean:
	rm $(GXAPPLICATION)
	rm src/*.o