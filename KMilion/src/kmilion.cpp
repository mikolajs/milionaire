/*
    Quiz KMilion program
    Copyright (C) 2010  Mikołaj Sochacki

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/

#include "kmilion.h"
#include "QuizEdit.h"
#include "QuizShow.h"

#include <QtGui/QDropEvent>
#include <QtGui/QPainter>
#include <QtGui/QPrinter>

#include <kconfigdialog.h>
#include <kstatusbar.h>

#include <kaction.h>
#include <kactioncollection.h>
#include <kstandardaction.h>
#include <kmessagebox.h>

#include <kmenubar.h>
#include <ktoolbar.h>

#include <KDE/KLocale>

KMilion::KMilion()
    : KXmlGuiWindow(),
      editorWidget(new QuizEdit(this))
{
    // accept dnd
    setAcceptDrops(true);

    // tell the KXmlGuiWindow that this is indeed the main widget
    setCentralWidget(editorWidget);

    // then, setup our actions
    setupActions();

    // add a status bar
    statusBar()->show();
    
    
    //scieżka do pliku z pytaniami
    
    
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));

   
   
    //editorWidget = new QuizEdit(this);
    editorWidget->setGeometry(6,30,800,500);

    showWidget = new QuizShow(this);
    showWidget->setGeometry(0,5,744,600);
    showWidget->hide();

    isGame = false;

   

    
    // a call to KXmlGuiWindow::setupGUI() populates the GUI
    // with actions, using KXMLGUI.
    // It also applies the saved mainwindow settings, if any, and ask the
    // mainwindow to automatically save settings if changed: window size,
    // toolbar position, icon size, etc.
    setupGUI();
    
    menuWidget()->show();
    toolBar()->show();
    
    smallSize.setCoords(30,30,840,600);
    setGeometry(smallSize);
}

KMilion::~KMilion()
{
}

void KMilion::setupActions()
{
  //akcja uruchomienia gry
  KAction* runAction = new KAction(this);
  runAction->setText(i18n("&Run Quiz"));
  runAction->setIcon(KIcon("system-run"));
  runAction->setShortcut(Qt::CTRL + Qt::Key_R);
  actionCollection()->addAction("run", runAction);
  connect(runAction, SIGNAL(triggered(bool)), this, SLOT(runGame()));
  
//     KStandardAction::preferences(this, SLOT(optionsPreferences()), actionCollection()); 
    KStandardAction::quit(qApp, SLOT(closeAllWindows()), actionCollection());
    
    KStandardAction::open(editorWidget,SLOT(loadTestFile()),actionCollection());
    KStandardAction::save(editorWidget,SLOT(saveTestFileOld()),actionCollection());
    KStandardAction::saveAs(editorWidget,SLOT(saveTestFileNew()),actionCollection());      
    KStandardAction::openNew(editorWidget, SLOT(createTestFileNew()), actionCollection());
}


//slot uruchamiający grę
void KMilion::runGame()
{
    QString path = editorWidget->getPath();
    if (path.isEmpty()) {
        KMessageBox::error(this,i18n("Choose file with quiz before"),i18n("File error"));
        return;
    }
    isGame = true;
    editorWidget->hide();
    
    menuWidget()->hide();
    toolBar()->hide();
    statusBar()->hide();
    
    qDebug() << "Ścieżka do pliku xml " + path;
    showFullScreen();
    setStyleSheet(QString::fromUtf8("background-color: rgb(70, 82, 255);"));

    showWidget->setGeometry((screenWidth_ - 744)/2,(screenHeight_ -600)/2,744,600);
    showWidget->show();
    showWidget->refreshData(editorWidget->getPath());

}

void KMilion::setScreenSize(int w, int h)
{
    screenWidth_ = w;
    screenHeight_ = h;
}


///@override virtual wyjście z quizu  i powrót do edycji
void KMilion::keyPressEvent(QKeyEvent* kevent)
{
    if (isGame) {
        if (kevent->key() == Qt::Key_E && kevent->modifiers() == Qt::ControlModifier) {
            //qDebug() << "Wciśnięto Ctrl + E";
           showWidget->hide();
           showNormal();
           setStyleSheet(QString::fromUtf8("background-color: none;"));
           setGeometry(smallSize);
           editorWidget->show();
           
          
           menuWidget()->show();
           toolBar()->show();
           statusBar()->show();
           
           
           isGame = false;
        }
    }
        kevent->accept();

}
