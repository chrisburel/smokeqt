//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qpoint.h>
#include <qimage.h>
#include <qcstring.h>
#include <qstring.h>
#include <qstrlist.h>
#include <qsize.h>
#include <qwmatrix.h>
#include <qpixmap.h>
#include <qrect.h>
#include <qwindowdefs.h>
#include <qstringlist.h>

class x_QImage : public QImage {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_enum = (long)QImage::IgnoreEndian;
    }
    static void x_1(Smoke::Stack x) {
	x[0].s_enum = (long)QImage::BigEndian;
    }
    static void x_2(Smoke::Stack x) {
	x[0].s_enum = (long)QImage::LittleEndian;
    }
    static void x_3(Smoke::Stack x) {
	x[0].s_enum = (long)QImage::ScaleFree;
    }
    static void x_4(Smoke::Stack x) {
	x[0].s_enum = (long)QImage::ScaleMin;
    }
    static void x_5(Smoke::Stack x) {
	x[0].s_enum = (long)QImage::ScaleMax;
    }
    static void x_6(Smoke::Stack x) {
	// QImage()
	x_QImage* xret = new x_QImage();
	x[0].s_class = (void*)xret;
    }
    x_QImage() : QImage() {
    }
    static void x_7(Smoke::Stack x) {
	// QImage(int, int, int, int, QImage::Endian)
	x_QImage* xret = new x_QImage((int)x[1].s_int,(int)x[2].s_int,(int)x[3].s_int,(int)x[4].s_int,*(QImage::Endian *)x[5].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QImage(int x1, int x2, int x3, int x4, QImage::Endian x5) : QImage(x1, x2, x3, x4, x5) {
    }
    static void x_8(Smoke::Stack x) {
	// QImage(int, int, int, int)
	x_QImage* xret = new x_QImage((int)x[1].s_int,(int)x[2].s_int,(int)x[3].s_int,(int)x[4].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QImage(int x1, int x2, int x3, int x4) : QImage(x1, x2, x3, x4) {
    }
    static void x_9(Smoke::Stack x) {
	// QImage(int, int, int)
	x_QImage* xret = new x_QImage((int)x[1].s_int,(int)x[2].s_int,(int)x[3].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QImage(int x1, int x2, int x3) : QImage(x1, x2, x3) {
    }
    static void x_10(Smoke::Stack x) {
	// QImage(const QSize&, int, int, QImage::Endian)
	x_QImage* xret = new x_QImage(*(const QSize *)x[1].s_class,(int)x[2].s_int,(int)x[3].s_int,*(QImage::Endian *)x[4].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QImage(const QSize& x1, int x2, int x3, QImage::Endian x4) : QImage(x1, x2, x3, x4) {
    }
    static void x_11(Smoke::Stack x) {
	// QImage(const QSize&, int, int)
	x_QImage* xret = new x_QImage(*(const QSize *)x[1].s_class,(int)x[2].s_int,(int)x[3].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QImage(const QSize& x1, int x2, int x3) : QImage(x1, x2, x3) {
    }
    static void x_12(Smoke::Stack x) {
	// QImage(const QSize&, int)
	x_QImage* xret = new x_QImage(*(const QSize *)x[1].s_class,(int)x[2].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QImage(const QSize& x1, int x2) : QImage(x1, x2) {
    }
    static void x_13(Smoke::Stack x) {
	// QImage(const QString&, const char*)
	x_QImage* xret = new x_QImage(*(const QString *)x[1].s_class,(const char*)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QImage(const QString& x1, const char* x2) : QImage(x1, x2) {
    }
    static void x_14(Smoke::Stack x) {
	// QImage(const QString&)
	x_QImage* xret = new x_QImage(*(const QString *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QImage(const QString& x1) : QImage(x1) {
    }
    static void x_15(Smoke::Stack x) {
	// QImage(const char* const*)
	x_QImage* xret = new x_QImage((const char* const*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QImage(const char* const* x1) : QImage(x1) {
    }
    static void x_16(Smoke::Stack x) {
	// QImage(const QByteArray&)
	x_QImage* xret = new x_QImage(*(const QByteArray *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QImage(const QByteArray& x1) : QImage(x1) {
    }
    static void x_17(Smoke::Stack x) {
	// QImage(uchar*, int, int, int, QRgb*, int, QImage::Endian)
	x_QImage* xret = new x_QImage((uchar*)x[1].s_class,(int)x[2].s_int,(int)x[3].s_int,(int)x[4].s_int,(QRgb*)x[5].s_class,(int)x[6].s_int,*(QImage::Endian *)x[7].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QImage(uchar* x1, int x2, int x3, int x4, QRgb* x5, int x6, QImage::Endian x7) : QImage(x1, x2, x3, x4, x5, x6, x7) {
    }
    static void x_18(Smoke::Stack x) {
	// QImage(const QImage&)
	x_QImage* xret = new x_QImage(*(const QImage *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QImage(const QImage& x1) : QImage(x1) {
    }
    void x_19(Smoke::Stack x) {
	// operator=(const QImage&)
	QImage& xret = this->QImage::operator=(*(const QImage *)x[1].s_class);
	x[0].s_class = (void*)&xret;
    }
    void x_20(Smoke::Stack x) {
	// operator=(const QPixmap&)
	QImage& xret = this->QImage::operator=(*(const QPixmap *)x[1].s_class);
	x[0].s_class = (void*)&xret;
    }
    void x_21(Smoke::Stack x) const {
	// operator==(const QImage&)
	bool xret = this->QImage::operator==(*(const QImage *)x[1].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_22(Smoke::Stack x) const {
	// operator!=(const QImage&)
	bool xret = this->QImage::operator!=(*(const QImage *)x[1].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_23(Smoke::Stack x) {
	// detach()
	this->QImage::detach();
    }
    void x_24(Smoke::Stack x) const {
	// copy()
	QImage xret = this->QImage::copy();
	x[0].s_class = (void*)new QImage(xret);
    }
    void x_25(Smoke::Stack x) const {
	// copy(int, int, int, int, int)
	QImage xret = this->QImage::copy((int)x[1].s_int,(int)x[2].s_int,(int)x[3].s_int,(int)x[4].s_int,(int)x[5].s_int);
	x[0].s_class = (void*)new QImage(xret);
    }
    void x_26(Smoke::Stack x) const {
	// copy(int, int, int, int)
	QImage xret = this->QImage::copy((int)x[1].s_int,(int)x[2].s_int,(int)x[3].s_int,(int)x[4].s_int);
	x[0].s_class = (void*)new QImage(xret);
    }
    void x_27(Smoke::Stack x) const {
	// copy(const QRect&)
	QImage xret = this->QImage::copy(*(const QRect *)x[1].s_class);
	x[0].s_class = (void*)new QImage(xret);
    }
    void x_28(Smoke::Stack x) const {
	// isNull()
	bool xret = this->QImage::isNull();
	x[0].s_bool = (bool)xret;
    }
    void x_29(Smoke::Stack x) const {
	// width()
	int xret = this->QImage::width();
	x[0].s_int = (int)xret;
    }
    void x_30(Smoke::Stack x) const {
	// height()
	int xret = this->QImage::height();
	x[0].s_int = (int)xret;
    }
    void x_31(Smoke::Stack x) const {
	// size()
	QSize xret = this->QImage::size();
	x[0].s_class = (void*)new QSize(xret);
    }
    void x_32(Smoke::Stack x) const {
	// rect()
	QRect xret = this->QImage::rect();
	x[0].s_class = (void*)new QRect(xret);
    }
    void x_33(Smoke::Stack x) const {
	// depth()
	int xret = this->QImage::depth();
	x[0].s_int = (int)xret;
    }
    void x_34(Smoke::Stack x) const {
	// numColors()
	int xret = this->QImage::numColors();
	x[0].s_int = (int)xret;
    }
    void x_35(Smoke::Stack x) const {
	// bitOrder()
	QImage::Endian xret = this->QImage::bitOrder();
	x[0].s_class = (void*)new QImage::Endian(xret);
    }
    void x_36(Smoke::Stack x) const {
	// color(int)
	QRgb xret = this->QImage::color((int)x[1].s_int);
	x[0].s_class = (void*)new QRgb(xret);
    }
    void x_37(Smoke::Stack x) {
	// setColor(int, QRgb)
	this->QImage::setColor((int)x[1].s_int,*(QRgb *)x[2].s_class);
    }
    void x_38(Smoke::Stack x) {
	// setNumColors(int)
	this->QImage::setNumColors((int)x[1].s_int);
    }
    void x_39(Smoke::Stack x) const {
	// hasAlphaBuffer()
	bool xret = this->QImage::hasAlphaBuffer();
	x[0].s_bool = (bool)xret;
    }
    void x_40(Smoke::Stack x) {
	// setAlphaBuffer(bool)
	this->QImage::setAlphaBuffer((bool)x[1].s_bool);
    }
    void x_41(Smoke::Stack x) const {
	// allGray()
	bool xret = this->QImage::allGray();
	x[0].s_bool = (bool)xret;
    }
    void x_42(Smoke::Stack x) const {
	// isGrayscale()
	bool xret = this->QImage::isGrayscale();
	x[0].s_bool = (bool)xret;
    }
    void x_43(Smoke::Stack x) const {
	// bits()
	uchar* xret = this->QImage::bits();
	x[0].s_class = (void*)xret;
    }
    void x_44(Smoke::Stack x) const {
	// scanLine(int)
	uchar* xret = this->QImage::scanLine((int)x[1].s_int);
	x[0].s_class = (void*)xret;
    }
    void x_45(Smoke::Stack x) const {
	// jumpTable()
	uchar** xret = this->QImage::jumpTable();
	x[0].s_class = (void*)xret;
    }
    void x_46(Smoke::Stack x) const {
	// colorTable()
	QRgb* xret = this->QImage::colorTable();
	x[0].s_class = (void*)xret;
    }
    void x_47(Smoke::Stack x) const {
	// numBytes()
	int xret = this->QImage::numBytes();
	x[0].s_int = (int)xret;
    }
    void x_48(Smoke::Stack x) const {
	// bytesPerLine()
	int xret = this->QImage::bytesPerLine();
	x[0].s_int = (int)xret;
    }
    void x_49(Smoke::Stack x) {
	// create(int, int, int, int, QImage::Endian)
	bool xret = this->QImage::create((int)x[1].s_int,(int)x[2].s_int,(int)x[3].s_int,(int)x[4].s_int,*(QImage::Endian *)x[5].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_50(Smoke::Stack x) {
	// create(int, int, int, int)
	bool xret = this->QImage::create((int)x[1].s_int,(int)x[2].s_int,(int)x[3].s_int,(int)x[4].s_int);
	x[0].s_bool = (bool)xret;
    }
    void x_51(Smoke::Stack x) {
	// create(int, int, int)
	bool xret = this->QImage::create((int)x[1].s_int,(int)x[2].s_int,(int)x[3].s_int);
	x[0].s_bool = (bool)xret;
    }
    void x_52(Smoke::Stack x) {
	// create(const QSize&, int, int, QImage::Endian)
	bool xret = this->QImage::create(*(const QSize *)x[1].s_class,(int)x[2].s_int,(int)x[3].s_int,*(QImage::Endian *)x[4].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_53(Smoke::Stack x) {
	// create(const QSize&, int, int)
	bool xret = this->QImage::create(*(const QSize *)x[1].s_class,(int)x[2].s_int,(int)x[3].s_int);
	x[0].s_bool = (bool)xret;
    }
    void x_54(Smoke::Stack x) {
	// create(const QSize&, int)
	bool xret = this->QImage::create(*(const QSize *)x[1].s_class,(int)x[2].s_int);
	x[0].s_bool = (bool)xret;
    }
    void x_55(Smoke::Stack x) {
	// reset()
	this->QImage::reset();
    }
    void x_56(Smoke::Stack x) {
	// fill(uint)
	this->QImage::fill((uint)x[1].s_uint);
    }
    void x_57(Smoke::Stack x) {
	// invertPixels(bool)
	this->QImage::invertPixels((bool)x[1].s_bool);
    }
    void x_58(Smoke::Stack x) {
	// invertPixels()
	this->QImage::invertPixels();
    }
    void x_59(Smoke::Stack x) const {
	// convertDepth(int)
	QImage xret = this->QImage::convertDepth((int)x[1].s_int);
	x[0].s_class = (void*)new QImage(xret);
    }
    void x_60(Smoke::Stack x) const {
	// convertDepthWithPalette(int, QRgb*, int, int)
	QImage xret = this->QImage::convertDepthWithPalette((int)x[1].s_int,(QRgb*)x[2].s_class,(int)x[3].s_int,(int)x[4].s_int);
	x[0].s_class = (void*)new QImage(xret);
    }
    void x_61(Smoke::Stack x) const {
	// convertDepthWithPalette(int, QRgb*, int)
	QImage xret = this->QImage::convertDepthWithPalette((int)x[1].s_int,(QRgb*)x[2].s_class,(int)x[3].s_int);
	x[0].s_class = (void*)new QImage(xret);
    }
    void x_62(Smoke::Stack x) const {
	// convertDepth(int, int)
	QImage xret = this->QImage::convertDepth((int)x[1].s_int,(int)x[2].s_int);
	x[0].s_class = (void*)new QImage(xret);
    }
    void x_63(Smoke::Stack x) const {
	// convertBitOrder(QImage::Endian)
	QImage xret = this->QImage::convertBitOrder(*(QImage::Endian *)x[1].s_class);
	x[0].s_class = (void*)new QImage(xret);
    }
    void x_64(Smoke::Stack x) const {
	// smoothScale(int, int, QImage::ScaleMode)
	QImage xret = this->QImage::smoothScale((int)x[1].s_int,(int)x[2].s_int,*(QImage::ScaleMode *)x[3].s_class);
	x[0].s_class = (void*)new QImage(xret);
    }
    void x_65(Smoke::Stack x) const {
	// smoothScale(int, int)
	QImage xret = this->QImage::smoothScale((int)x[1].s_int,(int)x[2].s_int);
	x[0].s_class = (void*)new QImage(xret);
    }
    void x_66(Smoke::Stack x) const {
	// smoothScale(const QSize&, QImage::ScaleMode)
	QImage xret = this->QImage::smoothScale(*(const QSize *)x[1].s_class,*(QImage::ScaleMode *)x[2].s_class);
	x[0].s_class = (void*)new QImage(xret);
    }
    void x_67(Smoke::Stack x) const {
	// smoothScale(const QSize&)
	QImage xret = this->QImage::smoothScale(*(const QSize *)x[1].s_class);
	x[0].s_class = (void*)new QImage(xret);
    }
    void x_68(Smoke::Stack x) const {
	// scale(int, int, QImage::ScaleMode)
	QImage xret = this->QImage::scale((int)x[1].s_int,(int)x[2].s_int,*(QImage::ScaleMode *)x[3].s_class);
	x[0].s_class = (void*)new QImage(xret);
    }
    void x_69(Smoke::Stack x) const {
	// scale(int, int)
	QImage xret = this->QImage::scale((int)x[1].s_int,(int)x[2].s_int);
	x[0].s_class = (void*)new QImage(xret);
    }
    void x_70(Smoke::Stack x) const {
	// scale(const QSize&, QImage::ScaleMode)
	QImage xret = this->QImage::scale(*(const QSize *)x[1].s_class,*(QImage::ScaleMode *)x[2].s_class);
	x[0].s_class = (void*)new QImage(xret);
    }
    void x_71(Smoke::Stack x) const {
	// scale(const QSize&)
	QImage xret = this->QImage::scale(*(const QSize *)x[1].s_class);
	x[0].s_class = (void*)new QImage(xret);
    }
    void x_72(Smoke::Stack x) const {
	// scaleWidth(int)
	QImage xret = this->QImage::scaleWidth((int)x[1].s_int);
	x[0].s_class = (void*)new QImage(xret);
    }
    void x_73(Smoke::Stack x) const {
	// scaleHeight(int)
	QImage xret = this->QImage::scaleHeight((int)x[1].s_int);
	x[0].s_class = (void*)new QImage(xret);
    }
    void x_74(Smoke::Stack x) const {
	// xForm(const QWMatrix&)
	QImage xret = this->QImage::xForm(*(const QWMatrix *)x[1].s_class);
	x[0].s_class = (void*)new QImage(xret);
    }
    void x_75(Smoke::Stack x) const {
	// createAlphaMask(int)
	QImage xret = this->QImage::createAlphaMask((int)x[1].s_int);
	x[0].s_class = (void*)new QImage(xret);
    }
    void x_76(Smoke::Stack x) const {
	// createAlphaMask()
	QImage xret = this->QImage::createAlphaMask();
	x[0].s_class = (void*)new QImage(xret);
    }
    void x_77(Smoke::Stack x) const {
	// createHeuristicMask(bool)
	QImage xret = this->QImage::createHeuristicMask((bool)x[1].s_bool);
	x[0].s_class = (void*)new QImage(xret);
    }
    void x_78(Smoke::Stack x) const {
	// createHeuristicMask()
	QImage xret = this->QImage::createHeuristicMask();
	x[0].s_class = (void*)new QImage(xret);
    }
    void x_79(Smoke::Stack x) const {
	// mirror()
	QImage xret = this->QImage::mirror();
	x[0].s_class = (void*)new QImage(xret);
    }
    void x_80(Smoke::Stack x) const {
	// mirror(bool, bool)
	QImage xret = this->QImage::mirror((bool)x[1].s_bool,(bool)x[2].s_bool);
	x[0].s_class = (void*)new QImage(xret);
    }
    void x_81(Smoke::Stack x) const {
	// swapRGB()
	QImage xret = this->QImage::swapRGB();
	x[0].s_class = (void*)new QImage(xret);
    }
    void x_82(Smoke::Stack x) {
	// load(const QString&, const char*)
	bool xret = this->QImage::load(*(const QString *)x[1].s_class,(const char*)x[2].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_83(Smoke::Stack x) {
	// load(const QString&)
	bool xret = this->QImage::load(*(const QString *)x[1].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_84(Smoke::Stack x) {
	// loadFromData(const uchar*, uint, const char*)
	bool xret = this->QImage::loadFromData((const uchar*)x[1].s_class,(uint)x[2].s_uint,(const char*)x[3].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_85(Smoke::Stack x) {
	// loadFromData(const uchar*, uint)
	bool xret = this->QImage::loadFromData((const uchar*)x[1].s_class,(uint)x[2].s_uint);
	x[0].s_bool = (bool)xret;
    }
    void x_86(Smoke::Stack x) {
	// loadFromData(QByteArray, const char*)
	bool xret = this->QImage::loadFromData(*(QByteArray *)x[1].s_class,(const char*)x[2].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_87(Smoke::Stack x) {
	// loadFromData(QByteArray)
	bool xret = this->QImage::loadFromData(*(QByteArray *)x[1].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_88(Smoke::Stack x) const {
	// save(const QString&, const char*, int)
	bool xret = this->QImage::save(*(const QString *)x[1].s_class,(const char*)x[2].s_class,(int)x[3].s_int);
	x[0].s_bool = (bool)xret;
    }
    void x_89(Smoke::Stack x) const {
	// save(const QString&, const char*)
	bool xret = this->QImage::save(*(const QString *)x[1].s_class,(const char*)x[2].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_90(Smoke::Stack x) const {
	// valid(int, int)
	bool xret = this->QImage::valid((int)x[1].s_int,(int)x[2].s_int);
	x[0].s_bool = (bool)xret;
    }
    void x_91(Smoke::Stack x) const {
	// pixelIndex(int, int)
	int xret = this->QImage::pixelIndex((int)x[1].s_int,(int)x[2].s_int);
	x[0].s_int = (int)xret;
    }
    void x_92(Smoke::Stack x) const {
	// pixel(int, int)
	QRgb xret = this->QImage::pixel((int)x[1].s_int,(int)x[2].s_int);
	x[0].s_class = (void*)new QRgb(xret);
    }
    void x_93(Smoke::Stack x) {
	// setPixel(int, int, uint)
	this->QImage::setPixel((int)x[1].s_int,(int)x[2].s_int,(uint)x[3].s_uint);
    }
    void x_94(Smoke::Stack x) const {
	// dotsPerMeterX()
	int xret = this->QImage::dotsPerMeterX();
	x[0].s_int = (int)xret;
    }
    void x_95(Smoke::Stack x) const {
	// dotsPerMeterY()
	int xret = this->QImage::dotsPerMeterY();
	x[0].s_int = (int)xret;
    }
    void x_96(Smoke::Stack x) {
	// setDotsPerMeterX(int)
	this->QImage::setDotsPerMeterX((int)x[1].s_int);
    }
    void x_97(Smoke::Stack x) {
	// setDotsPerMeterY(int)
	this->QImage::setDotsPerMeterY((int)x[1].s_int);
    }
    void x_98(Smoke::Stack x) const {
	// offset()
	QPoint xret = this->QImage::offset();
	x[0].s_class = (void*)new QPoint(xret);
    }
    void x_99(Smoke::Stack x) {
	// setOffset(const QPoint&)
	this->QImage::setOffset(*(const QPoint *)x[1].s_class);
    }
    void x_100(Smoke::Stack x) const {
	// textList()
	QValueList<QImageTextKeyLang> xret = this->QImage::textList();
	x[0].s_class = (void*)new QValueList<QImageTextKeyLang>(xret);
    }
    void x_101(Smoke::Stack x) const {
	// textLanguages()
	QStringList xret = this->QImage::textLanguages();
	x[0].s_class = (void*)new QStringList(xret);
    }
    void x_102(Smoke::Stack x) const {
	// textKeys()
	QStringList xret = this->QImage::textKeys();
	x[0].s_class = (void*)new QStringList(xret);
    }
    void x_103(Smoke::Stack x) const {
	// text(const char*, const char*)
	QString xret = this->QImage::text((const char*)x[1].s_class,(const char*)x[2].s_class);
	x[0].s_class = (void*)new QString(xret);
    }
    void x_104(Smoke::Stack x) const {
	// text(const char*)
	QString xret = this->QImage::text((const char*)x[1].s_class);
	x[0].s_class = (void*)new QString(xret);
    }
    void x_105(Smoke::Stack x) const {
	// text(const QImageTextKeyLang&)
	QString xret = this->QImage::text(*(const QImageTextKeyLang *)x[1].s_class);
	x[0].s_class = (void*)new QString(xret);
    }
    void x_106(Smoke::Stack x) {
	// setText(const char*, const char*, const QString&)
	this->QImage::setText((const char*)x[1].s_class,(const char*)x[2].s_class,*(const QString *)x[3].s_class);
    }
    static void x_107(Smoke::Stack x) {
	// systemBitOrder()
	QImage::Endian xret = QImage::systemBitOrder();
	x[0].s_class = (void*)new QImage::Endian(xret);
    }
    static void x_108(Smoke::Stack x) {
	// systemByteOrder()
	QImage::Endian xret = QImage::systemByteOrder();
	x[0].s_class = (void*)new QImage::Endian(xret);
    }
    static void x_109(Smoke::Stack x) {
	// imageFormat(const QString&)
	const char* xret = QImage::imageFormat(*(const QString *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    static void x_110(Smoke::Stack x) {
	// inputFormats()
	QStrList xret = QImage::inputFormats();
	x[0].s_class = (void*)new QStrList(xret);
    }
    static void x_111(Smoke::Stack x) {
	// outputFormats()
	QStrList xret = QImage::outputFormats();
	x[0].s_class = (void*)new QStrList(xret);
    }
    static void x_112(Smoke::Stack x) {
	// inputFormatList()
	QStringList xret = QImage::inputFormatList();
	x[0].s_class = (void*)new QStringList(xret);
    }
    static void x_113(Smoke::Stack x) {
	// outputFormatList()
	QStringList xret = QImage::outputFormatList();
	x[0].s_class = (void*)new QStringList(xret);
    }
    ~x_QImage() {}
};
void xcall_QImage(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QImage *xself = (x_QImage*)obj;
    switch(xi) {
	case 0: x_QImage::x_0(args);	break;
	case 1: x_QImage::x_1(args);	break;
	case 2: x_QImage::x_2(args);	break;
	case 3: x_QImage::x_3(args);	break;
	case 4: x_QImage::x_4(args);	break;
	case 5: x_QImage::x_5(args);	break;
	case 6: x_QImage::x_6(args);	break;
	case 7: x_QImage::x_7(args);	break;
	case 8: x_QImage::x_8(args);	break;
	case 9: x_QImage::x_9(args);	break;
	case 10: x_QImage::x_10(args);	break;
	case 11: x_QImage::x_11(args);	break;
	case 12: x_QImage::x_12(args);	break;
	case 13: x_QImage::x_13(args);	break;
	case 14: x_QImage::x_14(args);	break;
	case 15: x_QImage::x_15(args);	break;
	case 16: x_QImage::x_16(args);	break;
	case 17: x_QImage::x_17(args);	break;
	case 18: x_QImage::x_18(args);	break;
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
	case 55: xself->x_55(args);	break;
	case 56: xself->x_56(args);	break;
	case 57: xself->x_57(args);	break;
	case 58: xself->x_58(args);	break;
	case 59: xself->x_59(args);	break;
	case 60: xself->x_60(args);	break;
	case 61: xself->x_61(args);	break;
	case 62: xself->x_62(args);	break;
	case 63: xself->x_63(args);	break;
	case 64: xself->x_64(args);	break;
	case 65: xself->x_65(args);	break;
	case 66: xself->x_66(args);	break;
	case 67: xself->x_67(args);	break;
	case 68: xself->x_68(args);	break;
	case 69: xself->x_69(args);	break;
	case 70: xself->x_70(args);	break;
	case 71: xself->x_71(args);	break;
	case 72: xself->x_72(args);	break;
	case 73: xself->x_73(args);	break;
	case 74: xself->x_74(args);	break;
	case 75: xself->x_75(args);	break;
	case 76: xself->x_76(args);	break;
	case 77: xself->x_77(args);	break;
	case 78: xself->x_78(args);	break;
	case 79: xself->x_79(args);	break;
	case 80: xself->x_80(args);	break;
	case 81: xself->x_81(args);	break;
	case 82: xself->x_82(args);	break;
	case 83: xself->x_83(args);	break;
	case 84: xself->x_84(args);	break;
	case 85: xself->x_85(args);	break;
	case 86: xself->x_86(args);	break;
	case 87: xself->x_87(args);	break;
	case 88: xself->x_88(args);	break;
	case 89: xself->x_89(args);	break;
	case 90: xself->x_90(args);	break;
	case 91: xself->x_91(args);	break;
	case 92: xself->x_92(args);	break;
	case 93: xself->x_93(args);	break;
	case 94: xself->x_94(args);	break;
	case 95: xself->x_95(args);	break;
	case 96: xself->x_96(args);	break;
	case 97: xself->x_97(args);	break;
	case 98: xself->x_98(args);	break;
	case 99: xself->x_99(args);	break;
	case 100: xself->x_100(args);	break;
	case 101: xself->x_101(args);	break;
	case 102: xself->x_102(args);	break;
	case 103: xself->x_103(args);	break;
	case 104: xself->x_104(args);	break;
	case 105: xself->x_105(args);	break;
	case 106: xself->x_106(args);	break;
	case 107: x_QImage::x_107(args);	break;
	case 108: x_QImage::x_108(args);	break;
	case 109: x_QImage::x_109(args);	break;
	case 110: x_QImage::x_110(args);	break;
	case 111: x_QImage::x_111(args);	break;
	case 112: x_QImage::x_112(args);	break;
	case 113: x_QImage::x_113(args);	break;
	case 114: delete (QImage*)xself;	break;
    }
}
