TARGET=particle
CXX=g++ -std=c++11
DEBUG=-g
OPT=-O0
WARN=-Wall
SFML=-lsfml-graphics -lsfml-window -lsfml-system
OPENGL=-lGL
CXXFLAGS=$(DEBUG) $(OPT) $(WARN) $(SFML) $(OPENGL)
LD=g++
OBJS= main.o gui.o imgui.o imgui_draw.o imgui-SFML.o imgui_tables.o imgui_widgets.o
all: $(OBJS)
	$(LD) -o $(TARGET) $(OBJS) $(CXXFLAGS)
	@rm *.o
	@./$(TARGET)

main.o: main.cpp
	$(CXX) -c $(CXXFLAGS) main.cpp -o main.o

gui.o: gui.cpp
	$(CXX) -c $(CXXFLAGS) gui.cpp -o gui.o

imgui.o: includes/imgui.cpp
	$(CXX) -c $(DEBUG) $(OPT) includes/imgui.cpp -o imgui.o

imgui_draw.o: includes/imgui_draw.cpp
	$(CXX) -c $(DEBUG) $(OPT) includes/imgui_draw.cpp -o imgui_draw.o

imgui-SFML.o: includes/imgui-SFML.cpp
	$(CXX) -c $(DEBUG) $(OPT) includes/imgui-SFML.cpp -o imgui-SFML.o

imgui_tables.o: includes/imgui_tables.cpp
	$(CXX) -c $(DEBUG) $(OPT) includes/imgui_tables.cpp -o imgui_tables.o

imgui_widgets.o: includes/imgui_widgets.cpp
	$(CXX) -c $(DEBUG) $(OPT) includes/imgui_widgets.cpp -o imgui_widgets.o

