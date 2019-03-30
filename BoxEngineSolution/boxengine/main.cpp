#include <GLAD/glad.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <tinyobjloader/tiny_obj_loader.h>
#include <iostream>
#include "setup.h"
#include "OBJloader.h"

int main(void)
{
	GLFWwindow* window = init(800, 800);
	glfwSetFramebufferSizeCallback(window, framebuffer_callback);
	glfwSetKeyCallback(window, key_callback);

	//Game loop
	while (!glfwWindowShouldClose(window))
	{
		//Color of screen clear
		glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT);

		//Swap front and back buffers
		glfwSwapBuffers(window);
		//Set swap interval to avoid tearing
		glfwSwapInterval(1);
		//Check for events (key presses, etc..)
		glfwPollEvents();
	}

	glfwTerminate();

	return 0;
}



