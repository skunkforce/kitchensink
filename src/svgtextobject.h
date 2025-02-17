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

#ifndef SVGTEXTOBJECT_H
#define SVGTEXTOBJECT_H

#include <QTextFormat>
#include <QTextObjectInterface>

class SvgTextObject : public QObject, public QTextObjectInterface
{
   CS_OBJECT(SvgTextObject)
   CS_INTERFACES(QTextObjectInterface)

   public:
      QSizeF intrinsicSize(QTextDocument *doc, int posInDocument, const QTextFormat &format);
      void drawObject(QPainter *painter, const QRectF &rect,
                  QTextDocument *doc, int posInDocument, const QTextFormat &format);
};

#endif
