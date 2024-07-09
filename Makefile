GPAPPLICATION = q+
GPOBJECTS = $(patsubst %.cpp, %.o, $(wildcard src/*.cpp))

#This compiles the programming language interpreter
main: $(GPOBJECTS)
	g++ -o $(GPAPPLICATION) $<
%.o : %.cpp
	g++ -c $<
	mv $(subst src/,, $(patsubst %.cpp, %.o, $<)) $(patsubst %.cpp, %.o, $<)

#This removes both the gx+ execuable and all the object files in the src directory
clean:
	rm $(GPAPPLICATION)
	rm src/*.o