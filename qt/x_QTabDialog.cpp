//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qcursor.h>
#include <qcolor.h>
#include <qiconset.h>
#include <qstring.h>
#include <qsize.h>
#include <qvariant.h>
#include <qregion.h>
#include <qpoint.h>
#include <qfont.h>
#include <qbitmap.h>
#include <qsizepolicy.h>
#include <qpalette.h>
#include <qnamespace.h>
#include <qwidget.h>
#include <qpixmap.h>
#include <qrect.h>
#include <qstyle.h>
#include <qtabdialog.h>

class x_QTabDialog : public QTabDialog {
public:
    static void x_0(Smoke::Stack x) {
	// QTabDialog(QWidget*, const char*, bool, Qt::WFlags)
	x_QTabDialog* xret = new x_QTabDialog((QWidget*)x[1].s_class,(const char*)x[2].s_class,(bool)x[3].s_bool,*(Qt::WFlags *)x[4].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QTabDialog(QWidget* x1, const char* x2, bool x3, Qt::WFlags x4) : QTabDialog(x1, x2, x3, x4) {
    }
    static void x_1(Smoke::Stack x) {
	// QTabDialog(QWidget*, const char*, bool)
	x_QTabDialog* xret = new x_QTabDialog((QWidget*)x[1].s_class,(const char*)x[2].s_class,(bool)x[3].s_bool);
	x[0].s_class = (void*)xret;
    }
    x_QTabDialog(QWidget* x1, const char* x2, bool x3) : QTabDialog(x1, x2, x3) {
    }
    static void x_2(Smoke::Stack x) {
	// QTabDialog(QWidget*, const char*)
	x_QTabDialog* xret = new x_QTabDialog((QWidget*)x[1].s_class,(const char*)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QTabDialog(QWidget* x1, const char* x2) : QTabDialog(x1, x2) {
    }
    static void x_3(Smoke::Stack x) {
	// QTabDialog(QWidget*)
	x_QTabDialog* xret = new x_QTabDialog((QWidget*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QTabDialog(QWidget* x1) : QTabDialog(x1) {
    }
    static void x_4(Smoke::Stack x) {
	// QTabDialog()
	x_QTabDialog* xret = new x_QTabDialog();
	x[0].s_class = (void*)xret;
    }
    x_QTabDialog() : QTabDialog() {
    }
    void x_5(Smoke::Stack x) {
	// show()
	this->QTabDialog::show();
    }
    void x_6(Smoke::Stack x) {
	// setFont(const QFont&)
	this->QTabDialog::setFont(*(const QFont *)x[1].s_class);
    }
    void x_7(Smoke::Stack x) {
	// addTab(QWidget*, const QString&)
	this->QTabDialog::addTab((QWidget*)x[1].s_class,*(const QString *)x[2].s_class);
    }
    void x_8(Smoke::Stack x) {
	// addTab(QWidget*, const QIconSet&, const QString&)
	this->QTabDialog::addTab((QWidget*)x[1].s_class,*(const QIconSet *)x[2].s_class,*(const QString *)x[3].s_class);
    }
    void x_9(Smoke::Stack x) {
	// addTab(QWidget*, QTab*)
	this->QTabDialog::addTab((QWidget*)x[1].s_class,(QTab*)x[2].s_class);
    }
    void x_10(Smoke::Stack x) {
	// insertTab(QWidget*, const QString&, int)
	this->QTabDialog::insertTab((QWidget*)x[1].s_class,*(const QString *)x[2].s_class,(int)x[3].s_int);
    }
    void x_11(Smoke::Stack x) {
	// insertTab(QWidget*, const QString&)
	this->QTabDialog::insertTab((QWidget*)x[1].s_class,*(const QString *)x[2].s_class);
    }
    void x_12(Smoke::Stack x) {
	// insertTab(QWidget*, const QIconSet&, const QString&, int)
	this->QTabDialog::insertTab((QWidget*)x[1].s_class,*(const QIconSet *)x[2].s_class,*(const QString *)x[3].s_class,(int)x[4].s_int);
    }
    void x_13(Smoke::Stack x) {
	// insertTab(QWidget*, const QIconSet&, const QString&)
	this->QTabDialog::insertTab((QWidget*)x[1].s_class,*(const QIconSet *)x[2].s_class,*(const QString *)x[3].s_class);
    }
    void x_14(Smoke::Stack x) {
	// insertTab(QWidget*, QTab*, int)
	this->QTabDialog::insertTab((QWidget*)x[1].s_class,(QTab*)x[2].s_class,(int)x[3].s_int);
    }
    void x_15(Smoke::Stack x) {
	// insertTab(QWidget*, QTab*)
	this->QTabDialog::insertTab((QWidget*)x[1].s_class,(QTab*)x[2].s_class);
    }
    void x_16(Smoke::Stack x) {
	// changeTab(QWidget*, const QString&)
	this->QTabDialog::changeTab((QWidget*)x[1].s_class,*(const QString *)x[2].s_class);
    }
    void x_17(Smoke::Stack x) {
	// changeTab(QWidget*, const QIconSet&, const QString&)
	this->QTabDialog::changeTab((QWidget*)x[1].s_class,*(const QIconSet *)x[2].s_class,*(const QString *)x[3].s_class);
    }
    void x_18(Smoke::Stack x) const {
	// isTabEnabled(QWidget*)
	bool xret = this->QTabDialog::isTabEnabled((QWidget*)x[1].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_19(Smoke::Stack x) {
	// setTabEnabled(QWidget*, bool)
	this->QTabDialog::setTabEnabled((QWidget*)x[1].s_class,(bool)x[2].s_bool);
    }
    void x_20(Smoke::Stack x) const {
	// isTabEnabled(const char*)
	bool xret = this->QTabDialog::isTabEnabled((const char*)x[1].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_21(Smoke::Stack x) {
	// setTabEnabled(const char*, bool)
	this->QTabDialog::setTabEnabled((const char*)x[1].s_class,(bool)x[2].s_bool);
    }
    void x_22(Smoke::Stack x) {
	// showPage(QWidget*)
	this->QTabDialog::showPage((QWidget*)x[1].s_class);
    }
    void x_23(Smoke::Stack x) {
	// removePage(QWidget*)
	this->QTabDialog::removePage((QWidget*)x[1].s_class);
    }
    void x_24(Smoke::Stack x) {
	// tabLabel(QWidget*)
	QString xret = this->QTabDialog::tabLabel((QWidget*)x[1].s_class);
	x[0].s_class = (void*)new QString(xret);
    }
    void x_25(Smoke::Stack x) const {
	// currentPage()
	QWidget* xret = this->QTabDialog::currentPage();
	x[0].s_class = (void*)xret;
    }
    void x_26(Smoke::Stack x) {
	// setDefaultButton(const QString&)
	this->QTabDialog::setDefaultButton(*(const QString *)x[1].s_class);
    }
    void x_27(Smoke::Stack x) {
	// setDefaultButton()
	this->QTabDialog::setDefaultButton();
    }
    void x_28(Smoke::Stack x) const {
	// hasDefaultButton()
	bool xret = this->QTabDialog::hasDefaultButton();
	x[0].s_bool = (bool)xret;
    }
    void x_29(Smoke::Stack x) {
	// setHelpButton(const QString&)
	this->QTabDialog::setHelpButton(*(const QString *)x[1].s_class);
    }
    void x_30(Smoke::Stack x) {
	// setHelpButton()
	this->QTabDialog::setHelpButton();
    }
    void x_31(Smoke::Stack x) const {
	// hasHelpButton()
	bool xret = this->QTabDialog::hasHelpButton();
	x[0].s_bool = (bool)xret;
    }
    void x_32(Smoke::Stack x) {
	// setCancelButton(const QString&)
	this->QTabDialog::setCancelButton(*(const QString *)x[1].s_class);
    }
    void x_33(Smoke::Stack x) {
	// setCancelButton()
	this->QTabDialog::setCancelButton();
    }
    void x_34(Smoke::Stack x) const {
	// hasCancelButton()
	bool xret = this->QTabDialog::hasCancelButton();
	x[0].s_bool = (bool)xret;
    }
    void x_35(Smoke::Stack x) {
	// setApplyButton(const QString&)
	this->QTabDialog::setApplyButton(*(const QString *)x[1].s_class);
    }
    void x_36(Smoke::Stack x) {
	// setApplyButton()
	this->QTabDialog::setApplyButton();
    }
    void x_37(Smoke::Stack x) const {
	// hasApplyButton()
	bool xret = this->QTabDialog::hasApplyButton();
	x[0].s_bool = (bool)xret;
    }
    void x_38(Smoke::Stack x) {
	// setOKButton(const QString&)
	this->QTabDialog::setOKButton(*(const QString *)x[1].s_class);
    }
    void x_39(Smoke::Stack x) {
	// setOKButton()
	this->QTabDialog::setOKButton();
    }
    void x_40(Smoke::Stack x) {
	// setOkButton(const QString&)
	this->QTabDialog::setOkButton(*(const QString *)x[1].s_class);
    }
    void x_41(Smoke::Stack x) {
	// setOkButton()
	this->QTabDialog::setOkButton();
    }
    void x_42(Smoke::Stack x) const {
	// hasOkButton()
	bool xret = this->QTabDialog::hasOkButton();
	x[0].s_bool = (bool)xret;
    }
    void x_43(Smoke::Stack x) {
	// aboutToShow()
	this->QTabDialog::aboutToShow();
    }
    void x_44(Smoke::Stack x) {
	// applyButtonPressed()
	this->QTabDialog::applyButtonPressed();
    }
    void x_45(Smoke::Stack x) {
	// cancelButtonPressed()
	this->QTabDialog::cancelButtonPressed();
    }
    void x_46(Smoke::Stack x) {
	// defaultButtonPressed()
	this->QTabDialog::defaultButtonPressed();
    }
    void x_47(Smoke::Stack x) {
	// helpButtonPressed()
	this->QTabDialog::helpButtonPressed();
    }
    void x_48(Smoke::Stack x) {
	// currentChanged(QWidget*)
	this->QTabDialog::currentChanged((QWidget*)x[1].s_class);
    }
    void x_49(Smoke::Stack x) {
	// selected(const QString&)
	this->QTabDialog::selected(*(const QString *)x[1].s_class);
    }
    void x_50(Smoke::Stack x) {
	// paintEvent(QPaintEvent*)
	this->QTabDialog::paintEvent((QPaintEvent*)x[1].s_class);
    }
    void x_51(Smoke::Stack x) {
	// resizeEvent(QResizeEvent*)
	this->QTabDialog::resizeEvent((QResizeEvent*)x[1].s_class);
    }
    void x_52(Smoke::Stack x) {
	// styleChange(QStyle&)
	this->QTabDialog::styleChange(*(QStyle *)x[1].s_class);
    }
    void x_53(Smoke::Stack x) {
	// setTabBar(QTabBar*)
	this->QTabDialog::setTabBar((QTabBar*)x[1].s_class);
    }
    void x_54(Smoke::Stack x) const {
	// tabBar()
	QTabBar* xret = this->QTabDialog::tabBar();
	x[0].s_class = (void*)xret;
    }
    virtual void accept() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 1725, x)) return;
	this->QDialog::accept();
    }
    virtual void adjustSize() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9609, x)) return;
	this->QWidget::adjustSize();
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
    virtual bool close(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 9596, x)) return (bool)x[0].s_bool;
	return this->QWidget::close(x1);
    }
    virtual void closeEvent(QCloseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 1719, x)) return;
	this->QDialog::closeEvent(x1);
    }
    virtual bool cmd(int x1, QPainter* x2, QPDevCmdParam* x3) {
	Smoke::StackItem x[4];
	x[1].s_int = (int)x1;
	x[2].s_class = (void*)x2;
	x[3].s_class = (void*)x3;
	if(call_method((void*)this, 5552, x)) return (bool)x[0].s_bool;
	return this->QPaintDevice::cmd(x1, x2, x3);
    }
    virtual void connectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 5467, x)) return;
	this->QObject::connectNotify(x1);
    }
    virtual void contextMenuEvent(QContextMenuEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 1721, x)) return;
	this->QDialog::contextMenuEvent(x1);
    }
    virtual void create(WId x1, bool x2, bool x3) {
	Smoke::StackItem x[4];
	x[1].s_class = (void*)&x1;
	x[2].s_bool = (bool)x2;
	x[3].s_bool = (bool)x3;
	if(call_method((void*)this, 9724, x)) return;
	this->QWidget::create(x1, x2, x3);
    }
    virtual void customEvent(QCustomEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 5466, x)) return;
	this->QObject::customEvent(x1);
    }
    virtual bool customWhatsThis() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9634, x)) return (bool)x[0].s_bool;
	return this->QWidget::customWhatsThis();
    }
    virtual void destroy(bool x1, bool x2) {
	Smoke::StackItem x[3];
	x[1].s_bool = (bool)x1;
	x[2].s_bool = (bool)x2;
	if(call_method((void*)this, 9728, x)) return;
	this->QWidget::destroy(x1, x2);
    }
    virtual void disconnectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 5468, x)) return;
	this->QObject::disconnectNotify(x1);
    }
    virtual void done(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(call_method((void*)this, 1724, x)) return;
	this->QDialog::done(x1);
    }
    virtual void dragEnterEvent(QDragEnterEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 9710, x)) return;
	this->QWidget::dragEnterEvent(x1);
    }
    virtual void dragLeaveEvent(QDragLeaveEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 9712, x)) return;
	this->QWidget::dragLeaveEvent(x1);
    }
    virtual void dragMoveEvent(QDragMoveEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 9711, x)) return;
	this->QWidget::dragMoveEvent(x1);
    }
    virtual void dropEvent(QDropEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 9713, x)) return;
	this->QWidget::dropEvent(x1);
    }
    virtual void enabledChange(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 9718, x)) return;
	this->QWidget::enabledChange(x1);
    }
    virtual void enterEvent(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 9699, x)) return;
	this->QWidget::enterEvent(x1);
    }
    virtual bool event(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 9689, x)) return (bool)x[0].s_bool;
	return this->QWidget::event(x1);
    }
    virtual bool eventFilter(QObject* x1, QEvent* x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)x2;
	if(call_method((void*)this, 1722, x)) return (bool)x[0].s_bool;
	return this->QDialog::eventFilter(x1, x2);
    }
    virtual void focusInEvent(QFocusEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 9697, x)) return;
	this->QWidget::focusInEvent(x1);
    }
    virtual bool focusNextPrevChild(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 9737, x)) return (bool)x[0].s_bool;
	return this->QWidget::focusNextPrevChild(x1);
    }
    virtual void focusOutEvent(QFocusEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 9698, x)) return;
	this->QWidget::focusOutEvent(x1);
    }
    virtual void fontChange(const QFont& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(call_method((void*)this, 9720, x)) return;
	this->QWidget::fontChange(x1);
    }
    virtual int fontInf(QFont* x1, int x2) const {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_int = (int)x2;
	if(call_method((void*)this, 5557, x)) return (int)x[0].s_int;
	return this->QPaintDevice::fontInf(x1, x2);
    }
    virtual int fontMet(QFont* x1, int x2, const char* x3, int x4) const {
	Smoke::StackItem x[5];
	x[1].s_class = (void*)x1;
	x[2].s_int = (int)x2;
	x[3].s_class = (void*)x3;
	x[4].s_int = (int)x4;
	if(call_method((void*)this, 5554, x)) return (int)x[0].s_int;
	return this->QPaintDevice::fontMet(x1, x2, x3, x4);
    }
    virtual int heightForWidth(int x1) const {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(call_method((void*)this, 9608, x)) return (int)x[0].s_int;
	return this->QWidget::heightForWidth(x1);
    }
    virtual void hide() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 1701, x)) return;
	this->QDialog::hide();
    }
    virtual void hideEvent(QHideEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 9715, x)) return;
	this->QWidget::hideEvent(x1);
    }
    virtual void imComposeEvent(QIMEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 9707, x)) return;
	this->QWidget::imComposeEvent(x1);
    }
    virtual void imEndEvent(QIMEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 9708, x)) return;
	this->QWidget::imEndEvent(x1);
    }
    virtual void imStartEvent(QIMEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 9706, x)) return;
	this->QWidget::imStartEvent(x1);
    }
    virtual void insertChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 5427, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual void keyPressEvent(QKeyEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 1718, x)) return;
	this->QDialog::keyPressEvent(x1);
    }
    virtual void keyReleaseEvent(QKeyEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 9696, x)) return;
	this->QWidget::keyReleaseEvent(x1);
    }
    virtual void leaveEvent(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 9700, x)) return;
	this->QWidget::leaveEvent(x1);
    }
    virtual int metric(int x1) const {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(call_method((void*)this, 9722, x)) return (int)x[0].s_int;
	return this->QWidget::metric(x1);
    }
    virtual QSize minimumSizeHint() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 1713, x)) {
	    QSize *xptr = (QSize *)x[0].s_class;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDialog::minimumSizeHint();
    }
    virtual void mouseDoubleClickEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 9692, x)) return;
	this->QWidget::mouseDoubleClickEvent(x1);
    }
    virtual void mouseMoveEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 9693, x)) return;
	this->QWidget::mouseMoveEvent(x1);
    }
    virtual void mousePressEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 9690, x)) return;
	this->QWidget::mousePressEvent(x1);
    }
    virtual void mouseReleaseEvent(QMouseEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 9691, x)) return;
	this->QWidget::mouseReleaseEvent(x1);
    }
    virtual void move(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = (int)x1;
	x[2].s_int = (int)x2;
	if(call_method((void*)this, 1702, x)) return;
	this->QDialog::move(x1, x2);
    }
    virtual void moveEvent(QMoveEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 9702, x)) return;
	this->QWidget::moveEvent(x1);
    }
    virtual void paintEvent(QPaintEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 8141, x)) return;
	this->QTabDialog::paintEvent(x1);
    }
    virtual void paletteChange(const QPalette& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(call_method((void*)this, 9719, x)) return;
	this->QWidget::paletteChange(x1);
    }
    virtual void polish() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9672, x)) return;
	this->QWidget::polish();
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
    virtual void reject() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 1726, x)) return;
	this->QDialog::reject();
    }
    virtual void removeChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 5428, x)) return;
	this->QObject::removeChild(x1);
    }
    virtual void reparent(QWidget* x1, Qt::WFlags x2, const QPoint& x3, bool x4) {
	Smoke::StackItem x[5];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)&x2;
	x[3].s_class = (void*)&x3;
	x[4].s_bool = (bool)x4;
	if(call_method((void*)this, 9612, x)) return;
	this->QWidget::reparent(x1, x2, x3, x4);
    }
    virtual void resize(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = (int)x1;
	x[2].s_int = (int)x2;
	if(call_method((void*)this, 1704, x)) return;
	this->QDialog::resize(x1, x2);
    }
    virtual void resizeEvent(QResizeEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 8142, x)) return;
	this->QTabDialog::resizeEvent(x1);
    }
    virtual int resolution() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 5550, x)) return (int)x[0].s_int;
	return this->QPaintDevice::resolution();
    }
    virtual void setAcceptDrops(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 9629, x)) return;
	this->QWidget::setAcceptDrops(x1);
    }
    virtual void setActiveWindow() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9583, x)) return;
	this->QWidget::setActiveWindow();
    }
    virtual void setAutoMask(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 9630, x)) return;
	this->QWidget::setAutoMask(x1);
    }
    virtual void setBackgroundColor(const QColor& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(call_method((void*)this, 9579, x)) return;
	this->QWidget::setBackgroundColor(x1);
    }
    virtual void setBackgroundMode(Qt::BackgroundMode x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(call_method((void*)this, 9541, x)) return;
	this->QWidget::setBackgroundMode(x1);
    }
    virtual void setBackgroundOrigin(QWidget::BackgroundOrigin x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(call_method((void*)this, 9632, x)) return;
	this->QWidget::setBackgroundOrigin(x1);
    }
    virtual void setBackgroundPixmap(const QPixmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(call_method((void*)this, 9581, x)) return;
	this->QWidget::setBackgroundPixmap(x1);
    }
    virtual void setCaption(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(call_method((void*)this, 9647, x)) return;
	this->QWidget::setCaption(x1);
    }
    virtual void setCursor(const QCursor& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(call_method((void*)this, 9568, x)) return;
	this->QWidget::setCursor(x1);
    }
    virtual void setEnabled(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 9645, x)) return;
	this->QWidget::setEnabled(x1);
    }
    virtual void setEraseColor(const QColor& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(call_method((void*)this, 9545, x)) return;
	this->QWidget::setEraseColor(x1);
    }
    virtual void setErasePixmap(const QPixmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(call_method((void*)this, 9547, x)) return;
	this->QWidget::setErasePixmap(x1);
    }
    virtual void setFocus() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9651, x)) return;
	this->QWidget::setFocus();
    }
    virtual void setFocusPolicy(QWidget::FocusPolicy x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(call_method((void*)this, 9586, x)) return;
	this->QWidget::setFocusPolicy(x1);
    }
    virtual void setFocusProxy(QWidget* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 9588, x)) return;
	this->QWidget::setFocusProxy(x1);
    }
    virtual void setFont(const QFont& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(call_method((void*)this, 8097, x)) return;
	this->QTabDialog::setFont(x1);
    }
    virtual void setGeometry(const QRect& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(call_method((void*)this, 1707, x)) return;
	this->QDialog::setGeometry(x1);
    }
    virtual void setGeometry(int x1, int x2, int x3, int x4) {
	Smoke::StackItem x[5];
	x[1].s_int = (int)x1;
	x[2].s_int = (int)x2;
	x[3].s_int = (int)x3;
	x[4].s_int = (int)x4;
	if(call_method((void*)this, 1706, x)) return;
	this->QDialog::setGeometry(x1, x2, x3, x4);
    }
    virtual void setIcon(const QPixmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(call_method((void*)this, 9648, x)) return;
	this->QWidget::setIcon(x1);
    }
    virtual void setIconText(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(call_method((void*)this, 9649, x)) return;
	this->QWidget::setIconText(x1);
    }
    virtual void setKeyCompression(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 9741, x)) return;
	this->QWidget::setKeyCompression(x1);
    }
    virtual void setMask(const QBitmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(call_method((void*)this, 9575, x)) return;
	this->QWidget::setMask(x1);
    }
    virtual void setMask(const QRegion& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(call_method((void*)this, 9576, x)) return;
	this->QWidget::setMask(x1);
    }
    virtual void setMaximumSize(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = (int)x1;
	x[2].s_int = (int)x2;
	if(call_method((void*)this, 9518, x)) return;
	this->QWidget::setMaximumSize(x1, x2);
    }
    virtual void setMicroFocusHint(int x1, int x2, int x3, int x4, bool x5, QFont* x6) {
	Smoke::StackItem x[7];
	x[1].s_int = (int)x1;
	x[2].s_int = (int)x2;
	x[3].s_int = (int)x3;
	x[4].s_int = (int)x4;
	x[5].s_bool = (bool)x5;
	x[6].s_class = (void*)x6;
	if(call_method((void*)this, 9742, x)) return;
	this->QWidget::setMicroFocusHint(x1, x2, x3, x4, x5, x6);
    }
    virtual void setMinimumSize(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = (int)x1;
	x[2].s_int = (int)x2;
	if(call_method((void*)this, 9516, x)) return;
	this->QWidget::setMinimumSize(x1, x2);
    }
    virtual void setMouseTracking(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 9650, x)) return;
	this->QWidget::setMouseTracking(x1);
    }
    virtual void setName(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 9485, x)) return;
	this->QWidget::setName(x1);
    }
    virtual void setPalette(const QPalette& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(call_method((void*)this, 9551, x)) return;
	this->QWidget::setPalette(x1);
    }
    virtual void setPaletteBackgroundColor(const QColor& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(call_method((void*)this, 9556, x)) return;
	this->QWidget::setPaletteBackgroundColor(x1);
    }
    virtual void setPaletteBackgroundPixmap(const QPixmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(call_method((void*)this, 9558, x)) return;
	this->QWidget::setPaletteBackgroundPixmap(x1);
    }
    virtual bool setProperty(const char* x1, const QVariant& x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)&x2;
	if(call_method((void*)this, 5440, x)) return (bool)x[0].s_bool;
	return this->QObject::setProperty(x1, x2);
    }
    virtual void setResolution(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(call_method((void*)this, 5549, x)) return;
	this->QPaintDevice::setResolution(x1);
    }
    virtual void setSizeIncrement(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = (int)x1;
	x[2].s_int = (int)x2;
	if(call_method((void*)this, 9525, x)) return;
	this->QWidget::setSizeIncrement(x1, x2);
    }
    virtual void setSizePolicy(QSizePolicy x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(call_method((void*)this, 9607, x)) return;
	this->QWidget::setSizePolicy(x1);
    }
    virtual void setUpdatesEnabled(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 9653, x)) return;
	this->QWidget::setUpdatesEnabled(x1);
    }
    virtual void setWFlags(Qt::WFlags x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(call_method((void*)this, 9735, x)) return;
	this->QWidget::setWFlags(x1);
    }
    virtual void setWState(uint x1) {
	Smoke::StackItem x[2];
	x[1].s_uint = (uint)x1;
	if(call_method((void*)this, 9732, x)) return;
	this->QWidget::setWState(x1);
    }
    virtual void show() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 8096, x)) return;
	this->QTabDialog::show();
    }
    virtual void showEvent(QShowEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 9714, x)) return;
	this->QWidget::showEvent(x1);
    }
    virtual void showMaximized() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9669, x)) return;
	this->QWidget::showMaximized();
    }
    virtual void showMinimized() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9668, x)) return;
	this->QWidget::showMinimized();
    }
    virtual void showNormal() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9671, x)) return;
	this->QWidget::showNormal();
    }
    virtual QSize sizeHint() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 1712, x)) {
	    QSize *xptr = (QSize *)x[0].s_class;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QDialog::sizeHint();
    }
    virtual QSizePolicy sizePolicy() const {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9606, x)) {
	    QSizePolicy *xptr = (QSizePolicy *)x[0].s_class;
	    QSizePolicy xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QWidget::sizePolicy();
    }
    virtual void styleChange(QStyle& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(call_method((void*)this, 8143, x)) return;
	this->QTabDialog::styleChange(x1);
    }
    virtual void tabletEvent(QTabletEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 9709, x)) return;
	this->QWidget::tabletEvent(x1);
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 5464, x)) return;
	this->QObject::timerEvent(x1);
    }
    virtual void unsetCursor() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9569, x)) return;
	this->QWidget::unsetCursor();
    }
    virtual void updateMask() {
	Smoke::StackItem x[1];
	if(call_method((void*)this, 9716, x)) return;
	this->QWidget::updateMask();
    }
    virtual void wheelEvent(QWheelEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(call_method((void*)this, 9694, x)) return;
	this->QWidget::wheelEvent(x1);
    }
    virtual void windowActivationChange(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(call_method((void*)this, 9721, x)) return;
	this->QWidget::windowActivationChange(x1);
    }
    ~x_QTabDialog() {}
};
void xcall_QTabDialog(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QTabDialog *xself = (x_QTabDialog*)obj;
    switch(xi) {
	case 0: x_QTabDialog::x_0(args);	break;
	case 1: x_QTabDialog::x_1(args);	break;
	case 2: x_QTabDialog::x_2(args);	break;
	case 3: x_QTabDialog::x_3(args);	break;
	case 4: x_QTabDialog::x_4(args);	break;
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
	case 51: xself->x_51(args);	break;
	case 52: xself->x_52(args);	break;
	case 53: xself->x_53(args);	break;
	case 54: xself->x_54(args);	break;
	case 55: delete (QTabDialog*)xself;	break;
    }
}
