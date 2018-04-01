#include <MicroView.h>

void setup() 
{
  
  uView.begin();//start microview
  uView.clear(PAGE);//clear the page
  uView.flipHorizontal(true);
  uView.flipVertical(true);
  uView.print("FIND ME @ \nchris.\n mckearn@\n .outlook\n.com");
  uView.display();

}

void loop() 
{


}
