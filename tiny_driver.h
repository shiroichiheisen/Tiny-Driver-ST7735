#ifndef tiny_driver_
#define tiny_driver_

#include <Arduino.h>
#include <SPI.h>

class tiny_driver
{
public:
    tiny_driver(int xSize, int ySize, int orientation, int xOffset, int yOffset, int cs, int dc, int textScale, int bgr);
    void InitDisplay();
    void DisplayOn();
    void ClearDisplay();
    void MoveTo(int x, int y);
    void PlotPoint(int x, int y);
    void DrawTo(int x, int y);
    void FillRect(int w, int h);
    void PlotText(PGM_P p);
    void PlotInt(int n);
    void Color(int r, int g, int b);
    void Color(int rgb);
    void ChangeTextScale(int scale);
    void ChangeTextBackground(int backColor);
    void ShowText(int x, int y, const char *text, int r, int g, int b, int textScale);
    void ShowInt(int x, int y, int integer, int r, int g, int b, int textScale);
};

#endif