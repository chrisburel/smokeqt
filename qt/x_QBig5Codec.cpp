//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qbig5codec.h>
#include <qstring.h>
#include <qcstring.h>

class x_QBig5Codec {
private:
    QBig5Codec *xthis;
public:
    x_QBig5Codec(void *x) : xthis((QBig5Codec*)x) {}
    void x_0(Smoke::Stack x) const {
	// mibEnum()
	int xret = xthis->QBig5Codec::mibEnum();
	x[0].s_int = (int)xret;
    }
    void x_1(Smoke::Stack x) const {
	// name()
	const char* xret = xthis->QBig5Codec::name();
	x[0].s_class = (void*)xret;
    }
    void x_2(Smoke::Stack x) const {
	// makeDecoder()
	QTextDecoder* xret = xthis->QBig5Codec::makeDecoder();
	x[0].s_class = (void*)xret;
    }
    void x_3(Smoke::Stack x) const {
	// fromUnicode(const QString&, int&)
	QCString xret = xthis->QBig5Codec::fromUnicode(*(const QString *)x[1].s_class,*(int *)x[2].s_class);
	x[0].s_class = (void*)new QCString(xret);
    }
    void x_4(Smoke::Stack x) const {
	// toUnicode(const char*, int)
	QString xret = xthis->QBig5Codec::toUnicode((const char*)x[1].s_class,(int)x[2].s_int);
	x[0].s_class = (void*)new QString(xret);
    }
    void x_5(Smoke::Stack x) const {
	// heuristicContentMatch(const char*, int)
	int xret = xthis->QBig5Codec::heuristicContentMatch((const char*)x[1].s_class,(int)x[2].s_int);
	x[0].s_int = (int)xret;
    }
    void x_6(Smoke::Stack x) const {
	// heuristicNameMatch(const char*)
	int xret = xthis->QBig5Codec::heuristicNameMatch((const char*)x[1].s_class);
	x[0].s_int = (int)xret;
    }
    ~x_QBig5Codec() {}
};
void xcall_QBig5Codec(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QBig5Codec xtmp(obj), *xself = &xtmp;
    switch(xi) {
	case 0: xself->x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
    }
}
