//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qcolor.h>
#include <qpalette.h>
#include <qnamespace.h>
#include <qbrush.h>

class x_QPalette : public QPalette {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_enum = (long)QPalette::Disabled;
    }
    static void x_1(Smoke::Stack x) {
	x[0].s_enum = (long)QPalette::Active;
    }
    static void x_2(Smoke::Stack x) {
	x[0].s_enum = (long)QPalette::Inactive;
    }
    static void x_3(Smoke::Stack x) {
	x[0].s_enum = (long)QPalette::NColorGroups;
    }
    static void x_4(Smoke::Stack x) {
	x[0].s_enum = (long)QPalette::Normal;
    }
    static void x_5(Smoke::Stack x) {
	// QPalette()
	x_QPalette* xret = new x_QPalette();
	x[0].s_class = (void*)xret;
    }
    x_QPalette() : QPalette() {
    }
    static void x_6(Smoke::Stack x) {
	// QPalette(const QColor&)
	x_QPalette* xret = new x_QPalette(*(const QColor *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QPalette(const QColor& x1) : QPalette(x1) {
    }
    static void x_7(Smoke::Stack x) {
	// QPalette(const QColor&, const QColor&)
	x_QPalette* xret = new x_QPalette(*(const QColor *)x[1].s_class,*(const QColor *)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QPalette(const QColor& x1, const QColor& x2) : QPalette(x1, x2) {
    }
    static void x_8(Smoke::Stack x) {
	// QPalette(const QColorGroup&, const QColorGroup&, const QColorGroup&)
	x_QPalette* xret = new x_QPalette(*(const QColorGroup *)x[1].s_class,*(const QColorGroup *)x[2].s_class,*(const QColorGroup *)x[3].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QPalette(const QColorGroup& x1, const QColorGroup& x2, const QColorGroup& x3) : QPalette(x1, x2, x3) {
    }
    static void x_9(Smoke::Stack x) {
	// QPalette(const QPalette&)
	x_QPalette* xret = new x_QPalette(*(const QPalette *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QPalette(const QPalette& x1) : QPalette(x1) {
    }
    void x_10(Smoke::Stack x) {
	// operator=(const QPalette&)
	QPalette& xret = this->QPalette::operator=(*(const QPalette *)x[1].s_class);
	x[0].s_class = (void*)&xret;
    }
    void x_11(Smoke::Stack x) const {
	// color(QPalette::ColorGroup, QColorGroup::ColorRole)
	const QColor& xret = this->QPalette::color(*(QPalette::ColorGroup *)x[1].s_class,*(QColorGroup::ColorRole *)x[2].s_class);
	x[0].s_class = (void*)&xret;
    }
    void x_12(Smoke::Stack x) const {
	// brush(QPalette::ColorGroup, QColorGroup::ColorRole)
	const QBrush& xret = this->QPalette::brush(*(QPalette::ColorGroup *)x[1].s_class,*(QColorGroup::ColorRole *)x[2].s_class);
	x[0].s_class = (void*)&xret;
    }
    void x_13(Smoke::Stack x) {
	// setColor(QPalette::ColorGroup, QColorGroup::ColorRole, const QColor&)
	this->QPalette::setColor(*(QPalette::ColorGroup *)x[1].s_class,*(QColorGroup::ColorRole *)x[2].s_class,*(const QColor *)x[3].s_class);
    }
    void x_14(Smoke::Stack x) {
	// setBrush(QPalette::ColorGroup, QColorGroup::ColorRole, const QBrush&)
	this->QPalette::setBrush(*(QPalette::ColorGroup *)x[1].s_class,*(QColorGroup::ColorRole *)x[2].s_class,*(const QBrush *)x[3].s_class);
    }
    void x_15(Smoke::Stack x) {
	// setColor(QColorGroup::ColorRole, const QColor&)
	this->QPalette::setColor(*(QColorGroup::ColorRole *)x[1].s_class,*(const QColor *)x[2].s_class);
    }
    void x_16(Smoke::Stack x) {
	// setBrush(QColorGroup::ColorRole, const QBrush&)
	this->QPalette::setBrush(*(QColorGroup::ColorRole *)x[1].s_class,*(const QBrush *)x[2].s_class);
    }
    void x_17(Smoke::Stack x) const {
	// copy()
	QPalette xret = this->QPalette::copy();
	x[0].s_class = (void*)new QPalette(xret);
    }
    void x_18(Smoke::Stack x) const {
	// active()
	const QColorGroup& xret = this->QPalette::active();
	x[0].s_class = (void*)&xret;
    }
    void x_19(Smoke::Stack x) const {
	// disabled()
	const QColorGroup& xret = this->QPalette::disabled();
	x[0].s_class = (void*)&xret;
    }
    void x_20(Smoke::Stack x) const {
	// inactive()
	const QColorGroup& xret = this->QPalette::inactive();
	x[0].s_class = (void*)&xret;
    }
    void x_21(Smoke::Stack x) const {
	// normal()
	const QColorGroup& xret = this->QPalette::normal();
	x[0].s_class = (void*)&xret;
    }
    void x_22(Smoke::Stack x) {
	// setActive(const QColorGroup&)
	this->QPalette::setActive(*(const QColorGroup *)x[1].s_class);
    }
    void x_23(Smoke::Stack x) {
	// setDisabled(const QColorGroup&)
	this->QPalette::setDisabled(*(const QColorGroup *)x[1].s_class);
    }
    void x_24(Smoke::Stack x) {
	// setInactive(const QColorGroup&)
	this->QPalette::setInactive(*(const QColorGroup *)x[1].s_class);
    }
    void x_25(Smoke::Stack x) {
	// setNormal(const QColorGroup&)
	this->QPalette::setNormal(*(const QColorGroup *)x[1].s_class);
    }
    void x_26(Smoke::Stack x) const {
	// operator==(const QPalette&)
	bool xret = this->QPalette::operator==(*(const QPalette *)x[1].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_27(Smoke::Stack x) const {
	// operator!=(const QPalette&)
	bool xret = this->QPalette::operator!=(*(const QPalette *)x[1].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_28(Smoke::Stack x) {
	// isCopyOf(const QPalette&)
	bool xret = this->QPalette::isCopyOf(*(const QPalette *)x[1].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_29(Smoke::Stack x) const {
	// serialNumber()
	int xret = this->QPalette::serialNumber();
	x[0].s_int = (int)xret;
    }
    static void x_30(Smoke::Stack x) {
	// foregroundRoleFromMode(Qt::BackgroundMode)
	QColorGroup::ColorRole xret = QPalette::foregroundRoleFromMode(*(Qt::BackgroundMode *)x[1].s_class);
	x[0].s_class = (void*)new QColorGroup::ColorRole(xret);
    }
    static void x_31(Smoke::Stack x) {
	// backgroundRoleFromMode(Qt::BackgroundMode)
	QColorGroup::ColorRole xret = QPalette::backgroundRoleFromMode(*(Qt::BackgroundMode *)x[1].s_class);
	x[0].s_class = (void*)new QColorGroup::ColorRole(xret);
    }
    ~x_QPalette() {}
};
void xcall_QPalette(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QPalette *xself = (x_QPalette*)obj;
    switch(xi) {
	case 0: x_QPalette::x_0(args);	break;
	case 1: x_QPalette::x_1(args);	break;
	case 2: x_QPalette::x_2(args);	break;
	case 3: x_QPalette::x_3(args);	break;
	case 4: x_QPalette::x_4(args);	break;
	case 5: x_QPalette::x_5(args);	break;
	case 6: x_QPalette::x_6(args);	break;
	case 7: x_QPalette::x_7(args);	break;
	case 8: x_QPalette::x_8(args);	break;
	case 9: x_QPalette::x_9(args);	break;
	case 10: xself->x_10(args);	break;
	case 11: xself->x_11(args);	break;
	case 12: xself->x_12(args);	break;
	case 13: xself->x_13(args);	break;
	case 14: xself->x_14(args);	break;
	case 15: xself->x_15(args);	break;
	case 16: xself->x_16(args);	break;
	case 17: xself->x_17(args);	break;
	case 18: xself->x_18(args);	break;
	case 19: xself->x_19(args);	break;
	case 20: xself->x_20(args);	break;
	case 21: xself->x_21(args);	break;
	case 22: xself->x_22(args);	break;
	case 23: xself->x_23(args);	break;
	case 24: xself->x_24(args);	break;
	case 25: xself->x_25(args);	break;
	case 26: xself->x_26(args);	break;
	case 27: xself->x_27(args);	break;
	case 28: xself->x_28(args);	break;
	case 29: xself->x_29(args);	break;
	case 30: x_QPalette::x_30(args);	break;
	case 31: x_QPalette::x_31(args);	break;
	case 32: delete (QPalette*)xself;	break;
    }
}
