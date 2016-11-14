#include <GL/glut.h>

void display(void)
{
  glClear(GL_COLOR_BUFFER_BIT);
  glColor3d(1.0, 0.0, 0.0);
  glBegin(GL_LINE_LOOP);
    glVertex2d(-0.9, -0.9);
//    glVertex2d(0.9, -0.9);
    glVertex2d(0.9, 0.9);
//    glVertex2d(-0.9, 0.9);
  glEnd();
  
  glFlush();
}

void line(double x1,double y1,double x2,double y2)
{
  glClear(GL_COLOR_BUFFER_BIT);
  glColor3d(1.0, 0.0, 0.0);
  glBegin(GL_LINES);
    glVertex2d(x1, y1);
    glVertex2d(x2, y2);
  glEnd();
  
  glFlush();
}


void init(void)
{
  glClearColor(0.0, 0.0, 1.0, 1.0);
}

int main(int argc, char *argv[])
{
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_RGBA);
  glutCreateWindow(argv[0]);
  glutDisplayFunc(display);
  init();
  glutMainLoop();
  return 0;
}
