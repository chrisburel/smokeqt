//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qvariant.h>
#include <qstring.h>
#include <qvalidator.h>

class x_QDoubleValidator : public QDoubleValidator {
public:
    static void x_0(Smoke::Stack x) {
	// QDoubleValidator(QObject*, const char*)
	x_QDoubleValidator* xret = new x_QDoubleValidator((QObject*)x[1].s_class,(const char*)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QDoubleValidator(QObject* x1, const char* x2) : QDoubleValidator(x1, x2) {
    }
    static void x_1(Smoke::Stack x) {
	// QDoubleValidator(QObject*)
	x_QDoubleValidator* xret = new x_QDoubleValidator((QObject*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QDoubleValidator(QObject* x1) : QDoubleValidator(x1) {
    }
    static void x_2(Smoke::Stack x) {
	// QDoubleValidator(double, double, int, QObject*, const char*)
	x_QDoubleValidator* xret = new x_QDoubleValidator((double)x[1].s_double,(double)x[2].s_double,(int)x[3].s_int,(QObject*)x[4].s_class,(const char*)x[5].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QDoubleValidator(double x1, double x2, int x3, QObject* x4, const char* x5) : QDoubleValidator(x1, x2, x3, x4, x5) {
    }
    static void x_3(Smoke::Stack x) {
	// QDoubleValidator(double, double, int, QObject*)
	x_QDoubleValidator* xret = new x_QDoubleValidator((double)x[1].s_double,(double)x[2].s_double,(int)x[3].s_int,(QObject*)x[4].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QDoubleValidator(double x1, double x2, int x3, QObject* x4) : QDoubleValidator(x1, x2, x3, x4) {
    }
    void x_4(Smoke::Stack x) const {
	// validate(QString&, int&)
	QValidator::State xret = this->QDoubleValidator::validate(*(QString *)x[1].s_class,*(int *)x[2].s_class);
	x[0].s_class = (void*)new QValidator::State(xret);
    }
    void x_5(Smoke::Stack x) {
	// setRange(double, double, int)
	this->QDoubleValidator::setRange((double)x[1].s_double,(double)x[2].s_double,(int)x[3].s_int);
    }
    void x_6(Smoke::Stack x) {
	// setRange(double, double)
	this->QDoubleValidator::setRange((double)x[1].s_double,(double)x[2].s_double);
    }
    void x_7(Smoke::Stack x) {
	// setBottom(double)
	this->QDoubleValidator::setBottom((double)x[1].s_double);
    }
    void x_8(Smoke::Stack x) {
	// setTop(double)
	this->QDoubleValidator::setTop((double)x[1].s_double);
    }
    void x_9(Smoke::Stack x) {
	// setDecimals(int)
	this->QDoubleValidator::setDecimals((int)x[1].s_int);
    }
    void x_10(Smoke::Stack x) const {
	// bottom()
	double xret = this->QDoubleValidator::bottom();
	x[0].s_double = (double)xret;
    }
    void x_11(Smoke::Stack x) const {
	// top()
	double xret = this->QDoubleValidator::top();
	x[0].s_double = (double)xret;
    }
    void x_12(Smoke::Stack x) const {
	// decimals()
	int xret = this->QDoubleValidator::decimals();
	x[0].s_int = (int)xret;
    }
    virtual bool checkConnectArgs(const char* x1, const QObject* x2, const char* x3) {
	Smoke::StackItem x[4];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)x2;
	x[3].s_class = (void*)x3;
	if(call_method((void*)this, 5469, x)) return (bool)x[0].s_bool;
	return this->QObject::checkConnectArgs(x1, x2, x3);
    }
    virtual void childEvent(QChildEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 5465, x)) return;
	this->QObject::childEvent(x1);
    }
    virtual void connectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 5467, x)) return;
	this->QObject::connectNotify(x1);
    }
    virtual void customEvent(QCustomEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 5466, x)) return;
	this->QObject::customEvent(x1);
    }
    virtual void disconnectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 5468, x)) return;
	this->QObject::disconnectNotify(x1);
    }
    virtual bool event(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 5404, x)) return (bool)x[0].s_bool;
	return this->QObject::event(x1);
    }
    virtual bool eventFilter(QObject* x1, QEvent* x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)x2;
	if(call_method((void*)this, 5405, x)) return (bool)x[0].s_bool;
	return this->QObject::eventFilter(x1, x2);
    }
    virtual void fixup(QString& x1) const {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(call_method((void*)this, 9251, x)) return;
	this->QValidator::fixup(x1);
    }
    virtual void insertChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 5427, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual QVariant property(const char* x1) const {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 5441, x)) {
	    QVariant *xptr = (QVariant *)x[0].s_class;
	    QVariant xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QObject::property(x1);
    }
    virtual void removeChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 5428, x)) return;
	this->QObject::removeChild(x1);
    }
    virtual void setName(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 5410, x)) return;
	this->QObject::setName(x1);
    }
    virtual bool setProperty(const char* x1, const QVariant& x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)&x2;
	if(call_method((void*)this, 5440, x)) return (bool)x[0].s_bool;
	return this->QObject::setProperty(x1, x2);
    }
    virtual void setRange(double x1, double x2, int x3) {
	Smoke::StackItem x[4];
	x[1].s_double = (double)x1;
	x[2].s_double = (double)x2;
	x[3].s_int = (int)x3;
	if(call_method((void*)this, 2280, x)) return;
	this->QDoubleValidator::setRange(x1, x2, x3);
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 5464, x)) return;
	this->QObject::timerEvent(x1);
    }
    virtual QValidator::State validate(QString& x1, int& x2) const {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)&x2;
	if(call_method((void*)this, 2279, x)) {
	    QValidator::State *xptr = (QValidator::State *)x[0].s_class;
	    QValidator::State xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDoubleValidator::validate(x1, x2);
    }
    ~x_QDoubleValidator() {}
};
void xcall_QDoubleValidator(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QDoubleValidator *xself = (x_QDoubleValidator*)obj;
    switch(xi) {
	case 0: x_QDoubleValidator::x_0(args);	break;
	case 1: x_QDoubleValidator::x_1(args);	break;
	case 2: x_QDoubleValidator::x_2(args);	break;
	case 3: x_QDoubleValidator::x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: xself->x_7(args);	break;
	case 8: xself->x_8(args);	break;
	case 9: xself->x_9(args);	break;
	case 10: xself->x_10(args);	break;
	case 11: xself->x_11(args);	break;
	case 12: xself->x_12(args);	break;
	case 13: delete (QDoubleValidator*)xself;	break;
    }
}
