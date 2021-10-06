#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(1.5);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3ub(20, 20, 20); // Black
	glVertex2f(-1.0f, 0.0f);    // x, y
	glVertex2f(1.0f, 0.0f);

	glEnd();
    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3ub(20, 20, 20); // Black
    glVertex2f(0.0f, 1.0f);
	glVertex2f(0.0f, -1.0f);

	glEnd();
	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.2f, 0.2f);
	glVertex2f(-0.2f, 0.5f);
	glVertex2f(-0.7f, 0.5f);
	glVertex2f(-0.7f, 0.2f);
	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(70, 150, 57); // Green
	glVertex2f(0.6f, 0.55f);
	glVertex2f(0.8f, 0.35f);
	glVertex2f(0.6f, 0.15f);
	glEnd();
	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(70, 150, 57); // Green
	glVertex2f(0.1f, 0.4f);
	glVertex2f(0.1f, 0.3f);
	glVertex2f(0.6f, 0.3f);
	glVertex2f(0.6f, 0.4f);
	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(114, 39, 135); // Violet
	glVertex2f(-0.3f, -0.2f);
	glVertex2f(-0.7f, -0.5f);
	glVertex2f(-0.3f, -0.7f);

	glEnd();

    glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(0.2f, -0.6f);
	glVertex2f(0.8f, -0.6f);
	glVertex2f(0.5f, -0.2f);

	glEnd();



	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
