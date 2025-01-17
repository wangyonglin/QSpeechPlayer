#include "MainWidget.h"
#include "ui_MainWidget.h"

#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <cctype>  // std::tolower
#include <string>
#include <QVBoxLayout>

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWidget),
    qASRPlayer(new QASRPlayer(parent))

{

    ui->setupUi(this);
    QVBoxLayout* vLay = new QVBoxLayout(this);
    vLay->addWidget(qASRPlayer);
    setLayout(vLay);//设置垂直布局

}
MainWidget::~MainWidget()
{

    delete ui;
}
