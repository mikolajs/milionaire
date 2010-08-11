/*
 * kmilionview.cpp
 *
 * Copyright (C) 2008 Mikołaj Sochack <mikolajsochacki@gmail.com>
 */
#include "kmilionview.h"
#include "settings.h"

#include <klocale.h>
#include <QtGui/QLabel>

KMilionView::KMilionView(QWidget *)
{
    ui_kmilionview_base.setupUi(this);
    settingsChanged();
    setAutoFillBackground(true);
}

KMilionView::~KMilionView()
{

}

// void KMilionView::switchColors()
// {
//     // switch the foreground/background colors of the label
//     QColor color = Settings::col_background();
//     Settings::setCol_background( Settings::col_foreground() );
//     Settings::setCol_foreground( color );
// 
//     settingsChanged();
// }
// 
// void KMilionView::settingsChanged()
// {
//     QPalette pal;
//     pal.setColor( QPalette::Window, Settings::col_background());
//     pal.setColor( QPalette::WindowText, Settings::col_foreground());
//     ui_kmilionview_base.kcfg_sillyLabel->setPalette( pal );
// 
//     // i18n : internationalization
//     ui_kmilionview_base.kcfg_sillyLabel->setText( i18n("This project is %1 days old",Settings::val_time()) );
//     emit signalChangeStatusbar( i18n("Settings changed") );
// }
// 
// #include "kmilionview.moc"
