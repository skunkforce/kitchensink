/***********************************************************************
*
* Copyright (c) 2012-2022 Barbara Geller
* Copyright (c) 2012-2022 Ansel Sermersheim
* Copyright (c) 2015 The Qt Company Ltd.
*
* This file is part of KitchenSink.
*
* KitchenSink is free software, released under the BSD 2-Clause license.
* For license details refer to LICENSE provided with this project.
*
* CopperSpice is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
*
* https://opensource.org/licenses/BSD-2-Clause
*
***********************************************************************/

#ifndef FRIDGEMAG_H
#define FRIDGEMAG_H

#include <QDragEnterEvent>
#include <QDropEvent>
#include <QWidget>

class QSize;

class FridgeMagnet : public QWidget
{
   CS_OBJECT(FridgeMagnet)

   public:
      FridgeMagnet(QWidget *parent = nullptr);
      QSize sizeHint() const;

   protected:
      void dragEnterEvent(QDragEnterEvent *event);
      void dragMoveEvent(QDragMoveEvent *event);
      void dropEvent(QDropEvent *event);
      void mousePressEvent(QMouseEvent *event);
};

#endif
