/*
 * Copyright (C) 2011 ~ 2019 Deepin Technology Co., Ltd.
 *
 * Author:     zorowk <near.kingzero@gmail.com>
 *
 * Maintainer: zorowk <near.kingzero@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef BUBBLEGROUP_H
#define BUBBLEGROUP_H

#include <QPointer>
#include <QWidget>
#include <memory>
#include <DLabel>
#include <DIconButton>
#include <DListView>
#include "expandanimation.h"

DWIDGET_USE_NAMESPACE

class QListView;
class BubbleItem;
class NotifyModel;
class BubbleDelegate;
class NotificationEntity;

class BubbleGroup : public QWidget
{
    Q_OBJECT
public:
    explicit BubbleGroup(QWidget *parent = nullptr, std::shared_ptr<NotifyModel> model = nullptr);
    void setGroupTitle(const QString &title) { group_title->setText(title); }
    void expandAnimation();

signals:
    void closeGroup();

protected:
    void enterEvent(QEvent *event) override;
    void leaveEvent(QEvent *event) override;

private:
    QList<QPointer<BubbleItem>> m_bubbleList;
    QWidget *m_titleWidget = nullptr;
    DListView *m_groupList = nullptr;
    BubbleDelegate *m_notifyDelegate = nullptr;
    DIconButton *title_close = nullptr;
    DLabel *group_title = nullptr;
    std::shared_ptr<NotifyModel> m_notifyModel = nullptr;
    QPointer<ExpandAnimation> m_expandAnimation = nullptr;
};

#endif // BUBBLEGROUP_H