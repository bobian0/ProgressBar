#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QProgressBar>
#include <QTimer>
#include <QDebug>
#include <QFileDialog>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timer1 = new QTimer(this);

    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(slot_timego()));
    connect(timer1,SIGNAL(timeout()),this,SLOT(slot_timeout()));

//    timer2 = new QTimer(this);

//    //进度条
//    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(slots_timego()));
//    connect(timer1,SIGNAL(timesout()),this,SLOT(slot_timeout()));
//    slots_timego();
    //动态图片
//    pixmap = new QPixmap();
//    pixmap->load(":/boneage/huli_"+QString::number(image_cnt)+".png");
//    ui->photo_show->setPixmap(*pixmap);
//    ui->photo_show->setScaledContents(true);

//    connect(timer2,SIGNAL(timeout()),this,SLOT(slot_photo_show()));


    //选择文件
//    connect(ui->select_file,SIGNAL(clicked()),this,SLOT(slot_filechosen_clicked()));
//    connect(ui->select_file,SIGNAL(clicked()),this,SLOT(slot_timeage()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

//进度条
void MainWindow::slot_timeout()
{
   //qDebug() << "index = " << index;
   index = ui->progressBar->value();
   index++;

   if(index >= 100 )
   {
       index = 0;
       timer1->stop();

   }
   ui->progressBar->setValue(index);
}

void MainWindow::slot_timeago()
{
   timer1->start(10);
}

//void MainWindow::slots_timego()
//{
//    image_cnt = 0;

//    timer1->start(1000);
//    timer2->start(100);
//}

//void MainWindow::slot_photo_show()
//{
//    //qDebug() << "iamge_cnt = " << image_cnt;
//    pixmap->load(":/boneage/huli_"+QString::number(image_cnt)+".png");
//    image_cnt++;

//    if(image_cnt >= 30)
//    {
//        image_cnt = 0;
//        timer2->stop();
//    }
//    ui->photo_show->setPixmap(*pixmap);
//    qDebug() << "timer start";
//}

//void MainWindow::slot_timeout()
//{
//    qDebug() << "index = " << index;
//    index = ui->progressBar->value();
//    index++;

//    if(index >= 100 )
//    {
//        index = 0;
//        timer1->stop();

//    }
//    ui->progressBar->setValue(index);
//}


//void MainWindow::slot_filechosen_clicked()
//{
//    QString filename;
//    filename = QFileDialog::getOpenFileName(this,tr("选择图像"),"",tr("Images(*.dcm *.jpg *.png *.bmp)"));

//    if(filename.isEmpty())
//    {
//        return;
//    }else
//    {
//        QImage * img = new QImage;
//        if(!(img->load(filename)))
//        {
//            QMessageBox::information(this,tr("图像打开失败"),tr("图像打开失败！"));
//            delete img;
//            return;
//        }
//        ui->photo_show->setPixmap(QPixmap::fromImage(*img));
//        ui->photo_show->setSizePolicy(QSizePolicy::Ignored,QSizePolicy::Ignored);

//        //自适应大小
//        //ui->label_waa_pictureshow->setScaledContents(true);

//    }
//}

