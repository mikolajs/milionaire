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

#ifndef KMILION_H
#define KMILION_H


#include <kxmlguiwindow.h>

class QuizShow;
class QuizEdit;

class KMilionView;
class QPrinter;
class KToggleAction;
class KUrl;

/**
 * This class serves as the main window for KMilion.  It handles the
 * menus, toolbars, and status bars.
 *
 * @short Main window class
 * @author %{AUTHOR} <%{EMAIL}>
 * @version %{VERSION}
 */
class KMilion : public KXmlGuiWindow
{
    Q_OBJECT
public:
    /**
     * Default Constructor
     */
    KMilion();

    /**
     * Default Destructor
     */
    virtual ~KMilion();
    /** ustawienie rozmiaru okna - przy pokazie testów i powrocie*/
     void setScreenSize(int w, int h);

public slots:
    void runGame ();

protected:
    //przełapanie powrotu do edycji i końca gry
    virtual void keyPressEvent(QKeyEvent *);
  

private:
    
    //KMilionView *m_view;
    void setupActions();
    
    QRect smallSize;
    QuizEdit* editorWidget;
    QuizShow* showWidget;
    //flaga informująca czy jest uruchomiony Quiz
    bool isGame;
    int screenWidth_;
    int screenHeight_;

    //QPrinter   *m_printer;
    KToggleAction *m_toolbarAction;
    KToggleAction *m_statusbarAction;


};

#endif // _KMILION_H_
