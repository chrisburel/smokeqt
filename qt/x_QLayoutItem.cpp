//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qsizepolicy.h>
#include <qlayout.h>
#include <qrect.h>
#include <qsize.h>

class x_QLayoutItem : public QLayoutItem {
public:
    static void x_0(Smoke::Stack x) {
	// QLayoutItem(int)
	x_QLayoutItem* xret = new x_QLayoutItem((int)x[1].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QLayoutItem(int x1) : QLayoutItem(x1) {
    }
    static void x_1(Smoke::Stack x) {
	// QLayoutItem()
	x_QLayoutItem* xret = new x_QLayoutItem();
	x[0].s_class = (void*)xret;
    }
    x_QLayoutItem() : QLayoutItem() {
    }
    void x_2(Smoke::Stack x) const {
	// sizeHint()
	QSize xret = this->QLayoutItem::sizeHint();
	x[0].s_class = (void*)new QSize(xret);
    }
    void x_3(Smoke::Stack x) const {
	// minimumSize()
	QSize xret = this->QLayoutItem::minimumSize();
	x[0].s_class = (void*)new QSize(xret);
    }
    void x_4(Smoke::Stack x) const {
	// maximumSize()
	QSize xret = this->QLayoutItem::maximumSize();
	x[0].s_class = (void*)new QSize(xret);
    }
    void x_5(Smoke::Stack x) const {
	// expanding()
	QSizePolicy::ExpandData xret = this->QLayoutItem::expanding();
	x[0].s_class = (void*)new QSizePolicy::ExpandData(xret);
    }
    void x_6(Smoke::Stack x) {
	// setGeometry(const QRect&)
	this->QLayoutItem::setGeometry(*(const QRect *)x[1].s_class);
    }
    void x_7(Smoke::Stack x) const {
	// geometry()
	QRect xret = this->QLayoutItem::geometry();
	x[0].s_class = (void*)new QRect(xret);
    }
    void x_8(Smoke::Stack x) const {
	// isEmpty()
	bool xret = this->QLayoutItem::isEmpty();
	x[0].s_bool = (bool)xret;
    }
    void x_9(Smoke::Stack x) const {
	// hasHeightForWidth()
	bool xret = this->QLayoutItem::hasHeightForWidth();
	x[0].s_bool = (bool)xret;
    }
    void x_10(Smoke::Stack x) const {
	// heightForWidth(int)
	int xret = this->QLayoutItem::heightForWidth((int)x[1].s_int);
	x[0].s_int = (int)xret;
    }
    void x_11(Smoke::Stack x) {
	// invalidate()
	this->QLayoutItem::invalidate();
    }
    void x_12(Smoke::Stack x) {
	// widget()
	QWidget* xret = this->QLayoutItem::widget();
	x[0].s_class = (void*)xret;
    }
    void x_13(Smoke::Stack x) {
	// iterator()
	QLayoutIterator xret = this->QLayoutItem::iterator();
	x[0].s_class = (void*)new QLayoutIterator(xret);
    }
    void x_14(Smoke::Stack x) {
	// layout()
	QLayout* xret = this->QLayoutItem::layout();
	x[0].s_class = (void*)xret;
    }
    void x_15(Smoke::Stack x) {
	// spacerItem()
	QSpacerItem* xret = this->QLayoutItem::spacerItem();
	x[0].s_class = (void*)xret;
    }
    void x_16(Smoke::Stack x) const {
	// alignment()
	int xret = this->QLayoutItem::alignment();
	x[0].s_int = (int)xret;
    }
    void x_17(Smoke::Stack x) {
	// setAlignment(int)
	this->QLayoutItem::setAlignment((int)x[1].s_int);
    }
    virtual QSizePolicy::ExpandData expanding() const {
	Smoke::StackItem x[1];
	call_method_abstract((void*)this, 4114, x);
	QSizePolicy::ExpandData *xptr = (QSizePolicy::ExpandData *)x[0].s_class;
	QSizePolicy::ExpandData xret(*xptr);
	delete xptr;
	return xret;
	// ABSTRACT
    }
    virtual QRect geometry() const {
	Smoke::StackItem x[1];
	call_method_abstract((void*)this, 4116, x);
	QRect *xptr = (QRect *)x[0].s_class;
	QRect xret(*xptr);
	delete xptr;
	return xret;
	// ABSTRACT
    }
    virtual bool hasHeightForWidth() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 4118, x)) return (bool)x[0].s_bool;
	return this->QLayoutItem::hasHeightForWidth();
    }
    virtual int heightForWidth(int x1) const {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(call_method((void*)this, 4119, x)) return (int)x[0].s_int;
	return this->QLayoutItem::heightForWidth(x1);
    }
    virtual void invalidate() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 4120, x)) return;
	this->QLayoutItem::invalidate();
    }
    virtual bool isEmpty() const {
	Smoke::StackItem x[1];
	call_method_abstract((void*)this, 4117, x);
return (bool)x[0].s_bool;
	// ABSTRACT
    }
    virtual QLayoutIterator iterator() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 4122, x)) {
	    QLayoutIterator *xptr = (QLayoutIterator *)x[0].s_class;
	    QLayoutIterator xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QLayoutItem::iterator();
    }
    virtual QLayout* layout() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 4123, x)) 	return (QLayout*)x[0].s_class;
	return this->QLayoutItem::layout();
    }
    virtual QSize maximumSize() const {
	Smoke::StackItem x[1];
	call_method_abstract((void*)this, 4113, x);
	QSize *xptr = (QSize *)x[0].s_class;
	QSize xret(*xptr);
	delete xptr;
	return xret;
	// ABSTRACT
    }
    virtual QSize minimumSize() const {
	Smoke::StackItem x[1];
	call_method_abstract((void*)this, 4112, x);
	QSize *xptr = (QSize *)x[0].s_class;
	QSize xret(*xptr);
	delete xptr;
	return xret;
	// ABSTRACT
    }
    virtual void setAlignment(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(call_method((void*)this, 4126, x)) return;
	this->QLayoutItem::setAlignment(x1);
    }
    virtual void setGeometry(const QRect& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	call_method_abstract((void*)this, 4115, x);
	return;
	// ABSTRACT
    }
    virtual QSize sizeHint() const {
	Smoke::StackItem x[1];
	call_method_abstract((void*)this, 4111, x);
	QSize *xptr = (QSize *)x[0].s_class;
	QSize xret(*xptr);
	delete xptr;
	return xret;
	// ABSTRACT
    }
    virtual QSpacerItem* spacerItem() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 4124, x)) 	return (QSpacerItem*)x[0].s_class;
	return this->QLayoutItem::spacerItem();
    }
    virtual QWidget* widget() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 4121, x)) 	return (QWidget*)x[0].s_class;
	return this->QLayoutItem::widget();
    }
    ~x_QLayoutItem() {}
};
void xcall_QLayoutItem(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QLayoutItem *xself = (x_QLayoutItem*)obj;
    switch(xi) {
	case 0: x_QLayoutItem::x_0(args);	break;
	case 1: x_QLayoutItem::x_1(args);	break;
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
	case 18: delete (QLayoutItem*)xself;	break;
    }
}
