//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qpen.h>
#include <qbrush.h>
#include <qpointarray.h>
#include <qrect.h>
#include <qpainter.h>
#include <qsize.h>
#include <qcanvas.h>

class x_QCanvasRectangle : public QCanvasRectangle {
public:
    static void x_0(Smoke::Stack x) {
	// QCanvasRectangle(QCanvas*)
	x_QCanvasRectangle* xret = new x_QCanvasRectangle((QCanvas*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QCanvasRectangle(QCanvas* x1) : QCanvasRectangle(x1) {
    }
    static void x_1(Smoke::Stack x) {
	// QCanvasRectangle(const QRect&, QCanvas*)
	x_QCanvasRectangle* xret = new x_QCanvasRectangle(*(const QRect *)x[1].s_class,(QCanvas*)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QCanvasRectangle(const QRect& x1, QCanvas* x2) : QCanvasRectangle(x1, x2) {
    }
    static void x_2(Smoke::Stack x) {
	// QCanvasRectangle(int, int, int, int, QCanvas*)
	x_QCanvasRectangle* xret = new x_QCanvasRectangle((int)x[1].s_int,(int)x[2].s_int,(int)x[3].s_int,(int)x[4].s_int,(QCanvas*)x[5].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QCanvasRectangle(int x1, int x2, int x3, int x4, QCanvas* x5) : QCanvasRectangle(x1, x2, x3, x4, x5) {
    }
    void x_3(Smoke::Stack x) const {
	// width()
	int xret = this->QCanvasRectangle::width();
	x[0].s_int = (int)xret;
    }
    void x_4(Smoke::Stack x) const {
	// height()
	int xret = this->QCanvasRectangle::height();
	x[0].s_int = (int)xret;
    }
    void x_5(Smoke::Stack x) {
	// setSize(int, int)
	this->QCanvasRectangle::setSize((int)x[1].s_int,(int)x[2].s_int);
    }
    void x_6(Smoke::Stack x) const {
	// size()
	QSize xret = this->QCanvasRectangle::size();
	x[0].s_class = (void*)new QSize(xret);
    }
    void x_7(Smoke::Stack x) const {
	// areaPoints()
	QPointArray xret = this->QCanvasRectangle::areaPoints();
	x[0].s_class = (void*)new QPointArray(xret);
    }
    void x_8(Smoke::Stack x) const {
	// rect()
	QRect xret = this->QCanvasRectangle::rect();
	x[0].s_class = (void*)new QRect(xret);
    }
    void x_9(Smoke::Stack x) const {
	// collidesWith(const QCanvasItem*)
	bool xret = this->QCanvasRectangle::collidesWith((const QCanvasItem*)x[1].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_10(Smoke::Stack x) const {
	// rtti()
	int xret = this->QCanvasRectangle::rtti();
	x[0].s_int = (int)xret;
    }
    void x_11(Smoke::Stack x) {
	// drawShape(QPainter&)
	this->QCanvasRectangle::drawShape(*(QPainter *)x[1].s_class);
    }
    void x_12(Smoke::Stack x) const {
	// chunks()
	QPointArray xret = this->QCanvasRectangle::chunks();
	x[0].s_class = (void*)new QPointArray(xret);
    }
    virtual void advance(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(call_method((void*)this, 544, x)) return;
	this->QCanvasItem::advance(x1);
    }
    virtual QPointArray areaPoints() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 630, x)) {
	    QPointArray *xptr = (QPointArray *)x[0].s_class;
	    QPointArray xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QCanvasRectangle::areaPoints();
    }
    virtual QPointArray areaPointsAdvanced() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 615, x)) {
	    QPointArray *xptr = (QPointArray *)x[0].s_class;
	    QPointArray xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QCanvasPolygonalItem::areaPointsAdvanced();
    }
    virtual QRect boundingRect() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 616, x)) {
	    QRect *xptr = (QRect *)x[0].s_class;
	    QRect xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QCanvasPolygonalItem::boundingRect();
    }
    virtual QRect boundingRectAdvanced() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 565, x)) {
	    QRect *xptr = (QRect *)x[0].s_class;
	    QRect xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QCanvasItem::boundingRectAdvanced();
    }
    virtual bool collidesWith(const QCanvasItem* x1) const {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 632, x)) return (bool)x[0].s_bool;
	return this->QCanvasRectangle::collidesWith(x1);
    }
    virtual void draw(QPainter& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(call_method((void*)this, 618, x)) return;
	this->QCanvasPolygonalItem::draw(x1);
    }
    virtual void drawShape(QPainter& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(call_method((void*)this, 634, x)) return;
	this->QCanvasRectangle::drawShape(x1);
    }
    virtual void moveBy(double x1, double x2) {
	Smoke::StackItem x[3];
	x[1].s_double = (double)x1;
	x[2].s_double = (double)x2;
	if(call_method((void*)this, 532, x)) return;
	this->QCanvasItem::moveBy(x1, x2);
    }
    virtual int rtti() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 633, x)) return (int)x[0].s_int;
	return this->QCanvasRectangle::rtti();
    }
    virtual void setActive(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 557, x)) return;
	this->QCanvasItem::setActive(x1);
    }
    virtual void setAnimated(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 538, x)) return;
	this->QCanvasItem::setAnimated(x1);
    }
    virtual void setBrush(QBrush x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(call_method((void*)this, 611, x)) return;
	this->QCanvasPolygonalItem::setBrush(x1);
    }
    virtual void setCanvas(QCanvas* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 547, x)) return;
	this->QCanvasItem::setCanvas(x1);
    }
    virtual void setEnabled(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 555, x)) return;
	this->QCanvasItem::setEnabled(x1);
    }
    virtual void setPen(QPen x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(call_method((void*)this, 610, x)) return;
	this->QCanvasPolygonalItem::setPen(x1);
    }
    virtual void setSelected(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 553, x)) return;
	this->QCanvasItem::setSelected(x1);
    }
    virtual void setVelocity(double x1, double x2) {
	Smoke::StackItem x[3];
	x[1].s_double = (double)x1;
	x[2].s_double = (double)x2;
	if(call_method((void*)this, 539, x)) return;
	this->QCanvasItem::setVelocity(x1, x2);
    }
    virtual void setVisible(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 551, x)) return;
	this->QCanvasItem::setVisible(x1);
    }
    ~x_QCanvasRectangle() {}
};
void xcall_QCanvasRectangle(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QCanvasRectangle *xself = (x_QCanvasRectangle*)obj;
    switch(xi) {
	case 0: x_QCanvasRectangle::x_0(args);	break;
	case 1: x_QCanvasRectangle::x_1(args);	break;
	case 2: x_QCanvasRectangle::x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: xself->x_7(args);	break;
	case 8: xself->x_8(args);	break;
	case 9: xself->x_9(args);	break;
	case 10: xself->x_10(args);	break;
	case 11: xself->x_11(args);	break;
	case 12: xself->x_12(args);	break;
	case 13: delete (QCanvasRectangle*)xself;	break;
    }
}
