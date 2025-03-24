#include "verify.h"
#include "ui_verify.h"

Verify::Verify(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Verify),
    boxWidth(200), // 初始化宽度
    boxHeight(50)
{
    ui->setupUi(this);
    initColorAndFont();
    QRandomGenerator::global()->seed(QTime::currentTime().msecsSinceStartOfDay());
    codePool="0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    generateVerifyCode(4);
}

Verify::~Verify()
{
    delete ui;
}

void Verify::initColorAndFont()
{
    QFont font;
    font.setFamily("微软雅黑");
    font.setBold(true);
    font.setPointSizeF(20);
    this->setFont(font);
    m_vecColor<<QColor(Qt::black)<<QColor(Qt::red)<<QColor(Qt::darkRed)<<QColor(Qt::darkGreen)
    <<QColor(Qt::blue)<<QColor(Qt::darkBlue)<<QColor(Qt::darkCyan)<<QColor(Qt::magenta);
}

void Verify::generateVerifyCode(int count)
{
    code.clear();
    int rangeSize=codePool.length();
    if(rangeSize<=0) return; //防止随机数生成边界小于等于0
    for(int i=0;i<count;i++)
    {
        int randomValue = QRandomGenerator::global()->bounded(rangeSize-1);
        code.push_back(codePool.mid(randomValue,1));
    }
}


void Verify::drawDisturb(QPainter &painter)
{
    int num = m_vecColor.size();
    if(QRandomGenerator::global()->generate()%2)//干扰线
    {
        painter.setPen(QPen(QBrush(QColor(m_vecColor.at(QRandomGenerator::global()->generate()%num))),1));
        painter.drawLine(0,QRandomGenerator::global()->generate()%boxHeight,boxWidth,QRandomGenerator::global()->generate()%boxHeight);
        painter.drawLine(0,QRandomGenerator::global()->generate()%boxHeight,boxWidth,QRandomGenerator::global()->generate()%boxHeight);
        painter.drawLine(0,QRandomGenerator::global()->generate()%boxHeight,boxWidth,QRandomGenerator::global()->generate()%boxHeight);
        painter.drawLine(0,QRandomGenerator::global()->generate()%boxHeight,boxWidth,QRandomGenerator::global()->generate()%boxHeight);
    }
    else
    {
        painter.setPen(QPen(QBrush(QColor(m_vecColor.at(QRandomGenerator::global()->generate()%num))),1));
        painter.drawLine(0,boxHeight/5,boxWidth,boxHeight/5);
        painter.drawLine(0,boxHeight/5*2,boxWidth,boxHeight/5*2);
        painter.drawLine(0,boxHeight/5*3,boxWidth,boxHeight/5*3);
        painter.drawLine(0,boxHeight/5*4,boxWidth,boxHeight/5*4);
        painter.drawLine(boxWidth/6,0,boxWidth/6,boxHeight);
        painter.drawLine(boxWidth/6*2,0,boxWidth/6*2,boxHeight);
        painter.drawLine(boxWidth/6*3,0,boxWidth/6*3,boxHeight);
        painter.drawLine(boxWidth/6*4,0,boxWidth/6*4,boxHeight);
        painter.drawLine(boxWidth/6*5,0,boxWidth/6*5,boxHeight);
    }
    for(int i=0;i<500;i++)//干扰点
    {
        painter.setPen(QPen(QBrush(QColor(m_vecColor.at(QRandomGenerator::global()->generate()%num))),1));
        painter.drawPoint(QRandomGenerator::global()->generate()%boxWidth,QRandomGenerator::global()->generate()%boxHeight);
    }
}

void Verify::rotateAngle(QPainter &painter)
{
    //旋转随机角度
    if(QRandomGenerator::global()->generate()%2)
    {
        painter.rotate(QRandomGenerator::global()->generate()%20);
    }
    else
    {
        painter.rotate(-QRandomGenerator::global()->generate()%20);
    }
}

void Verify::scaleSize(QPainter &painter)
{
    double xSize = (QRandomGenerator::global()->generate()%3+9)/10.0;
    double ySize = (QRandomGenerator::global()->generate()%5+9)/10.0;
    painter.scale(xSize,ySize);
}

//随机扭曲字符
void Verify::shearForm(QPainter &painter)
{
    //扭曲的效果 范围-0.3-0.3
    double xShear = QRandomGenerator::global()->generate()%4/10.0;
    double yShear = QRandomGenerator::global()->generate()%4/10.0;
    if(QRandomGenerator::global()->generate()%2)
    {
        xShear = -xShear;
    }
    if(QRandomGenerator::global()->generate()%2)
    {
        yShear = -yShear;
    }
    painter.shear(xShear,yShear);
}

void Verify::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setPen(Qt::NoPen);
    painter.setBrush(QBrush(Qt::white));
    QRect rect(QPoint(0,0),this->size());
    painter.drawRect(rect);

    draw(painter);
    QWidget::paintEvent(event);
}

void Verify::draw(QPainter &painter)
{
    drawDisturb(painter);

    int num = m_vecColor.size();
    int charWidth = (boxWidth-12)/code.size();
    for(int i=0;i<code.size();i++)
    {
        painter.setPen(QColor(m_vecColor.at(QRandomGenerator::global()->generate()%num)));
        painter.save();
        int charSpace = (charWidth-this->fontMetrics().horizontalAdvance(code.at(i)))/2;
        charSpace += 12/6;
        painter.translate(i*charWidth+charSpace,0);
        if(QRandomGenerator::global()->generate()%2)
        {
            rotateAngle(painter);
            scaleSize(painter);
        }
        else
        {
            shearForm(painter);
        }
        painter.drawText(0,boxHeight-12,code.at(i));
        painter.restore();
    }
}


