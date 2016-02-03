#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ads/API.h"

namespace Ui {
class MainWindow;
}

ADS_NAMESPACE_BEGIN
class ContainerWidget;
ADS_NAMESPACE_END

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = 0);
	virtual ~MainWindow();

private slots:
	void onActionAddSectionContentTriggered();

protected:
	virtual void contextMenuEvent(QContextMenuEvent* e);

private:
	Ui::MainWindow *ui;
	ads::ContainerWidget* _container;
};

#endif // MAINWINDOW_H
