//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qstring.h>
#include <qxml.h>

class x_QXmlDefaultHandler : public QXmlDefaultHandler {
public:
    static void x_0(Smoke::Stack x) {
	// QXmlDefaultHandler()
	x_QXmlDefaultHandler* xret = new x_QXmlDefaultHandler();
	x[0].s_class = (void*)xret;
    }
    x_QXmlDefaultHandler() : QXmlDefaultHandler() {
    }
    void x_1(Smoke::Stack x) {
	// setDocumentLocator(QXmlLocator*)
	this->QXmlDefaultHandler::setDocumentLocator((QXmlLocator*)x[1].s_class);
    }
    void x_2(Smoke::Stack x) {
	// startDocument()
	bool xret = this->QXmlDefaultHandler::startDocument();
	x[0].s_bool = (bool)xret;
    }
    void x_3(Smoke::Stack x) {
	// endDocument()
	bool xret = this->QXmlDefaultHandler::endDocument();
	x[0].s_bool = (bool)xret;
    }
    void x_4(Smoke::Stack x) {
	// startPrefixMapping(const QString&, const QString&)
	bool xret = this->QXmlDefaultHandler::startPrefixMapping(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_5(Smoke::Stack x) {
	// endPrefixMapping(const QString&)
	bool xret = this->QXmlDefaultHandler::endPrefixMapping(*(const QString *)x[1].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_6(Smoke::Stack x) {
	// startElement(const QString&, const QString&, const QString&, const QXmlAttributes&)
	bool xret = this->QXmlDefaultHandler::startElement(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class,*(const QString *)x[3].s_class,*(const QXmlAttributes *)x[4].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_7(Smoke::Stack x) {
	// endElement(const QString&, const QString&, const QString&)
	bool xret = this->QXmlDefaultHandler::endElement(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class,*(const QString *)x[3].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_8(Smoke::Stack x) {
	// characters(const QString&)
	bool xret = this->QXmlDefaultHandler::characters(*(const QString *)x[1].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_9(Smoke::Stack x) {
	// ignorableWhitespace(const QString&)
	bool xret = this->QXmlDefaultHandler::ignorableWhitespace(*(const QString *)x[1].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_10(Smoke::Stack x) {
	// processingInstruction(const QString&, const QString&)
	bool xret = this->QXmlDefaultHandler::processingInstruction(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_11(Smoke::Stack x) {
	// skippedEntity(const QString&)
	bool xret = this->QXmlDefaultHandler::skippedEntity(*(const QString *)x[1].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_12(Smoke::Stack x) {
	// warning(const QXmlParseException&)
	bool xret = this->QXmlDefaultHandler::warning(*(const QXmlParseException *)x[1].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_13(Smoke::Stack x) {
	// error(const QXmlParseException&)
	bool xret = this->QXmlDefaultHandler::error(*(const QXmlParseException *)x[1].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_14(Smoke::Stack x) {
	// fatalError(const QXmlParseException&)
	bool xret = this->QXmlDefaultHandler::fatalError(*(const QXmlParseException *)x[1].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_15(Smoke::Stack x) {
	// notationDecl(const QString&, const QString&, const QString&)
	bool xret = this->QXmlDefaultHandler::notationDecl(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class,*(const QString *)x[3].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_16(Smoke::Stack x) {
	// unparsedEntityDecl(const QString&, const QString&, const QString&, const QString&)
	bool xret = this->QXmlDefaultHandler::unparsedEntityDecl(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class,*(const QString *)x[3].s_class,*(const QString *)x[4].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_17(Smoke::Stack x) {
	// startDTD(const QString&, const QString&, const QString&)
	bool xret = this->QXmlDefaultHandler::startDTD(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class,*(const QString *)x[3].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_18(Smoke::Stack x) {
	// endDTD()
	bool xret = this->QXmlDefaultHandler::endDTD();
	x[0].s_bool = (bool)xret;
    }
    void x_19(Smoke::Stack x) {
	// startEntity(const QString&)
	bool xret = this->QXmlDefaultHandler::startEntity(*(const QString *)x[1].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_20(Smoke::Stack x) {
	// endEntity(const QString&)
	bool xret = this->QXmlDefaultHandler::endEntity(*(const QString *)x[1].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_21(Smoke::Stack x) {
	// startCDATA()
	bool xret = this->QXmlDefaultHandler::startCDATA();
	x[0].s_bool = (bool)xret;
    }
    void x_22(Smoke::Stack x) {
	// endCDATA()
	bool xret = this->QXmlDefaultHandler::endCDATA();
	x[0].s_bool = (bool)xret;
    }
    void x_23(Smoke::Stack x) {
	// comment(const QString&)
	bool xret = this->QXmlDefaultHandler::comment(*(const QString *)x[1].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_24(Smoke::Stack x) {
	// attributeDecl(const QString&, const QString&, const QString&, const QString&, const QString&)
	bool xret = this->QXmlDefaultHandler::attributeDecl(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class,*(const QString *)x[3].s_class,*(const QString *)x[4].s_class,*(const QString *)x[5].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_25(Smoke::Stack x) {
	// internalEntityDecl(const QString&, const QString&)
	bool xret = this->QXmlDefaultHandler::internalEntityDecl(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_26(Smoke::Stack x) {
	// externalEntityDecl(const QString&, const QString&, const QString&)
	bool xret = this->QXmlDefaultHandler::externalEntityDecl(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class,*(const QString *)x[3].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_27(Smoke::Stack x) {
	// errorString()
	QString xret = this->QXmlDefaultHandler::errorString();
	x[0].s_class = (void*)new QString(xret);
    }
    virtual bool attributeDecl(const QString& x1, const QString& x2, const QString& x3, const QString& x4, const QString& x5) {
	Smoke::StackItem x[6];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)&x2;
	x[3].s_class = (void*)&x3;
	x[4].s_class = (void*)&x4;
	x[5].s_class = (void*)&x5;
	if(call_method((void*)this, 9938, x)) return (bool)x[0].s_bool;
	return this->QXmlDefaultHandler::attributeDecl(x1, x2, x3, x4, x5);
    }
    virtual bool characters(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(call_method((void*)this, 9921, x)) return (bool)x[0].s_bool;
	return this->QXmlDefaultHandler::characters(x1);
    }
    virtual bool comment(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(call_method((void*)this, 9937, x)) return (bool)x[0].s_bool;
	return this->QXmlDefaultHandler::comment(x1);
    }
    virtual bool endCDATA() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9936, x)) return (bool)x[0].s_bool;
	return this->QXmlDefaultHandler::endCDATA();
    }
    virtual bool endDTD() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9932, x)) return (bool)x[0].s_bool;
	return this->QXmlDefaultHandler::endDTD();
    }
    virtual bool endDocument() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9916, x)) return (bool)x[0].s_bool;
	return this->QXmlDefaultHandler::endDocument();
    }
    virtual bool endElement(const QString& x1, const QString& x2, const QString& x3) {
	Smoke::StackItem x[4];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)&x2;
	x[3].s_class = (void*)&x3;
	if(call_method((void*)this, 9920, x)) return (bool)x[0].s_bool;
	return this->QXmlDefaultHandler::endElement(x1, x2, x3);
    }
    virtual bool endEntity(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(call_method((void*)this, 9934, x)) return (bool)x[0].s_bool;
	return this->QXmlDefaultHandler::endEntity(x1);
    }
    virtual bool endPrefixMapping(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(call_method((void*)this, 9918, x)) return (bool)x[0].s_bool;
	return this->QXmlDefaultHandler::endPrefixMapping(x1);
    }
    virtual bool error(const QXmlParseException& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(call_method((void*)this, 9926, x)) return (bool)x[0].s_bool;
	return this->QXmlDefaultHandler::error(x1);
    }
    virtual QString errorString() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9941, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QXmlDefaultHandler::errorString();
    }
    virtual bool externalEntityDecl(const QString& x1, const QString& x2, const QString& x3) {
	Smoke::StackItem x[4];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)&x2;
	x[3].s_class = (void*)&x3;
	if(call_method((void*)this, 9940, x)) return (bool)x[0].s_bool;
	return this->QXmlDefaultHandler::externalEntityDecl(x1, x2, x3);
    }
    virtual bool fatalError(const QXmlParseException& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(call_method((void*)this, 9927, x)) return (bool)x[0].s_bool;
	return this->QXmlDefaultHandler::fatalError(x1);
    }
    virtual bool ignorableWhitespace(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(call_method((void*)this, 9922, x)) return (bool)x[0].s_bool;
	return this->QXmlDefaultHandler::ignorableWhitespace(x1);
    }
    virtual bool internalEntityDecl(const QString& x1, const QString& x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)&x2;
	if(call_method((void*)this, 9939, x)) return (bool)x[0].s_bool;
	return this->QXmlDefaultHandler::internalEntityDecl(x1, x2);
    }
    virtual bool notationDecl(const QString& x1, const QString& x2, const QString& x3) {
	Smoke::StackItem x[4];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)&x2;
	x[3].s_class = (void*)&x3;
	if(call_method((void*)this, 9928, x)) return (bool)x[0].s_bool;
	return this->QXmlDefaultHandler::notationDecl(x1, x2, x3);
    }
    virtual bool processingInstruction(const QString& x1, const QString& x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)&x2;
	if(call_method((void*)this, 9923, x)) return (bool)x[0].s_bool;
	return this->QXmlDefaultHandler::processingInstruction(x1, x2);
    }
    virtual bool resolveEntity(const QString& x1, const QString& x2, QXmlInputSource*& x3) {
	Smoke::StackItem x[4];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)&x2;
	x[3].s_class = (void*)&x3;
	if(call_method((void*)this, 9930, x)) return (bool)x[0].s_bool;
	return this->QXmlDefaultHandler::resolveEntity(x1, x2, x3);
    }
    virtual void setDocumentLocator(QXmlLocator* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 9914, x)) return;
	this->QXmlDefaultHandler::setDocumentLocator(x1);
    }
    virtual bool skippedEntity(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(call_method((void*)this, 9924, x)) return (bool)x[0].s_bool;
	return this->QXmlDefaultHandler::skippedEntity(x1);
    }
    virtual bool startCDATA() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9935, x)) return (bool)x[0].s_bool;
	return this->QXmlDefaultHandler::startCDATA();
    }
    virtual bool startDTD(const QString& x1, const QString& x2, const QString& x3) {
	Smoke::StackItem x[4];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)&x2;
	x[3].s_class = (void*)&x3;
	if(call_method((void*)this, 9931, x)) return (bool)x[0].s_bool;
	return this->QXmlDefaultHandler::startDTD(x1, x2, x3);
    }
    virtual bool startDocument() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9915, x)) return (bool)x[0].s_bool;
	return this->QXmlDefaultHandler::startDocument();
    }
    virtual bool startElement(const QString& x1, const QString& x2, const QString& x3, const QXmlAttributes& x4) {
	Smoke::StackItem x[5];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)&x2;
	x[3].s_class = (void*)&x3;
	x[4].s_class = (void*)&x4;
	if(call_method((void*)this, 9919, x)) return (bool)x[0].s_bool;
	return this->QXmlDefaultHandler::startElement(x1, x2, x3, x4);
    }
    virtual bool startEntity(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(call_method((void*)this, 9933, x)) return (bool)x[0].s_bool;
	return this->QXmlDefaultHandler::startEntity(x1);
    }
    virtual bool startPrefixMapping(const QString& x1, const QString& x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)&x2;
	if(call_method((void*)this, 9917, x)) return (bool)x[0].s_bool;
	return this->QXmlDefaultHandler::startPrefixMapping(x1, x2);
    }
    virtual bool unparsedEntityDecl(const QString& x1, const QString& x2, const QString& x3, const QString& x4) {
	Smoke::StackItem x[5];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)&x2;
	x[3].s_class = (void*)&x3;
	x[4].s_class = (void*)&x4;
	if(call_method((void*)this, 9929, x)) return (bool)x[0].s_bool;
	return this->QXmlDefaultHandler::unparsedEntityDecl(x1, x2, x3, x4);
    }
    virtual bool warning(const QXmlParseException& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(call_method((void*)this, 9925, x)) return (bool)x[0].s_bool;
	return this->QXmlDefaultHandler::warning(x1);
    }
    ~x_QXmlDefaultHandler() {}
};
void xcall_QXmlDefaultHandler(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QXmlDefaultHandler *xself = (x_QXmlDefaultHandler*)obj;
    switch(xi) {
	case 0: x_QXmlDefaultHandler::x_0(args);	break;
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
	case 19: xself->x_19(args);	break;
	case 20: xself->x_20(args);	break;
	case 21: xself->x_21(args);	break;
	case 22: xself->x_22(args);	break;
	case 23: xself->x_23(args);	break;
	case 24: xself->x_24(args);	break;
	case 25: xself->x_25(args);	break;
	case 26: xself->x_26(args);	break;
	case 27: xself->x_27(args);	break;
	case 28: delete (QXmlDefaultHandler*)xself;	break;
    }
}
