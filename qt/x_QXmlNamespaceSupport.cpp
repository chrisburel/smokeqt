//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qstring.h>
#include <qxml.h>
#include <qstringlist.h>

class x_QXmlNamespaceSupport : public QXmlNamespaceSupport {
public:
    static void x_0(Smoke::Stack x) {
	// QXmlNamespaceSupport()
	x_QXmlNamespaceSupport* xret = new x_QXmlNamespaceSupport();
	x[0].s_class = (void*)xret;
    }
    x_QXmlNamespaceSupport() : QXmlNamespaceSupport() {
    }
    void x_1(Smoke::Stack x) {
	// setPrefix(const QString&, const QString&)
	this->QXmlNamespaceSupport::setPrefix(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class);
    }
    void x_2(Smoke::Stack x) const {
	// prefix(const QString&)
	QString xret = this->QXmlNamespaceSupport::prefix(*(const QString *)x[1].s_class);
	x[0].s_class = (void*)new QString(xret);
    }
    void x_3(Smoke::Stack x) const {
	// uri(const QString&)
	QString xret = this->QXmlNamespaceSupport::uri(*(const QString *)x[1].s_class);
	x[0].s_class = (void*)new QString(xret);
    }
    void x_4(Smoke::Stack x) const {
	// splitName(const QString&, QString&, QString&)
	this->QXmlNamespaceSupport::splitName(*(const QString *)x[1].s_class,*(QString *)x[2].s_class,*(QString *)x[3].s_class);
    }
    void x_5(Smoke::Stack x) const {
	// processName(const QString&, bool, QString&, QString&)
	this->QXmlNamespaceSupport::processName(*(const QString *)x[1].s_class,(bool)x[2].s_bool,*(QString *)x[3].s_class,*(QString *)x[4].s_class);
    }
    void x_6(Smoke::Stack x) const {
	// prefixes()
	QStringList xret = this->QXmlNamespaceSupport::prefixes();
	x[0].s_class = (void*)new QStringList(xret);
    }
    void x_7(Smoke::Stack x) const {
	// prefixes(const QString&)
	QStringList xret = this->QXmlNamespaceSupport::prefixes(*(const QString *)x[1].s_class);
	x[0].s_class = (void*)new QStringList(xret);
    }
    void x_8(Smoke::Stack x) {
	// pushContext()
	this->QXmlNamespaceSupport::pushContext();
    }
    void x_9(Smoke::Stack x) {
	// popContext()
	this->QXmlNamespaceSupport::popContext();
    }
    void x_10(Smoke::Stack x) {
	// reset()
	this->QXmlNamespaceSupport::reset();
    }
    ~x_QXmlNamespaceSupport() {}
};
void xcall_QXmlNamespaceSupport(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QXmlNamespaceSupport *xself = (x_QXmlNamespaceSupport*)obj;
    switch(xi) {
	case 0: x_QXmlNamespaceSupport::x_0(args);	break;
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
	case 11: delete (QXmlNamespaceSupport*)xself;	break;
    }
}
