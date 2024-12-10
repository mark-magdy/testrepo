#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_guigit.h"

class guigit : public QMainWindow
{
    Q_OBJECT

public:
    guigit(QWidget *parent = nullptr);
    ~guigit();

private:
    Ui::guigitClass ui;
};
