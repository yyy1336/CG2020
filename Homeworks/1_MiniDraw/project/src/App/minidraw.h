#pragma once

#include <ui_minidraw.h>
#include <viewwidget.h>

#include <QtWidgets/QMainWindow>
#include <qmessagebox.h>

class MiniDraw : public QMainWindow {
	Q_OBJECT

public:
	MiniDraw(QWidget* parent = 0);
	~MiniDraw();

	QMenu* pMenu;
	QToolBar* pToolBar;
	QAction* Action_About;
	QAction* Action_Line;
	QAction* Action_Rect;
	QAction* Action_Ellipse;
	QAction* Action_Polygon;

	QAction* Action_Color;
	QAction* Action_Width;

	void Creat_Menu();
	void Creat_ToolBar();
	void Creat_Action();

	void AboutBox();

	void color_slot();
	void width_slot();

signals:
	void change_color(QColor);
	void change_width(int);


private:
	Ui::MiniDrawClass ui;
	ViewWidget* view_widget_;
};
