//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qcolor.h>
#include <qwindowdefs.h>
#include <qcolordialog.h>

class x_QColorDialog {
private:
    QColorDialog *xthis;
public:
    x_QColorDialog(void *x) : xthis((QColorDialog*)x) {}
    static void x_0(Smoke::Stack x) {
	// getColor(const QColor&, QWidget*, const char*)
	QColor xret = QColorDialog::getColor(*(const QColor *)x[1].s_class,(QWidget*)x[2].s_class,(const char*)x[3].s_class);
	x[0].s_class = (void*)new QColor(xret);
    }
    static void x_1(Smoke::Stack x) {
	// getColor(const QColor&, QWidget*)
	QColor xret = QColorDialog::getColor(*(const QColor *)x[1].s_class,(QWidget*)x[2].s_class);
	x[0].s_class = (void*)new QColor(xret);
    }
    static void x_2(Smoke::Stack x) {
	// getColor(const QColor&)
	QColor xret = QColorDialog::getColor(*(const QColor *)x[1].s_class);
	x[0].s_class = (void*)new QColor(xret);
    }
    static void x_3(Smoke::Stack x) {
	// getColor()
	QColor xret = QColorDialog::getColor();
	x[0].s_class = (void*)new QColor(xret);
    }
    static void x_4(Smoke::Stack x) {
	// getRgba(QRgb, bool*, QWidget*, const char*)
	QRgb xret = QColorDialog::getRgba(*(QRgb *)x[1].s_class,(bool*)x[2].s_class,(QWidget*)x[3].s_class,(const char*)x[4].s_class);
	x[0].s_class = (void*)new QRgb(xret);
    }
    static void x_5(Smoke::Stack x) {
	// getRgba(QRgb, bool*, QWidget*)
	QRgb xret = QColorDialog::getRgba(*(QRgb *)x[1].s_class,(bool*)x[2].s_class,(QWidget*)x[3].s_class);
	x[0].s_class = (void*)new QRgb(xret);
    }
    static void x_6(Smoke::Stack x) {
	// getRgba(QRgb, bool*)
	QRgb xret = QColorDialog::getRgba(*(QRgb *)x[1].s_class,(bool*)x[2].s_class);
	x[0].s_class = (void*)new QRgb(xret);
    }
    static void x_7(Smoke::Stack x) {
	// getRgba(QRgb)
	QRgb xret = QColorDialog::getRgba(*(QRgb *)x[1].s_class);
	x[0].s_class = (void*)new QRgb(xret);
    }
    static void x_8(Smoke::Stack x) {
	// customCount()
	int xret = QColorDialog::customCount();
	x[0].s_int = (int)xret;
    }
    static void x_9(Smoke::Stack x) {
	// customColor(int)
	QRgb xret = QColorDialog::customColor((int)x[1].s_int);
	x[0].s_class = (void*)new QRgb(xret);
    }
    static void x_10(Smoke::Stack x) {
	// setCustomColor(int, QRgb)
	QColorDialog::setCustomColor((int)x[1].s_int,*(QRgb *)x[2].s_class);
    }
    ~x_QColorDialog() {}
};
void xcall_QColorDialog(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QColorDialog xtmp(obj), *xself = &xtmp;
    switch(xi) {
	case 0: x_QColorDialog::x_0(args);	break;
	case 1: x_QColorDialog::x_1(args);	break;
	case 2: x_QColorDialog::x_2(args);	break;
	case 3: x_QColorDialog::x_3(args);	break;
	case 4: x_QColorDialog::x_4(args);	break;
	case 5: x_QColorDialog::x_5(args);	break;
	case 6: x_QColorDialog::x_6(args);	break;
	case 7: x_QColorDialog::x_7(args);	break;
	case 8: x_QColorDialog::x_8(args);	break;
	case 9: x_QColorDialog::x_9(args);	break;
	case 10: x_QColorDialog::x_10(args);	break;
    }
}
