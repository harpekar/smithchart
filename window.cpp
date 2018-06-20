#include "window.h"

#include <cmath> 

Window::Window() : plot()  { // assume characteristic impedance is 50 Ohms
   
    
    hLayout.addLayout(&vLayout);
    hLayout.addWidget(&plot);
}

void Window::setCharImp(int charImp) {
    this->charImp = charImp;     
}
