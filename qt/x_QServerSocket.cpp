//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qvariant.h>
#include <qglobal.h>
#include <qhostaddress.h>
#include <qserversocket.h>

class x_QServerSocket : public QServerSocket {
public:
    static void x_0(Smoke::Stack x) {
	// QServerSocket(Q_UINT16, int, QObject*, const char*)
	x_QServerSocket* xret = new x_QServerSocket(*(Q_UINT16 *)x[1].s_class,(int)x[2].s_int,(QObject*)x[3].s_class,(const char*)x[4].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QServerSocket(Q_UINT16 x1, int x2, QObject* x3, const char* x4) : QServerSocket(x1, x2, x3, x4) {
    }
    static void x_1(Smoke::Stack x) {
	// QServerSocket(Q_UINT16, int, QObject*)
	x_QServerSocket* xret = new x_QServerSocket(*(Q_UINT16 *)x[1].s_class,(int)x[2].s_int,(QObject*)x[3].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QServerSocket(Q_UINT16 x1, int x2, QObject* x3) : QServerSocket(x1, x2, x3) {
    }
    static void x_2(Smoke::Stack x) {
	// QServerSocket(Q_UINT16, int)
	x_QServerSocket* xret = new x_QServerSocket(*(Q_UINT16 *)x[1].s_class,(int)x[2].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QServerSocket(Q_UINT16 x1, int x2) : QServerSocket(x1, x2) {
    }
    static void x_3(Smoke::Stack x) {
	// QServerSocket(Q_UINT16)
	x_QServerSocket* xret = new x_QServerSocket(*(Q_UINT16 *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QServerSocket(Q_UINT16 x1) : QServerSocket(x1) {
    }
    static void x_4(Smoke::Stack x) {
	// QServerSocket(const QHostAddress&, Q_UINT16, int, QObject*, const char*)
	x_QServerSocket* xret = new x_QServerSocket(*(const QHostAddress *)x[1].s_class,*(Q_UINT16 *)x[2].s_class,(int)x[3].s_int,(QObject*)x[4].s_class,(const char*)x[5].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QServerSocket(const QHostAddress& x1, Q_UINT16 x2, int x3, QObject* x4, const char* x5) : QServerSocket(x1, x2, x3, x4, x5) {
    }
    static void x_5(Smoke::Stack x) {
	// QServerSocket(const QHostAddress&, Q_UINT16, int, QObject*)
	x_QServerSocket* xret = new x_QServerSocket(*(const QHostAddress *)x[1].s_class,*(Q_UINT16 *)x[2].s_class,(int)x[3].s_int,(QObject*)x[4].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QServerSocket(const QHostAddress& x1, Q_UINT16 x2, int x3, QObject* x4) : QServerSocket(x1, x2, x3, x4) {
    }
    static void x_6(Smoke::Stack x) {
	// QServerSocket(const QHostAddress&, Q_UINT16, int)
	x_QServerSocket* xret = new x_QServerSocket(*(const QHostAddress *)x[1].s_class,*(Q_UINT16 *)x[2].s_class,(int)x[3].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QServerSocket(const QHostAddress& x1, Q_UINT16 x2, int x3) : QServerSocket(x1, x2, x3) {
    }
    static void x_7(Smoke::Stack x) {
	// QServerSocket(const QHostAddress&, Q_UINT16)
	x_QServerSocket* xret = new x_QServerSocket(*(const QHostAddress *)x[1].s_class,*(Q_UINT16 *)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QServerSocket(const QHostAddress& x1, Q_UINT16 x2) : QServerSocket(x1, x2) {
    }
    static void x_8(Smoke::Stack x) {
	// QServerSocket(QObject*, const char*)
	x_QServerSocket* xret = new x_QServerSocket((QObject*)x[1].s_class,(const char*)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QServerSocket(QObject* x1, const char* x2) : QServerSocket(x1, x2) {
    }
    static void x_9(Smoke::Stack x) {
	// QServerSocket(QObject*)
	x_QServerSocket* xret = new x_QServerSocket((QObject*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QServerSocket(QObject* x1) : QServerSocket(x1) {
    }
    static void x_10(Smoke::Stack x) {
	// QServerSocket()
	x_QServerSocket* xret = new x_QServerSocket();
	x[0].s_class = (void*)xret;
    }
    x_QServerSocket() : QServerSocket() {
    }
    void x_11(Smoke::Stack x) const {
	// ok()
	bool xret = this->QServerSocket::ok();
	x[0].s_bool = (bool)xret;
    }
    void x_12(Smoke::Stack x) const {
	// port()
	Q_UINT16 xret = this->QServerSocket::port();
	x[0].s_class = (void*)new Q_UINT16(xret);
    }
    void x_13(Smoke::Stack x) const {
	// socket()
	int xret = this->QServerSocket::socket();
	x[0].s_int = (int)xret;
    }
    void x_14(Smoke::Stack x) {
	// setSocket(int)
	this->QServerSocket::setSocket((int)x[1].s_int);
    }
    void x_15(Smoke::Stack x) const {
	// address()
	QHostAddress xret = this->QServerSocket::address();
	x[0].s_class = (void*)new QHostAddress(xret);
    }
    void x_16(Smoke::Stack x) {
	// newConnection(int)
	this->QServerSocket::newConnection((int)x[1].s_int);
    }
    void x_17(Smoke::Stack x) {
	// socketDevice()
	QSocketDevice* xret = this->QServerSocket::socketDevice();
	x[0].s_class = (void*)xret;
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
    virtual void insertChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 5427, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual void newConnection(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	call_method_abstract((void*)this, 6708, x);
	return;
	// ABSTRACT
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
    virtual void setSocket(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(call_method((void*)this, 6706, x)) return;
	this->QServerSocket::setSocket(x1);
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 5464, x)) return;
	this->QObject::timerEvent(x1);
    }
    ~x_QServerSocket() {}
};
void xcall_QServerSocket(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QServerSocket *xself = (x_QServerSocket*)obj;
    switch(xi) {
	case 0: x_QServerSocket::x_0(args);	break;
	case 1: x_QServerSocket::x_1(args);	break;
	case 2: x_QServerSocket::x_2(args);	break;
	case 3: x_QServerSocket::x_3(args);	break;
	case 4: x_QServerSocket::x_4(args);	break;
	case 5: x_QServerSocket::x_5(args);	break;
	case 6: x_QServerSocket::x_6(args);	break;
	case 7: x_QServerSocket::x_7(args);	break;
	case 8: x_QServerSocket::x_8(args);	break;
	case 9: x_QServerSocket::x_9(args);	break;
	case 10: x_QServerSocket::x_10(args);	break;
	case 11: xself->x_11(args);	break;
	case 12: xself->x_12(args);	break;
	case 13: xself->x_13(args);	break;
	case 14: xself->x_14(args);	break;
	case 15: xself->x_15(args);	break;
	case 16: xself->x_16(args);	break;
	case 17: xself->x_17(args);	break;
	case 18: delete (QServerSocket*)xself;	break;
    }
}
