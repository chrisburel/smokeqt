//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qvariant.h>
#include <qglobal.h>
#include <qiodevice.h>
#include <qcstring.h>
#include <qhostaddress.h>
#include <qstring.h>
#include <qsocket.h>

class x_QSocket : public QSocket {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_enum = (long)QSocket::ErrConnectionRefused;
    }
    static void x_1(Smoke::Stack x) {
	x[0].s_enum = (long)QSocket::ErrHostNotFound;
    }
    static void x_2(Smoke::Stack x) {
	x[0].s_enum = (long)QSocket::ErrSocketRead;
    }
    static void x_3(Smoke::Stack x) {
	x[0].s_enum = (long)QSocket::Idle;
    }
    static void x_4(Smoke::Stack x) {
	x[0].s_enum = (long)QSocket::HostLookup;
    }
    static void x_5(Smoke::Stack x) {
	x[0].s_enum = (long)QSocket::Connecting;
    }
    static void x_6(Smoke::Stack x) {
	x[0].s_enum = (long)QSocket::Connected;
    }
    static void x_7(Smoke::Stack x) {
	x[0].s_enum = (long)QSocket::Closing;
    }
    static void x_8(Smoke::Stack x) {
	x[0].s_enum = (long)QSocket::Connection;
    }
    static void x_9(Smoke::Stack x) {
	// QSocket(QObject*, const char*)
	x_QSocket* xret = new x_QSocket((QObject*)x[1].s_class,(const char*)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QSocket(QObject* x1, const char* x2) : QSocket(x1, x2) {
    }
    static void x_10(Smoke::Stack x) {
	// QSocket(QObject*)
	x_QSocket* xret = new x_QSocket((QObject*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QSocket(QObject* x1) : QSocket(x1) {
    }
    static void x_11(Smoke::Stack x) {
	// QSocket()
	x_QSocket* xret = new x_QSocket();
	x[0].s_class = (void*)xret;
    }
    x_QSocket() : QSocket() {
    }
    void x_12(Smoke::Stack x) const {
	// state()
	QSocket::State xret = this->QSocket::state();
	x[0].s_class = (void*)new QSocket::State(xret);
    }
    void x_13(Smoke::Stack x) const {
	// socket()
	int xret = this->QSocket::socket();
	x[0].s_int = (int)xret;
    }
    void x_14(Smoke::Stack x) {
	// setSocket(int)
	this->QSocket::setSocket((int)x[1].s_int);
    }
    void x_15(Smoke::Stack x) {
	// socketDevice()
	QSocketDevice* xret = this->QSocket::socketDevice();
	x[0].s_class = (void*)xret;
    }
    void x_16(Smoke::Stack x) {
	// setSocketDevice(QSocketDevice*)
	this->QSocket::setSocketDevice((QSocketDevice*)x[1].s_class);
    }
    void x_17(Smoke::Stack x) {
	// connectToHost(const QString&, Q_UINT16)
	this->QSocket::connectToHost(*(const QString *)x[1].s_class,*(Q_UINT16 *)x[2].s_class);
    }
    void x_18(Smoke::Stack x) const {
	// peerName()
	QString xret = this->QSocket::peerName();
	x[0].s_class = (void*)new QString(xret);
    }
    void x_19(Smoke::Stack x) {
	// open(int)
	bool xret = this->QSocket::open((int)x[1].s_int);
	x[0].s_bool = (bool)xret;
    }
    void x_20(Smoke::Stack x) {
	// close()
	this->QSocket::close();
    }
    void x_21(Smoke::Stack x) {
	// flush()
	this->QSocket::flush();
    }
    void x_22(Smoke::Stack x) const {
	// size()
	QIODevice::Offset xret = this->QSocket::size();
	x[0].s_class = (void*)new QIODevice::Offset(xret);
    }
    void x_23(Smoke::Stack x) const {
	// at()
	QIODevice::Offset xret = this->QSocket::at();
	x[0].s_class = (void*)new QIODevice::Offset(xret);
    }
    void x_24(Smoke::Stack x) {
	// at(QIODevice::Offset)
	bool xret = this->QSocket::at(*(QIODevice::Offset *)x[1].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_25(Smoke::Stack x) const {
	// atEnd()
	bool xret = this->QSocket::atEnd();
	x[0].s_bool = (bool)xret;
    }
    void x_26(Smoke::Stack x) const {
	// bytesAvailable()
	Q_ULONG xret = this->QSocket::bytesAvailable();
	x[0].s_class = (void*)new Q_ULONG(xret);
    }
    void x_27(Smoke::Stack x) const {
	// waitForMore(int)
	Q_ULONG xret = this->QSocket::waitForMore((int)x[1].s_int);
	x[0].s_class = (void*)new Q_ULONG(xret);
    }
    void x_28(Smoke::Stack x) const {
	// bytesToWrite()
	Q_ULONG xret = this->QSocket::bytesToWrite();
	x[0].s_class = (void*)new Q_ULONG(xret);
    }
    void x_29(Smoke::Stack x) {
	// readBlock(char*, Q_ULONG)
	Q_LONG xret = this->QSocket::readBlock((char*)x[1].s_class,*(Q_ULONG *)x[2].s_class);
	x[0].s_class = (void*)new Q_LONG(xret);
    }
    void x_30(Smoke::Stack x) {
	// writeBlock(const char*, Q_ULONG)
	Q_LONG xret = this->QSocket::writeBlock((const char*)x[1].s_class,*(Q_ULONG *)x[2].s_class);
	x[0].s_class = (void*)new Q_LONG(xret);
    }
    void x_31(Smoke::Stack x) {
	// readLine(char*, Q_ULONG)
	Q_LONG xret = this->QSocket::readLine((char*)x[1].s_class,*(Q_ULONG *)x[2].s_class);
	x[0].s_class = (void*)new Q_LONG(xret);
    }
    void x_32(Smoke::Stack x) {
	// getch()
	int xret = this->QSocket::getch();
	x[0].s_int = (int)xret;
    }
    void x_33(Smoke::Stack x) {
	// putch(int)
	int xret = this->QSocket::putch((int)x[1].s_int);
	x[0].s_int = (int)xret;
    }
    void x_34(Smoke::Stack x) {
	// ungetch(int)
	int xret = this->QSocket::ungetch((int)x[1].s_int);
	x[0].s_int = (int)xret;
    }
    void x_35(Smoke::Stack x) const {
	// canReadLine()
	bool xret = this->QSocket::canReadLine();
	x[0].s_bool = (bool)xret;
    }
    void x_36(Smoke::Stack x) {
	// readLine()
	QString xret = this->QSocket::readLine();
	x[0].s_class = (void*)new QString(xret);
    }
    void x_37(Smoke::Stack x) const {
	// port()
	Q_UINT16 xret = this->QSocket::port();
	x[0].s_class = (void*)new Q_UINT16(xret);
    }
    void x_38(Smoke::Stack x) const {
	// peerPort()
	Q_UINT16 xret = this->QSocket::peerPort();
	x[0].s_class = (void*)new Q_UINT16(xret);
    }
    void x_39(Smoke::Stack x) const {
	// address()
	QHostAddress xret = this->QSocket::address();
	x[0].s_class = (void*)new QHostAddress(xret);
    }
    void x_40(Smoke::Stack x) const {
	// peerAddress()
	QHostAddress xret = this->QSocket::peerAddress();
	x[0].s_class = (void*)new QHostAddress(xret);
    }
    void x_41(Smoke::Stack x) {
	// hostFound()
	this->QSocket::hostFound();
    }
    void x_42(Smoke::Stack x) {
	// connected()
	this->QSocket::connected();
    }
    void x_43(Smoke::Stack x) {
	// connectionClosed()
	this->QSocket::connectionClosed();
    }
    void x_44(Smoke::Stack x) {
	// delayedCloseFinished()
	this->QSocket::delayedCloseFinished();
    }
    void x_45(Smoke::Stack x) {
	// readyRead()
	this->QSocket::readyRead();
    }
    void x_46(Smoke::Stack x) {
	// bytesWritten(int)
	this->QSocket::bytesWritten((int)x[1].s_int);
    }
    void x_47(Smoke::Stack x) {
	// error(int)
	this->QSocket::error((int)x[1].s_int);
    }
    void x_48(Smoke::Stack x) {
	// sn_read(bool)
	this->QSocket::sn_read((bool)x[1].s_bool);
    }
    void x_49(Smoke::Stack x) {
	// sn_read()
	this->QSocket::sn_read();
    }
    void x_50(Smoke::Stack x) {
	// sn_write()
	this->QSocket::sn_write();
    }
    virtual QIODevice::Offset at() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 6973, x)) {
	    QIODevice::Offset *xptr = (QIODevice::Offset *)x[0].s_class;
	    QIODevice::Offset xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QSocket::at();
    }
    virtual bool at(QIODevice::Offset x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(call_method((void*)this, 6974, x)) return (bool)x[0].s_bool;
	return this->QSocket::at(x1);
    }
    virtual bool atEnd() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 6975, x)) return (bool)x[0].s_bool;
	return this->QSocket::atEnd();
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
    virtual void close() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 6970, x)) return;
	this->QSocket::close();
    }
    virtual void connectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 5467, x)) return;
	this->QObject::connectNotify(x1);
    }
    virtual void connectToHost(const QString& x1, Q_UINT16 x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)&x2;
	if(call_method((void*)this, 6967, x)) return;
	this->QSocket::connectToHost(x1, x2);
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
    virtual void flush() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 6971, x)) return;
	this->QSocket::flush();
    }
    virtual int getch() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 6982, x)) return (int)x[0].s_int;
	return this->QSocket::getch();
    }
    virtual void insertChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 5427, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual bool open(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(call_method((void*)this, 6969, x)) return (bool)x[0].s_bool;
	return this->QSocket::open(x1);
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
    virtual int putch(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(call_method((void*)this, 6983, x)) return (int)x[0].s_int;
	return this->QSocket::putch(x1);
    }
    virtual QByteArray readAll() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 3393, x)) {
	    QByteArray *xptr = (QByteArray *)x[0].s_class;
	    QByteArray xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QIODevice::readAll();
    }
    virtual Q_LONG readBlock(char* x1, Q_ULONG x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)&x2;
	if(call_method((void*)this, 6979, x)) {
	    Q_LONG *xptr = (Q_LONG *)x[0].s_class;
	    Q_LONG xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QSocket::readBlock(x1, x2);
    }
    virtual QString readLine() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 6986, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QSocket::readLine();
    }
    virtual Q_LONG readLine(char* x1, Q_ULONG x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)&x2;
	if(call_method((void*)this, 6981, x)) {
	    Q_LONG *xptr = (Q_LONG *)x[0].s_class;
	    Q_LONG xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QSocket::readLine(x1, x2);
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
	if(call_method((void*)this, 6964, x)) return;
	this->QSocket::setSocket(x1);
    }
    virtual void setSocketDevice(QSocketDevice* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 6966, x)) return;
	this->QSocket::setSocketDevice(x1);
    }
    virtual QIODevice::Offset size() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 6972, x)) {
	    QIODevice::Offset *xptr = (QIODevice::Offset *)x[0].s_class;
	    QIODevice::Offset xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QSocket::size();
    }
    virtual void sn_read(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 6998, x)) return;
	this->QSocket::sn_read(x1);
    }
    virtual void sn_write() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 7000, x)) return;
	this->QSocket::sn_write();
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 5464, x)) return;
	this->QObject::timerEvent(x1);
    }
    virtual int ungetch(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(call_method((void*)this, 6984, x)) return (int)x[0].s_int;
	return this->QSocket::ungetch(x1);
    }
    virtual Q_LONG writeBlock(const char* x1, Q_ULONG x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)&x2;
	if(call_method((void*)this, 6980, x)) {
	    Q_LONG *xptr = (Q_LONG *)x[0].s_class;
	    Q_LONG xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QSocket::writeBlock(x1, x2);
    }
    ~x_QSocket() {}
};
void xcall_QSocket(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QSocket *xself = (x_QSocket*)obj;
    switch(xi) {
	case 0: x_QSocket::x_0(args);	break;
	case 1: x_QSocket::x_1(args);	break;
	case 2: x_QSocket::x_2(args);	break;
	case 3: x_QSocket::x_3(args);	break;
	case 4: x_QSocket::x_4(args);	break;
	case 5: x_QSocket::x_5(args);	break;
	case 6: x_QSocket::x_6(args);	break;
	case 7: x_QSocket::x_7(args);	break;
	case 8: x_QSocket::x_8(args);	break;
	case 9: x_QSocket::x_9(args);	break;
	case 10: x_QSocket::x_10(args);	break;
	case 11: x_QSocket::x_11(args);	break;
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
	case 30: xself->x_30(args);	break;
	case 31: xself->x_31(args);	break;
	case 32: xself->x_32(args);	break;
	case 33: xself->x_33(args);	break;
	case 34: xself->x_34(args);	break;
	case 35: xself->x_35(args);	break;
	case 36: xself->x_36(args);	break;
	case 37: xself->x_37(args);	break;
	case 38: xself->x_38(args);	break;
	case 39: xself->x_39(args);	break;
	case 40: xself->x_40(args);	break;
	case 41: xself->x_41(args);	break;
	case 42: xself->x_42(args);	break;
	case 43: xself->x_43(args);	break;
	case 44: xself->x_44(args);	break;
	case 45: xself->x_45(args);	break;
	case 46: xself->x_46(args);	break;
	case 47: xself->x_47(args);	break;
	case 48: xself->x_48(args);	break;
	case 49: xself->x_49(args);	break;
	case 50: xself->x_50(args);	break;
	case 51: delete (QSocket*)xself;	break;
    }
}
