#include "window.h"
#include <qwt/qwt_plot_scaleitem.h>
#include <QLineEdit>
#include <cmath> 

Window::Window() : plot(), charImp(50)  { // assume characteristic impedance is 50 Ohms
   
    vLayout.addWidget(&charImpSet);
    vLayout.addWidget(&real);
    vLayout.addWidget(&imagin);   

    plot.enableAxis(QwtPlot::Axis::xBottom, false);
    plot.setAxisScale(QwtPlot::Axis::xBottom, 0, 50);
    plot.setAxisScale(QwtPlot::Axis::yLeft, -1, 1);

    QwtPlotScaleItem *it1 = new QwtPlotScaleItem(QwtScaleDraw::BottomScale ,0.0);
    it1->attach(&plot);

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
