//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qstring.h>
#include <qcstring.h>
#include <qeuckrcodec.h>

class x_QEucKrCodec {
private:
    QEucKrCodec *xthis;
public:
    x_QEucKrCodec(void *x) : xthis((QEucKrCodec*)x) {}
    void x_0(Smoke::Stack x) const {
	// mibEnum()
	int xret = xthis->QEucKrCodec::mibEnum();
	x[0].s_int = (int)xret;
    }
    void x_1(Smoke::Stack x) const {
	// name()
	const char* xret = xthis->QEucKrCodec::name();
	x[0].s_class = (void*)xret;
    }
    void x_2(Smoke::Stack x) const {
	// mimeName()
	const char* xret = xthis->QEucKrCodec::mimeName();
	x[0].s_class = (void*)xret;
    }
    void x_3(Smoke::Stack x) const {
	// makeDecoder()
	QTextDecoder* xret = xthis->QEucKrCodec::makeDecoder();
	x[0].s_class = (void*)xret;
    }
    void x_4(Smoke::Stack x) const {
	// fromUnicode(const QString&, int&)
	QCString xret = xthis->QEucKrCodec::fromUnicode(*(const QString *)x[1].s_class,*(int *)x[2].s_class);
	x[0].s_class = (void*)new QCString(xret);
    }
    void x_5(Smoke::Stack x) const {
	// toUnicode(const char*, int)
	QString xret = xthis->QEucKrCodec::toUnicode((const char*)x[1].s_class,(int)x[2].s_int);
	x[0].s_class = (void*)new QString(xret);
    }
    void x_6(Smoke::Stack x) const {
	// heuristicContentMatch(const char*, int)
	int xret = xthis->QEucKrCodec::heuristicContentMatch((const char*)x[1].s_class,(int)x[2].s_int);
	x[0].s_int = (int)xret;
    }
    void x_7(Smoke::Stack x) const {
	// heuristicNameMatch(const char*)
	int xret = xthis->QEucKrCodec::heuristicNameMatch((const char*)x[1].s_class);
	x[0].s_int = (int)xret;
    }
    ~x_QEucKrCodec() {}
};
void xcall_QEucKrCodec(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QEucKrCodec xtmp(obj), *xself = &xtmp;
    switch(xi) {
	case 0: xself->x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: xself->x_7(args);	break;
    }
}
