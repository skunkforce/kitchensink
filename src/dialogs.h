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

#ifndef DIALOGS_H
#define DIALOGS_H

#include "ui_dialogs.h"

#include <QWidget>
#include <qstringfwd.h>

class QErrorMessage;

class Dialogs : public QWidget
{
   CS_OBJECT(Dialogs)

   public:
      Dialogs(QWidget *parent = nullptr);
      ~Dialogs();

   private:
      // slot declarations
      void setInteger();
      void setDouble();
      void setItem();
      void setText();
      void setExistingDirectory();
      void setOpenFileName();
      void setOpenFileNames();
      void criticalMessage();
      void informationMessage();
      void questionMessage();
      void warningMessage();
      void errorMessage();

      Ui::Dialogs *ui;
      QErrorMessage *errorMessageDialog;
      QString openFilesPath;
};

#endif
