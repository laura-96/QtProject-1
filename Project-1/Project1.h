#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Project1.h"

class Project1 : public QMainWindow
{
	Q_OBJECT

public:
	Project1(QWidget *parent = Q_NULLPTR);

private:
	Ui::Project1Class ui;
};
