INC = -IC:/Dev/glad/include -IC:/Dev/glfw-3.3.3.bin.WIN64/include -IC:/Dev/glm
LIBS = -LC:/Dev/glfw-3.3.3.bin.WIN64/lib-static-ucrt -lglfw3 -lopengl32 -lgdi32 -luser32 -lkernel32 -lglu32
SRC = src/main.cpp external_src/glad.c
CC = g++ -std=c++17
all:
	$(CC) $(SRC) $(INC) $(LIBS)