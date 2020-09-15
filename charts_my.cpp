#include "charts_my.h"
#include "ui_charts_my.h"
//QChart *m_chart = new QChart();
charts_my::charts_my(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::charts_my)
{
    setWindowFlag((Qt::FramelessWindowHint));
   // this->setWindowFlags(Qt::Dialog|Qt::FramelessWindowHint);
    //    this->setWindowFlags(Qt::WindowTitleHint|Qt::WindowMinimizeButtonHint);
   // this->setWindowFlags(setWindowFlag()|Qt::WindowCloseButtonHint);
    ui->setupUi(this);
    //setAttribute(Qt::WA_DeleteOnClose);
    this->setWindowModality(Qt::ApplicationModal);
    this->setFixedSize(this->size().width(),this->size().height());
    QChart *m_chart = new QChart();

if( modetj == 2)
{
      //创建1个条线数据
        QBarSet *set0 = new QBarSet("花白猪");
        QBarSet *set1 = new QBarSet("白猪");
        QBarSet *set2 = new QBarSet("黑猪");
        *set0 << hua2[1] <<  hua2[2]<<  hua2[3] ;
        *set1 << bai2[1] <<  bai2[2]<<  bai2[3] ;
        *set2 <<hei2[1] <<  hei2[2]<<  hei2[3] ;

        set0->setLabelColor(QColor(0,0,0));          //设置条形数据颜色
        set0->setColor(QColor(135,206,250));
        set1->setLabelColor(QColor(0,0,0));
        set1->setColor(QColor(127,255,0));
        set2->setLabelColor(QColor(0,0,0));
        set2->setColor(QColor(245,245,220));

        QBarSeries *series = new QBarSeries();
        series->append(set0);
        series->append(set1);
        series->append(set2);
        series->setVisible(true);
        series->setLabelsVisible(true);

        m_chart->setTheme(QChart::ChartThemeLight);//设置白色主题
        m_chart->setDropShadowEnabled(true);//背景阴影
        m_chart->addSeries(series);//添加系列到QChart上

        m_chart->setTitleBrush(QBrush(QColor(255,69,0)));//设置标题Brush
        m_chart->setTitleFont(QFont("微软雅黑"));//设置标题字体
        m_chart->setTitle("各品种猪养殖天数统计图");

        //创建X轴和Y轴
        QBarCategoryAxis *axisX = new QBarCategoryAxis;
        axisX->append("小于90天");
        axisX->append("90天到180天");
        axisX->append("大于180天");
        //axisX->append("四月");
       // axisX->append("五月");
        axisX->setLabelsColor(QColor(255,165,0));

        QValueAxis *axisY = new QValueAxis;
        axisY->setRange(0,350);   //改为setRange(0,1);则表示坐标为动态计算大小的
        axisY->setTitleText("数量");
        axisY->setLabelFormat("头");

        m_chart->setAxisX(axisX,series);
        m_chart->setAxisY(axisY,series);

        //修改说明样式
        m_chart->legend()->setVisible(true);
        m_chart->legend()->setAlignment(Qt::AlignBottom);//底部对齐
        m_chart->legend()->setBackgroundVisible(true);//设置背景是否可视
        m_chart->legend()->setAutoFillBackground(true);//设置背景自动填充
        m_chart->legend()->setColor(QColor(222,233,251));//设置颜色
        m_chart->legend()->setLabelColor(QColor(255,165,0));//设置标签颜色
        m_chart->legend()->setMaximumHeight(50);

   QChartView *chartView = new QChartView(m_chart);
        chartView->setRenderHint(QPainter::Antialiasing);


    QVBoxLayout *pVLayout = new QVBoxLayout(this);
        pVLayout->addWidget(chartView);
        ui->pushButton->raise();
       resize(960, 720);
}
    if( modetj == 1)
    {
        QBarSet *set0 = new QBarSet("数量");
        //QBarSet *set1 = new QBarSet("水果");
        //QBarSet *set2 = new QBarSet("主食");
        qDebug() << bai1 << hua1<< hei1 <<"  mt";
        *set0 << bai1 << hua1<< hei1 ;
       // *set1 << 350 << 725 << 602 << 523 << 458;
        //*set2 << 222 << 350 << 598 << 480 << 687;

        set0->setLabelColor(QColor(0,0,0));       //设置条形数据颜色
        set0->setColor(QColor(135,206,250));
       // set1->setLabelColor(QColor(0,0,255));
        //set2->setLabelColor(QColor(0,0,255));

        QBarSeries *series = new QBarSeries();
        series->append(set0);
        //series->append(set1);
        //series->append(set2);
        series->setVisible(true);
        series->setLabelsVisible(true);

        m_chart->setTheme(QChart::ChartThemeLight);//设置白色主题
        m_chart->setDropShadowEnabled(true);//背景阴影
        m_chart->addSeries(series);//添加系列到QChart上

        m_chart->setTitleBrush(QBrush(QColor(255,69,0)));//设置标题Brush
        m_chart->setTitleFont(QFont("微软雅黑"));//设置标题字体
        m_chart->setTitle("各品种猪数量统计图");

        //创建X轴和Y轴
        QBarCategoryAxis *axisX = new QBarCategoryAxis;
        axisX->append("白猪");
        axisX->append("花白猪");
        axisX->append("黑猪");
        //axisX->append("四月");
       // axisX->append("五月");
        axisX->setLabelsColor(QColor(255,165,0));

        QValueAxis *axisY = new QValueAxis;
        axisY->setRange(0,700);   //改为setRange(0,1);则表示坐标为动态计算大小的
        axisY->setTitleText("数量");
        axisY->setLabelFormat("头");

        m_chart->setAxisX(axisX,series);
        m_chart->setAxisY(axisY,series);

        //修改说明样式
        m_chart->legend()->setVisible(true);
        m_chart->legend()->setAlignment(Qt::AlignBottom);//底部对齐
        m_chart->legend()->setBackgroundVisible(true);//设置背景是否可视
        m_chart->legend()->setAutoFillBackground(true);//设置背景自动填充
        m_chart->legend()->setColor(QColor(222,233,251));//设置颜色
        m_chart->legend()->setLabelColor(QColor(255,165,0));//设置标签颜色
        m_chart->legend()->setMaximumHeight(50);

        QChartView *chartView = new QChartView(m_chart);
        chartView->setRenderHint(QPainter::Antialiasing);

        QVBoxLayout *pVLayout = new QVBoxLayout(this);
        pVLayout->addWidget(chartView);
        ui->pushButton->raise();
        resize(960, 720);
        //my_timer7->stop();

        }
    if( modetj == 3)
    {
          //创建1个条线数据
            QBarSet *set0 = new QBarSet("花白猪");
            QBarSet *set1 = new QBarSet("白猪");
            QBarSet *set2 = new QBarSet("黑猪");
            *set0 << hua2[1] <<  hua2[2]<<  hua2[3] ;
           *set1 << bai2[1] <<  bai2[2]<<  bai2[3] ;
            *set2 <<hei2[1] <<  hei2[2]<<  hei2[3] ;

            set2->setLabelColor(QColor(0,0,0));       //设置条形数据颜色
            set2->setColor(QColor(135,206,250));
            set0->setLabelColor(QColor(0,0,0));
            set0->setColor(QColor(127,255,0));
            set1->setLabelColor(QColor(0,0,0));
            set1->setColor(QColor(245,245,220));

            QBarSeries *series = new QBarSeries();
            series->append(set0);
            series->append(set1);
            series->append(set2);
            series->setVisible(true);
            series->setLabelsVisible(true);

            m_chart->setTheme(QChart::ChartThemeLight);//设置白色主题
            m_chart->setDropShadowEnabled(true);//背景阴影
            m_chart->addSeries(series);//添加系列到QChart上

            m_chart->setTitleBrush(QBrush(QColor(255,69,0)));//设置标题Brush
            m_chart->setTitleFont(QFont("微软雅黑"));//设置标题字体
            m_chart->setTitle("各品种猪重量统计图");

            //创建X轴和Y轴
            QBarCategoryAxis *axisX = new QBarCategoryAxis;
            axisX->append("小于35KG");
            axisX->append("35KG到55KG天");
            axisX->append("大于55KG");
            //axisX->append("四月");
           // axisX->append("五月");
            axisX->setLabelsColor(QColor(255,165,0));

            QValueAxis *axisY = new QValueAxis;
            axisY->setRange(0,350);   //改为setRange(0,1);则表示坐标为动态计算大小的
            axisY->setTitleText("数量");
            axisY->setLabelFormat("头");

            m_chart->setAxisX(axisX,series);
            m_chart->setAxisY(axisY,series);

            //修改说明样式
            m_chart->legend()->setVisible(true);
            m_chart->legend()->setAlignment(Qt::AlignBottom);//底部对齐
            m_chart->legend()->setBackgroundVisible(true);//设置背景是否可视
            m_chart->legend()->setAutoFillBackground(true);//设置背景自动填充
            m_chart->legend()->setColor(QColor(222,233,251));//设置颜色
            m_chart->legend()->setLabelColor(QColor(255,165,0));//设置标签颜色
            m_chart->legend()->setMaximumHeight(50);

       QChartView *chartView = new QChartView(m_chart);
            chartView->setRenderHint(QPainter::Antialiasing);


        QVBoxLayout *pVLayout = new QVBoxLayout(this);
            pVLayout->addWidget(chartView);
            ui->pushButton->raise();
           resize(960, 720);
    }
}

charts_my::~charts_my()
{
    delete ui;
}

void charts_my::on_pushButton_clicked()
{
    this->hide();
}
