#ifndef WINDOW_H
#define WINDOW_H

#include <qwt/qwt_plot.h>
#include <qwt/qwt_plot_curve.h>

#include <QBoxLayout>

class Window : public QWidget { 
    private:
        QwtPlot plot;
        QwtPlotCurve curve;

        QVBoxLayout vLayout; //vertical layout
        QHBoxLayout hLayout; //horizontal layout

        static const int plotDataSize = 100; 

        double xData[plotDataSize]; //data arrays for each plot axis
        double yData[plotDataSize];

        int charImp;

    public: 
        Window();
        void setCharImp(int charImp);
};

#endif //WINDOW_H
