#pragma once
#include <iostream>
class CPoint {
private:
    int x, y;
    static int nCount;// nCount用于保存点的个数
public:
    CPoint(int px = 0, int py = 0);
    CPoint(CPoint &);
    ~CPoint();
    int GetX() const;
    int GetY() const;
    void SetX(int);
    void SetY(int);
    void ShowPoint() const;
    CPoint operator+(const CPoint &pt) const {
        return {this->x + pt.x, this->y + pt.y};
    }
    friend CPoint operator-(const CPoint &pt1, const CPoint &pt2) {
        return {pt1.x - pt2.x, pt1.y - pt2.y};
    }
    friend std::istream &operator>>(std::istream &, CPoint &);
    friend std::ostream &operator<<(std::ostream &, const CPoint &);
};