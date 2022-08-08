#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QPixmap>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    QTimer * timer1;
//    QTimer * timer2;
//    QPixmap * pixmap;

//    int image_cnt;
    int index;

private slots:
    //刷新定时器
    void slot_timeago();
//    //计时器开始
//    void slots_timego();
//    //进度条控制
//   void slot_timeout();
//    //30张图片显示控制
//    void slot_photo_show();
//    //选择文件
//    void slot_filechosen_clicked();
    void slot_timeout();

};
#endif // MAINWINDOW_H
