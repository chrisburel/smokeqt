//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qimage.h>
#include <qstring.h>
#include <qpixmap.h>
#include <qstringlist.h>
#include <qmime.h>

class x_QMimeSourceFactory : public QMimeSourceFactory {
public:
    static void x_0(Smoke::Stack x) {
	// QMimeSourceFactory()
	x_QMimeSourceFactory* xret = new x_QMimeSourceFactory();
	x[0].s_class = (void*)xret;
    }
    x_QMimeSourceFactory() : QMimeSourceFactory() {
    }
    void x_1(Smoke::Stack x) const {
	// data(const QString&)
	const QMimeSource* xret = this->QMimeSourceFactory::data(*(const QString *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    void x_2(Smoke::Stack x) const {
	// makeAbsolute(const QString&, const QString&)
	QString xret = this->QMimeSourceFactory::makeAbsolute(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class);
	x[0].s_class = (void*)new QString(xret);
    }
    void x_3(Smoke::Stack x) const {
	// data(const QString&, const QString&)
	const QMimeSource* xret = this->QMimeSourceFactory::data(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    void x_4(Smoke::Stack x) {
	// setText(const QString&, const QString&)
	this->QMimeSourceFactory::setText(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class);
    }
    void x_5(Smoke::Stack x) {
	// setImage(const QString&, const QImage&)
	this->QMimeSourceFactory::setImage(*(const QString *)x[1].s_class,*(const QImage *)x[2].s_class);
    }
    void x_6(Smoke::Stack x) {
	// setPixmap(const QString&, const QPixmap&)
	this->QMimeSourceFactory::setPixmap(*(const QString *)x[1].s_class,*(const QPixmap *)x[2].s_class);
    }
    void x_7(Smoke::Stack x) {
	// setData(const QString&, QMimeSource*)
	this->QMimeSourceFactory::setData(*(const QString *)x[1].s_class,(QMimeSource*)x[2].s_class);
    }
    void x_8(Smoke::Stack x) {
	// setFilePath(const QStringList&)
	this->QMimeSourceFactory::setFilePath(*(const QStringList *)x[1].s_class);
    }
    void x_9(Smoke::Stack x) const {
	// filePath()
	QStringList xret = this->QMimeSourceFactory::filePath();
	x[0].s_class = (void*)new QStringList(xret);
    }
    void x_10(Smoke::Stack x) {
	// addFilePath(const QString&)
	this->QMimeSourceFactory::addFilePath(*(const QString *)x[1].s_class);
    }
    void x_11(Smoke::Stack x) {
	// setExtensionType(const QString&, const char*)
	this->QMimeSourceFactory::setExtensionType(*(const QString *)x[1].s_class,(const char*)x[2].s_class);
    }
    static void x_12(Smoke::Stack x) {
	// defaultFactory()
	QMimeSourceFactory* xret = QMimeSourceFactory::defaultFactory();
	x[0].s_class = (void*)xret;
    }
    static void x_13(Smoke::Stack x) {
	// setDefaultFactory(QMimeSourceFactory*)
	QMimeSourceFactory::setDefaultFactory((QMimeSourceFactory*)x[1].s_class);
    }
    static void x_14(Smoke::Stack x) {
	// takeDefaultFactory()
	QMimeSourceFactory* xret = QMimeSourceFactory::takeDefaultFactory();
	x[0].s_class = (void*)xret;
    }
    static void x_15(Smoke::Stack x) {
	// addFactory(QMimeSourceFactory*)
	QMimeSourceFactory::addFactory((QMimeSourceFactory*)x[1].s_class);
    }
    static void x_16(Smoke::Stack x) {
	// removeFactory(QMimeSourceFactory*)
	QMimeSourceFactory::removeFactory((QMimeSourceFactory*)x[1].s_class);
    }
    virtual const QMimeSource* data(const QString& x1) const {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(call_method((void*)this, 5118, x)) 	return (const QMimeSource*)x[0].s_class;
	return this->QMimeSourceFactory::data(x1);
    }
    virtual QStringList filePath() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 5126, x)) {
	    QStringList *xptr = (QStringList *)x[0].s_class;
	    QStringList xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QMimeSourceFactory::filePath();
    }
    virtual QString makeAbsolute(const QString& x1, const QString& x2) const {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)&x2;
	if(call_method((void*)this, 5119, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QMimeSourceFactory::makeAbsolute(x1, x2);
    }
    virtual void setData(const QString& x1, QMimeSource* x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)x2;
	if(call_method((void*)this, 5124, x)) return;
	this->QMimeSourceFactory::setData(x1, x2);
    }
    virtual void setExtensionType(const QString& x1, const char* x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)x2;
	if(call_method((void*)this, 5128, x)) return;
	this->QMimeSourceFactory::setExtensionType(x1, x2);
    }
    virtual void setFilePath(const QStringList& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(call_method((void*)this, 5125, x)) return;
	this->QMimeSourceFactory::setFilePath(x1);
    }
    virtual void setImage(const QString& x1, const QImage& x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)&x2;
	if(call_method((void*)this, 5122, x)) return;
	this->QMimeSourceFactory::setImage(x1, x2);
    }
    virtual void setPixmap(const QString& x1, const QPixmap& x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)&x2;
	if(call_method((void*)this, 5123, x)) return;
	this->QMimeSourceFactory::setPixmap(x1, x2);
    }
    virtual void setText(const QString& x1, const QString& x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)&x2;
	if(call_method((void*)this, 5121, x)) return;
	this->QMimeSourceFactory::setText(x1, x2);
    }
    ~x_QMimeSourceFactory() {}
};
void xcall_QMimeSourceFactory(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QMimeSourceFactory *xself = (x_QMimeSourceFactory*)obj;
    switch(xi) {
	case 0: x_QMimeSourceFactory::x_0(args);	break;
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
	case 12: x_QMimeSourceFactory::x_12(args);	break;
	case 13: x_QMimeSourceFactory::x_13(args);	break;
	case 14: x_QMimeSourceFactory::x_14(args);	break;
	case 15: x_QMimeSourceFactory::x_15(args);	break;
	case 16: x_QMimeSourceFactory::x_16(args);	break;
	case 17: delete (QMimeSourceFactory*)xself;	break;
    }
}
