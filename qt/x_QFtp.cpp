//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qvariant.h>
#include <qurlinfo.h>
#include <qftp.h>
#include <qstring.h>

class x_QFtp : public QFtp {
public:
    static void x_0(Smoke::Stack x) {
	// QFtp()
	x_QFtp* xret = new x_QFtp();
	x[0].s_class = (void*)xret;
    }
    x_QFtp() : QFtp() {
    }
    void x_1(Smoke::Stack x) const {
	// supportedOperations()
	int xret = this->QFtp::supportedOperations();
	x[0].s_int = (int)xret;
    }
    void x_2(Smoke::Stack x) {
	// parseDir(const QString&, QUrlInfo&)
	this->QFtp::parseDir(*(const QString *)x[1].s_class,*(QUrlInfo *)x[2].s_class);
    }
    void x_3(Smoke::Stack x) {
	// operationListChildren(QNetworkOperation*)
	this->QFtp::operationListChildren((QNetworkOperation*)x[1].s_class);
    }
    void x_4(Smoke::Stack x) {
	// operationMkDir(QNetworkOperation*)
	this->QFtp::operationMkDir((QNetworkOperation*)x[1].s_class);
    }
    void x_5(Smoke::Stack x) {
	// operationRemove(QNetworkOperation*)
	this->QFtp::operationRemove((QNetworkOperation*)x[1].s_class);
    }
    void x_6(Smoke::Stack x) {
	// operationRename(QNetworkOperation*)
	this->QFtp::operationRename((QNetworkOperation*)x[1].s_class);
    }
    void x_7(Smoke::Stack x) {
	// operationGet(QNetworkOperation*)
	this->QFtp::operationGet((QNetworkOperation*)x[1].s_class);
    }
    void x_8(Smoke::Stack x) {
	// operationPut(QNetworkOperation*)
	this->QFtp::operationPut((QNetworkOperation*)x[1].s_class);
    }
    void x_9(Smoke::Stack x) {
	// hostFound()
	this->QFtp::hostFound();
    }
    void x_10(Smoke::Stack x) {
	// connected()
	this->QFtp::connected();
    }
    void x_11(Smoke::Stack x) {
	// closed()
	this->QFtp::closed();
    }
    void x_12(Smoke::Stack x) {
	// readyRead()
	this->QFtp::readyRead();
    }
    void x_13(Smoke::Stack x) {
	// dataHostFound()
	this->QFtp::dataHostFound();
    }
    void x_14(Smoke::Stack x) {
	// dataConnected()
	this->QFtp::dataConnected();
    }
    void x_15(Smoke::Stack x) {
	// dataClosed()
	this->QFtp::dataClosed();
    }
    void x_16(Smoke::Stack x) {
	// dataReadyRead()
	this->QFtp::dataReadyRead();
    }
    void x_17(Smoke::Stack x) {
	// dataBytesWritten(int)
	this->QFtp::dataBytesWritten((int)x[1].s_int);
    }
    void x_18(Smoke::Stack x) {
	// error(int)
	this->QFtp::error((int)x[1].s_int);
    }
    virtual void addOperation(QNetworkOperation* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 5368, x)) return;
	this->QNetworkProtocol::addOperation(x1);
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
    virtual void clearOperationQueue() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 5371, x)) return;
	this->QNetworkProtocol::clearOperationQueue();
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
    virtual void operationGet(QNetworkOperation* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 2952, x)) return;
	this->QFtp::operationGet(x1);
    }
    virtual void operationListChildren(QNetworkOperation* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 2948, x)) return;
	this->QFtp::operationListChildren(x1);
    }
    virtual void operationMkDir(QNetworkOperation* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 2949, x)) return;
	this->QFtp::operationMkDir(x1);
    }
    virtual void operationPut(QNetworkOperation* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 2953, x)) return;
	this->QFtp::operationPut(x1);
    }
    virtual void operationPutChunk(QNetworkOperation* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 5393, x)) return;
	this->QNetworkProtocol::operationPutChunk(x1);
    }
    virtual void operationRemove(QNetworkOperation* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 2950, x)) return;
	this->QFtp::operationRemove(x1);
    }
    virtual void operationRename(QNetworkOperation* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 2951, x)) return;
	this->QFtp::operationRename(x1);
    }
    virtual void processOperation(QNetworkOperation* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 5386, x)) return;
	this->QNetworkProtocol::processOperation(x1);
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
    virtual void setAutoDelete(bool x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_bool = (bool)x1;
	x[2].s_int = (int)x2;
	if(call_method((void*)this, 5364, x)) return;
	this->QNetworkProtocol::setAutoDelete(x1, x2);
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
    virtual void setUrl(QUrlOperator* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 5363, x)) return;
	this->QNetworkProtocol::setUrl(x1);
    }
    virtual void stop() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 5372, x)) return;
	this->QNetworkProtocol::stop();
    }
    virtual int supportedOperations() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 2946, x)) return (int)x[0].s_int;
	return this->QFtp::supportedOperations();
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 5464, x)) return;
	this->QObject::timerEvent(x1);
    }
    ~x_QFtp() {}
};
void xcall_QFtp(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QFtp *xself = (x_QFtp*)obj;
    switch(xi) {
	case 0: x_QFtp::x_0(args);	break;
	case 1: xself->x_1(args);	break;
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
	case 19: delete (QFtp*)xself;	break;
    }
}
