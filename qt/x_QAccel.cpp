//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qvariant.h>
#include <qkeysequence.h>
#include <qstring.h>
#include <qaccel.h>

class x_QAccel : public QAccel {
public:
    static void x_0(Smoke::Stack x) {
	// QAccel(QWidget*, const char*)
	x_QAccel* xret = new x_QAccel((QWidget*)x[1].s_class,(const char*)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QAccel(QWidget* x1, const char* x2) : QAccel(x1, x2) {
    }
    static void x_1(Smoke::Stack x) {
	// QAccel(QWidget*)
	x_QAccel* xret = new x_QAccel((QWidget*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QAccel(QWidget* x1) : QAccel(x1) {
    }
    static void x_2(Smoke::Stack x) {
	// QAccel(QWidget*, QObject*, const char*)
	x_QAccel* xret = new x_QAccel((QWidget*)x[1].s_class,(QObject*)x[2].s_class,(const char*)x[3].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QAccel(QWidget* x1, QObject* x2, const char* x3) : QAccel(x1, x2, x3) {
    }
    static void x_3(Smoke::Stack x) {
	// QAccel(QWidget*, QObject*)
	x_QAccel* xret = new x_QAccel((QWidget*)x[1].s_class,(QObject*)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QAccel(QWidget* x1, QObject* x2) : QAccel(x1, x2) {
    }
    void x_4(Smoke::Stack x) const {
	// isEnabled()
	bool xret = this->QAccel::isEnabled();
	x[0].s_bool = (bool)xret;
    }
    void x_5(Smoke::Stack x) {
	// setEnabled(bool)
	this->QAccel::setEnabled((bool)x[1].s_bool);
    }
    void x_6(Smoke::Stack x) const {
	// count()
	uint xret = this->QAccel::count();
	x[0].s_uint = (uint)xret;
    }
    void x_7(Smoke::Stack x) {
	// insertItem(const QKeySequence&, int)
	int xret = this->QAccel::insertItem(*(const QKeySequence *)x[1].s_class,(int)x[2].s_int);
	x[0].s_int = (int)xret;
    }
    void x_8(Smoke::Stack x) {
	// insertItem(const QKeySequence&)
	int xret = this->QAccel::insertItem(*(const QKeySequence *)x[1].s_class);
	x[0].s_int = (int)xret;
    }
    void x_9(Smoke::Stack x) {
	// removeItem(int)
	this->QAccel::removeItem((int)x[1].s_int);
    }
    void x_10(Smoke::Stack x) {
	// clear()
	this->QAccel::clear();
    }
    void x_11(Smoke::Stack x) {
	// key(int)
	QKeySequence xret = this->QAccel::key((int)x[1].s_int);
	x[0].s_class = (void*)new QKeySequence(xret);
    }
    void x_12(Smoke::Stack x) const {
	// findKey(const QKeySequence&)
	int xret = this->QAccel::findKey(*(const QKeySequence *)x[1].s_class);
	x[0].s_int = (int)xret;
    }
    void x_13(Smoke::Stack x) const {
	// isItemEnabled(int)
	bool xret = this->QAccel::isItemEnabled((int)x[1].s_int);
	x[0].s_bool = (bool)xret;
    }
    void x_14(Smoke::Stack x) {
	// setItemEnabled(int, bool)
	this->QAccel::setItemEnabled((int)x[1].s_int,(bool)x[2].s_bool);
    }
    void x_15(Smoke::Stack x) {
	// connectItem(int, const QObject*, const char*)
	bool xret = this->QAccel::connectItem((int)x[1].s_int,(const QObject*)x[2].s_class,(const char*)x[3].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_16(Smoke::Stack x) {
	// disconnectItem(int, const QObject*, const char*)
	bool xret = this->QAccel::disconnectItem((int)x[1].s_int,(const QObject*)x[2].s_class,(const char*)x[3].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_17(Smoke::Stack x) {
	// repairEventFilter()
	this->QAccel::repairEventFilter();
    }
    void x_18(Smoke::Stack x) {
	// setWhatsThis(int, const QString&)
	this->QAccel::setWhatsThis((int)x[1].s_int,*(const QString *)x[2].s_class);
    }
    void x_19(Smoke::Stack x) const {
	// whatsThis(int)
	QString xret = this->QAccel::whatsThis((int)x[1].s_int);
	x[0].s_class = (void*)new QString(xret);
    }
    void x_20(Smoke::Stack x) {
	// setIgnoreWhatsThis(bool)
	this->QAccel::setIgnoreWhatsThis((bool)x[1].s_bool);
    }
    void x_21(Smoke::Stack x) const {
	// ignoreWhatsThis()
	bool xret = this->QAccel::ignoreWhatsThis();
	x[0].s_bool = (bool)xret;
    }
    void x_22(Smoke::Stack x) {
	// activated(int)
	this->QAccel::activated((int)x[1].s_int);
    }
    static void x_23(Smoke::Stack x) {
	// shortcutKey(const QString&)
	QKeySequence xret = QAccel::shortcutKey(*(const QString *)x[1].s_class);
	x[0].s_class = (void*)new QKeySequence(xret);
    }
    static void x_24(Smoke::Stack x) {
	// keyToString(QKeySequence)
	QString xret = QAccel::keyToString(*(QKeySequence *)x[1].s_class);
	x[0].s_class = (void*)new QString(xret);
    }
    static void x_25(Smoke::Stack x) {
	// stringToKey(const QString&)
	QKeySequence xret = QAccel::stringToKey(*(const QString *)x[1].s_class);
	x[0].s_class = (void*)new QKeySequence(xret);
    }
    void x_26(Smoke::Stack x) {
	// eventFilter(QObject*, QEvent*)
	bool xret = this->QAccel::eventFilter((QObject*)x[1].s_class,(QEvent*)x[2].s_class);
	x[0].s_bool = (bool)xret;
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
	if(call_method((void*)this, 27, x)) return (bool)x[0].s_bool;
	return this->QAccel::eventFilter(x1, x2);
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
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 5464, x)) return;
	this->QObject::timerEvent(x1);
    }
    ~x_QAccel() {}
};
void xcall_QAccel(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QAccel *xself = (x_QAccel*)obj;
    switch(xi) {
	case 0: x_QAccel::x_0(args);	break;
	case 1: x_QAccel::x_1(args);	break;
	case 2: x_QAccel::x_2(args);	break;
	case 3: x_QAccel::x_3(args);	break;
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
	case 23: x_QAccel::x_23(args);	break;
	case 24: x_QAccel::x_24(args);	break;
	case 25: x_QAccel::x_25(args);	break;
	case 26: xself->x_26(args);	break;
	case 27: delete (QAccel*)xself;	break;
    }
}
