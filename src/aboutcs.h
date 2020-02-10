/**********************************************************************
*
* Copyright (c) 2012-2020 Barbara Geller
* Copyright (c) 2015 The Qt Company Ltd.
*
* You may use this file under the terms of the 2-Clause BSD license
* provided with KitchenSink or available at:
*
* https://opensource.org/licenses/BSD-2-Clause
*
* KitchenSink is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
*
***********************************************************************/

#ifndef ABOUTCS_H
#define ABOUTCS_H

#include <QWidget>

class QWebView;

class AboutCS : public QWidget
{
   CS_OBJECT(AboutCS)

   public:
      AboutCS(QString route);
      QSize sizeHint() const override;

   private:
      // slot declarations
      void actionClose();
      void actionHome();

      QWebView *m_viewer;
};

#endif
