//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qstring.h>
#include <qsqlerror.h>

class x_QSqlError : public QSqlError {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_enum = (long)QSqlError::None;
    }
    static void x_1(Smoke::Stack x) {
	x[0].s_enum = (long)QSqlError::Connection;
    }
    static void x_2(Smoke::Stack x) {
	x[0].s_enum = (long)QSqlError::Statement;
    }
    static void x_3(Smoke::Stack x) {
	x[0].s_enum = (long)QSqlError::Transaction;
    }
    static void x_4(Smoke::Stack x) {
	x[0].s_enum = (long)QSqlError::Unknown;
    }
    static void x_5(Smoke::Stack x) {
	// QSqlError(const QString&, const QString&, int, int)
	x_QSqlError* xret = new x_QSqlError(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class,(int)x[3].s_int,(int)x[4].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QSqlError(const QString& x1, const QString& x2, int x3, int x4) : QSqlError(x1, x2, x3, x4) {
    }
    static void x_6(Smoke::Stack x) {
	// QSqlError(const QString&, const QString&, int)
	x_QSqlError* xret = new x_QSqlError(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class,(int)x[3].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QSqlError(const QString& x1, const QString& x2, int x3) : QSqlError(x1, x2, x3) {
    }
    static void x_7(Smoke::Stack x) {
	// QSqlError(const QString&, const QString&)
	x_QSqlError* xret = new x_QSqlError(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QSqlError(const QString& x1, const QString& x2) : QSqlError(x1, x2) {
    }
    static void x_8(Smoke::Stack x) {
	// QSqlError(const QString&)
	x_QSqlError* xret = new x_QSqlError(*(const QString *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QSqlError(const QString& x1) : QSqlError(x1) {
    }
    static void x_9(Smoke::Stack x) {
	// QSqlError()
	x_QSqlError* xret = new x_QSqlError();
	x[0].s_class = (void*)xret;
    }
    x_QSqlError() : QSqlError() {
    }
    static void x_10(Smoke::Stack x) {
	// QSqlError(const QSqlError&)
	x_QSqlError* xret = new x_QSqlError(*(const QSqlError *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QSqlError(const QSqlError& x1) : QSqlError(x1) {
    }
    void x_11(Smoke::Stack x) {
	// operator=(const QSqlError&)
	QSqlError& xret = this->QSqlError::operator=(*(const QSqlError *)x[1].s_class);
	x[0].s_class = (void*)&xret;
    }
    void x_12(Smoke::Stack x) const {
	// driverText()
	QString xret = this->QSqlError::driverText();
	x[0].s_class = (void*)new QString(xret);
    }
    void x_13(Smoke::Stack x) {
	// setDriverText(const QString&)
	this->QSqlError::setDriverText(*(const QString *)x[1].s_class);
    }
    void x_14(Smoke::Stack x) const {
	// databaseText()
	QString xret = this->QSqlError::databaseText();
	x[0].s_class = (void*)new QString(xret);
    }
    void x_15(Smoke::Stack x) {
	// setDatabaseText(const QString&)
	this->QSqlError::setDatabaseText(*(const QString *)x[1].s_class);
    }
    void x_16(Smoke::Stack x) const {
	// type()
	int xret = this->QSqlError::type();
	x[0].s_int = (int)xret;
    }
    void x_17(Smoke::Stack x) {
	// setType(int)
	this->QSqlError::setType((int)x[1].s_int);
    }
    void x_18(Smoke::Stack x) const {
	// number()
	int xret = this->QSqlError::number();
	x[0].s_int = (int)xret;
    }
    void x_19(Smoke::Stack x) {
	// setNumber(int)
	this->QSqlError::setNumber((int)x[1].s_int);
    }
    virtual void setDatabaseText(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(call_method((void*)this, 7402, x)) return;
	this->QSqlError::setDatabaseText(x1);
    }
    virtual void setDriverText(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(call_method((void*)this, 7400, x)) return;
	this->QSqlError::setDriverText(x1);
    }
    virtual void setNumber(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(call_method((void*)this, 7406, x)) return;
	this->QSqlError::setNumber(x1);
    }
    virtual void setType(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(call_method((void*)this, 7404, x)) return;
	this->QSqlError::setType(x1);
    }
    ~x_QSqlError() {}
};
void xcall_QSqlError(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QSqlError *xself = (x_QSqlError*)obj;
    switch(xi) {
	case 0: x_QSqlError::x_0(args);	break;
	case 1: x_QSqlError::x_1(args);	break;
	case 2: x_QSqlError::x_2(args);	break;
	case 3: x_QSqlError::x_3(args);	break;
	case 4: x_QSqlError::x_4(args);	break;
	case 5: x_QSqlError::x_5(args);	break;
	case 6: x_QSqlError::x_6(args);	break;
	case 7: x_QSqlError::x_7(args);	break;
	case 8: x_QSqlError::x_8(args);	break;
	case 9: x_QSqlError::x_9(args);	break;
	case 10: x_QSqlError::x_10(args);	break;
	case 11: xself->x_11(args);	break;
	case 12: xself->x_12(args);	break;
	case 13: xself->x_13(args);	break;
	case 14: xself->x_14(args);	break;
	case 15: xself->x_15(args);	break;
	case 16: xself->x_16(args);	break;
	case 17: xself->x_17(args);	break;
	case 18: xself->x_18(args);	break;
	case 19: xself->x_19(args);	break;
	case 20: delete (QSqlError*)xself;	break;
    }
}
