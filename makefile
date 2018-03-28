# Random Math Problem Generation
# By Kyle Jordan
# --------------------------------- Makefile
OBJS = main.o enum.o NumberGenerator.o Problem.o tools.o
CXXFLAGS = -Wall -std=c++11
#---------------------------------- Linking command
game: $(OBJS)
	$(CXX) -o Generator $(OBJS)
#---------------------------------- Compilation
main.o:	main.cpp tools.hpp NumberGenerator.hpp Problem.hpp
	$(CXX) -c $(CXXFLAGS) main.cpp
enum.o: enum.cpp enum.hpp tools.hpp
	$(CXX) -c $(CXXFLAGS) enum.cpp
NumberGenerator.o: NumberGenerator.cpp NumberGenerator.hpp tools.hpp
	$(CXX) -c $(CXXFLAGS) NumberGenerator.cpp
Problem.o: Problem.cpp Problem.hpp enum.hpp tools.hpp
	$(CXX) -c $(CXXFLAGS) Problem.cpp
tools.o: tools.cpp tools.hpp
	$(CXX) -c $(CXXFLAGS) tools.cpp
#---------------------------------- Cleanup
clean:
	rm -f $(OBJS) game