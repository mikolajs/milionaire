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
#include <kapplication.h>
#include <kaboutdata.h>
#include <kcmdlineargs.h>
#include <KDE/KLocale>
#include <QtCore/QRect>
#include <QDesktopWidget>

static const char description[] =
  I18N_NOOP ( "A KDE 4 Quiz Application" );

static const char version[] = "0.9.1";

int main ( int argc, char **argv ) {
  KAboutData about ( "kmilion", 0, ki18n ( "KMilion" ), version, ki18n ( description ),
                     KAboutData::License_GPL, ki18n ( "(C) 2010 Mikołaj Sochacki" ), KLocalizedString(), 0, "mikolajsochacki@gmail.com" );
  about.addAuthor ( ki18n ( "Mikołaj Sochacki" ), KLocalizedString(), "mikolajsochacki@gmail.com" );
  KCmdLineArgs::init ( argc, argv, &about );

  KCmdLineOptions options;
  options.add ( "+[URL]", ki18n ( "Document to open" ) );
  KCmdLineArgs::addCmdLineOptions ( options );
  KApplication app;
  
  KMilion *widget = new KMilion;
  const QRect r = app.desktop()->frameGeometry();
  widget->setScreenSize ( r.width(), r.height() );
  KCmdLineArgs *args;
  if ( app.isSessionRestored() ) {
      RESTORE ( KMilion );
    }
  else {
      args = KCmdLineArgs::parsedArgs();
      widget->show();
    }
  args->clear();

  // Tak jest w orginale nie mam pojęcia dlaczego? Szczególnie po co kilka razy show!
  //see if we are starting with session management
//     if (app.isSessionRestored())
//     {
//         RESTORE(KMilion);
//     }
//     else
//     {
//         // no session.. just start up normally
//         KCmdLineArgs *args = KCmdLineArgs::parsedArgs();
//         if (args->count() == 0)
//         {
//             //kmilion *widget = new kmilion;
//             widget->show();
//         }
//         else
//         {
//             int i = 0;
//             for (; i < args->count(); i++)
//             {
//                 //kmilion *widget = new kmilion;
//                 widget->show();
//             }
//         }
//         args->clear();
//     }

  return app.exec();
}
