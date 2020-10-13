﻿#ifndef SYSTEMPARAMETERSCHILD_H
#define SYSTEMPARAMETERSCHILD_H

#include "ChildInterface.h"
#include "ListViewEx.h"
#include <QWidget>
#include <QStandardItemModel>
#include <QVBoxLayout>
#include <QListView>

class SystemParametersChild : public QWidget, public ChildInterface
{
    Q_OBJECT
    Q_INTERFACES(ChildInterface)
public:
    explicit SystemParametersChild(QWidget *parent = Q_NULLPTR);
    ~SystemParametersChild();

public:
    void buildUserInterface(QMainWindow* pMainWin);
    void removeUserInterface(QMainWindow* pMainWin);
    QString wndTitle() const;

private slots:
    void onSlotListViewProjectDoubleClicked(const QModelIndex &index);

private:
    QStandardItemModel *m_pListViewProjectModelObj = Q_NULLPTR;
    ListViewEx *m_pListViewProjectObj = Q_NULLPTR;
};

#endif
