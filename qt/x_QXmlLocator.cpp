//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qxml.h>

class x_QXmlLocator : public QXmlLocator {
public:
    static void x_0(Smoke::Stack x) {
	// QXmlLocator()
	x_QXmlLocator* xret = new x_QXmlLocator();
	x[0].s_class = (void*)xret;
    }
    x_QXmlLocator() : QXmlLocator() {
    }
    void x_1(Smoke::Stack x) {
	// columnNumber()
	int xret = this->QXmlLocator::columnNumber();
	x[0].s_int = (int)xret;
    }
    void x_2(Smoke::Stack x) {
	// lineNumber()
	int xret = this->QXmlLocator::lineNumber();
	x[0].s_int = (int)xret;
    }
    virtual int columnNumber() {
	Smoke::StackItem x[1];
	call_method_abstract((void*)this, 9971, x);
return (int)x[0].s_int;
	// ABSTRACT
    }
    virtual int lineNumber() {
	Smoke::StackItem x[1];
	call_method_abstract((void*)this, 9972, x);
return (int)x[0].s_int;
	// ABSTRACT
    }
    ~x_QXmlLocator() {}
};
void xcall_QXmlLocator(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QXmlLocator *xself = (x_QXmlLocator*)obj;
    switch(xi) {
	case 0: x_QXmlLocator::x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: delete (QXmlLocator*)xself;	break;
    }
}
