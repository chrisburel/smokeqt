//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qcolor.h>
#include <qnamespace.h>
#include <qbrush.h>
#include <qpixmap.h>

class x_QBrush : public QBrush {
public:
    static void x_0(Smoke::Stack x) {
	// QBrush()
	x_QBrush* xret = new x_QBrush();
	x[0].s_class = (void*)xret;
    }
    x_QBrush() : QBrush() {
    }
    static void x_1(Smoke::Stack x) {
	// QBrush(Qt::BrushStyle)
	x_QBrush* xret = new x_QBrush(*(Qt::BrushStyle *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QBrush(Qt::BrushStyle x1) : QBrush(x1) {
    }
    static void x_2(Smoke::Stack x) {
	// QBrush(const QColor&, Qt::BrushStyle)
	x_QBrush* xret = new x_QBrush(*(const QColor *)x[1].s_class,*(Qt::BrushStyle *)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QBrush(const QColor& x1, Qt::BrushStyle x2) : QBrush(x1, x2) {
    }
    static void x_3(Smoke::Stack x) {
	// QBrush(const QColor&)
	x_QBrush* xret = new x_QBrush(*(const QColor *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QBrush(const QColor& x1) : QBrush(x1) {
    }
    static void x_4(Smoke::Stack x) {
	// QBrush(const QColor&, const QPixmap&)
	x_QBrush* xret = new x_QBrush(*(const QColor *)x[1].s_class,*(const QPixmap *)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QBrush(const QColor& x1, const QPixmap& x2) : QBrush(x1, x2) {
    }
    static void x_5(Smoke::Stack x) {
	// QBrush(const QBrush&)
	x_QBrush* xret = new x_QBrush(*(const QBrush *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QBrush(const QBrush& x1) : QBrush(x1) {
    }
    void x_6(Smoke::Stack x) {
	// operator=(const QBrush&)
	QBrush& xret = this->QBrush::operator=(*(const QBrush *)x[1].s_class);
	x[0].s_class = (void*)&xret;
    }
    void x_7(Smoke::Stack x) const {
	// style()
	Qt::BrushStyle xret = this->QBrush::style();
	x[0].s_class = (void*)new Qt::BrushStyle(xret);
    }
    void x_8(Smoke::Stack x) {
	// setStyle(Qt::BrushStyle)
	this->QBrush::setStyle(*(Qt::BrushStyle *)x[1].s_class);
    }
    void x_9(Smoke::Stack x) const {
	// color()
	const QColor& xret = this->QBrush::color();
	x[0].s_class = (void*)&xret;
    }
    void x_10(Smoke::Stack x) {
	// setColor(const QColor&)
	this->QBrush::setColor(*(const QColor *)x[1].s_class);
    }
    void x_11(Smoke::Stack x) const {
	// pixmap()
	QPixmap* xret = this->QBrush::pixmap();
	x[0].s_class = (void*)xret;
    }
    void x_12(Smoke::Stack x) {
	// setPixmap(const QPixmap&)
	this->QBrush::setPixmap(*(const QPixmap *)x[1].s_class);
    }
    void x_13(Smoke::Stack x) const {
	// operator==(const QBrush&)
	bool xret = this->QBrush::operator==(*(const QBrush *)x[1].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_14(Smoke::Stack x) const {
	// operator!=(const QBrush&)
	bool xret = this->QBrush::operator!=(*(const QBrush *)x[1].s_class);
	x[0].s_bool = (bool)xret;
    }
    ~x_QBrush() {}
};
void xcall_QBrush(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QBrush *xself = (x_QBrush*)obj;
    switch(xi) {
	case 0: x_QBrush::x_0(args);	break;
	case 1: x_QBrush::x_1(args);	break;
	case 2: x_QBrush::x_2(args);	break;
	case 3: x_QBrush::x_3(args);	break;
	case 4: x_QBrush::x_4(args);	break;
	case 5: x_QBrush::x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: xself->x_7(args);	break;
	case 8: xself->x_8(args);	break;
	case 9: xself->x_9(args);	break;
	case 10: xself->x_10(args);	break;
	case 11: xself->x_11(args);	break;
	case 12: xself->x_12(args);	break;
	case 13: xself->x_13(args);	break;
	case 14: xself->x_14(args);	break;
	case 15: delete (QBrush*)xself;	break;
    }
}
