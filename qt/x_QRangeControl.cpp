//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qrangecontrol.h>

class x_QRangeControl : public QRangeControl {
public:
    static void x_0(Smoke::Stack x) {
	// QRangeControl()
	x_QRangeControl* xret = new x_QRangeControl();
	x[0].s_class = (void*)xret;
    }
    x_QRangeControl() : QRangeControl() {
    }
    static void x_1(Smoke::Stack x) {
	// QRangeControl(int, int, int, int, int)
	x_QRangeControl* xret = new x_QRangeControl((int)x[1].s_int,(int)x[2].s_int,(int)x[3].s_int,(int)x[4].s_int,(int)x[5].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QRangeControl(int x1, int x2, int x3, int x4, int x5) : QRangeControl(x1, x2, x3, x4, x5) {
    }
    void x_2(Smoke::Stack x) const {
	// value()
	int xret = this->QRangeControl::value();
	x[0].s_int = (int)xret;
    }
    void x_3(Smoke::Stack x) {
	// setValue(int)
	this->QRangeControl::setValue((int)x[1].s_int);
    }
    void x_4(Smoke::Stack x) {
	// addPage()
	this->QRangeControl::addPage();
    }
    void x_5(Smoke::Stack x) {
	// subtractPage()
	this->QRangeControl::subtractPage();
    }
    void x_6(Smoke::Stack x) {
	// addLine()
	this->QRangeControl::addLine();
    }
    void x_7(Smoke::Stack x) {
	// subtractLine()
	this->QRangeControl::subtractLine();
    }
    void x_8(Smoke::Stack x) const {
	// minValue()
	int xret = this->QRangeControl::minValue();
	x[0].s_int = (int)xret;
    }
    void x_9(Smoke::Stack x) const {
	// maxValue()
	int xret = this->QRangeControl::maxValue();
	x[0].s_int = (int)xret;
    }
    void x_10(Smoke::Stack x) {
	// setRange(int, int)
	this->QRangeControl::setRange((int)x[1].s_int,(int)x[2].s_int);
    }
    void x_11(Smoke::Stack x) {
	// setMinValue(int)
	this->QRangeControl::setMinValue((int)x[1].s_int);
    }
    void x_12(Smoke::Stack x) {
	// setMaxValue(int)
	this->QRangeControl::setMaxValue((int)x[1].s_int);
    }
    void x_13(Smoke::Stack x) const {
	// lineStep()
	int xret = this->QRangeControl::lineStep();
	x[0].s_int = (int)xret;
    }
    void x_14(Smoke::Stack x) const {
	// pageStep()
	int xret = this->QRangeControl::pageStep();
	x[0].s_int = (int)xret;
    }
    void x_15(Smoke::Stack x) {
	// setSteps(int, int)
	this->QRangeControl::setSteps((int)x[1].s_int,(int)x[2].s_int);
    }
    void x_16(Smoke::Stack x) const {
	// bound(int)
	int xret = this->QRangeControl::bound((int)x[1].s_int);
	x[0].s_int = (int)xret;
    }
    void x_17(Smoke::Stack x) const {
	// positionFromValue(int, int)
	int xret = this->QRangeControl::positionFromValue((int)x[1].s_int,(int)x[2].s_int);
	x[0].s_int = (int)xret;
    }
    void x_18(Smoke::Stack x) const {
	// valueFromPosition(int, int)
	int xret = this->QRangeControl::valueFromPosition((int)x[1].s_int,(int)x[2].s_int);
	x[0].s_int = (int)xret;
    }
    void x_19(Smoke::Stack x) {
	// directSetValue(int)
	this->QRangeControl::directSetValue((int)x[1].s_int);
    }
    void x_20(Smoke::Stack x) const {
	// prevValue()
	int xret = this->QRangeControl::prevValue();
	x[0].s_int = (int)xret;
    }
    void x_21(Smoke::Stack x) {
	// valueChange()
	this->QRangeControl::valueChange();
    }
    void x_22(Smoke::Stack x) {
	// rangeChange()
	this->QRangeControl::rangeChange();
    }
    void x_23(Smoke::Stack x) {
	// stepChange()
	this->QRangeControl::stepChange();
    }
    virtual void rangeChange() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 6353, x)) return;
	this->QRangeControl::rangeChange();
    }
    virtual void stepChange() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 6354, x)) return;
	this->QRangeControl::stepChange();
    }
    virtual void valueChange() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 6352, x)) return;
	this->QRangeControl::valueChange();
    }
    ~x_QRangeControl() {}
};
void xcall_QRangeControl(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QRangeControl *xself = (x_QRangeControl*)obj;
    switch(xi) {
	case 0: x_QRangeControl::x_0(args);	break;
	case 1: x_QRangeControl::x_1(args);	break;
	case 2: xself->x_2(args);	break;
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
	case 24: delete (QRangeControl*)xself;	break;
    }
}
