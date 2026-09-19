class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        
    int xclosest=max(x1,min(x2,xCenter));
    int yclosest=max(y1,min(y2,yCenter));

    int dx=xCenter-xclosest;
    int dy=yCenter-yclosest;

    return dx*dx+dy*dy<=radius*radius;
    
    }
};