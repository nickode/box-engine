#pragma once
#include <GLFW/glfw3.h>
GLFWwindow* init(int,int);
void framebuffer_callback(GLFWwindow*,int,int);
void key_callback(GLFWwindow*, int, int, int, int);