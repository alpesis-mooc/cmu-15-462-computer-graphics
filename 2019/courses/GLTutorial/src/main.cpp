#include <string>
#include <sstream>
#include <functional>
#include <iostream>

#include <GLFW/glfw3.h>

#include <glm/vec3.hpp>
#include <glm/matrix.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
  
#include "GraphicsManager.hpp"
#include "Mesh.hpp"

void render(double current_time, GraphicsManager *gm) {
	/** Drawing Code Goes Here! **/

}

int main(int argc, char **argv) {
	std::string title = "OpenGL Tutorial";
	std::function<void(double, GraphicsManager*)> pass = &render;

	GraphicsManager *gm = new GraphicsManager(title, pass);

	gm->set_gl_version(2, 1); // Set OpenGL profile to 2.1
	gm->execute();

	return 0; 
}