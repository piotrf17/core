// Sample program using the window API.

#include <GL/gl.h>

#include "graphics/window.h"

class MyWindow : public graphics::Window2d {
 public:
  MyWindow() : Window2d(400, 400, "Sample Window") {
  }

 protected:
  virtual void Draw() {
    glColor3f(.5, .3, .7);
    glBegin(GL_QUADS);
    glVertex2f(200, 0.0);
    glVertex2f(400, 200);
    glVertex2f(200, 400);
    glVertex2f(0.0, 200);
    glEnd();
  }

  virtual void Keypress(unsigned int key) {
    switch(key) {
      case XK_Escape:
        Close();
        break;
    }
  }
};

int main() {
  MyWindow window;
  window.Run();

  return 0;
}
