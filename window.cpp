#include "window.h"
#include <QLineEdit>
#include <cmath> 

Window::Window() : plot(), charImp(50)  { // assume characteristic impedance is 50 Ohms
    

    vLayout.addWidget(&charImpSet);
    vLayout.addWidget(&real);
    vLayout.addWidget(&imagin);   
   
    plot.replot();
    plot.show();
    
    plot.setFixedWidth(1500);

    hLayout.addLayout(&vLayout);
    hLayout.addWidget(&plot);
    

    setLayout(&hLayout);
}

void Window::setCharImp(int charImp) {
    this->charImp = charImp;     
}
