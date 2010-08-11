/*
 * kmilionview.h
 *
 * Copyright (C) 2007 Mikołaj Sochack <mikolajsochacki@gmail.com>
 */
#ifndef KMILIONVIEW_H
#define KMILIONVIEW_H

#include <QtGui/QWidget>

#include "ui_kmilionview_base.h"

class QPainter;
class KUrl;

/**
 * This is the main view class for KMilion.  Most of the non-menu,
 * non-toolbar, and non-statusbar (e.g., non frame) GUI code should go
 * here.
 *
 * @short Main view
 * @author %{AUTHOR} <%{EMAIL}>
 * @version %{VERSION}
 */

class KMilionView : public QWidget, public Ui::kmilionview_base
{
    Q_OBJECT
public:
    /**
     * Default constructor
     */
    KMilionView(QWidget *parent);

    /**
     * Destructor
     */
    virtual ~KMilionView();

private:
    Ui::kmilionview_base ui_kmilionview_base;

signals:
    /**
     * Use this signal to change the content of the statusbar
     */
    void signalChangeStatusbar(const QString& text);

    /**
     * Use this signal to change the content of the caption
     */
    void signalChangeCaption(const QString& text);

private slots:
    void switchColors();
    void settingsChanged();
};

#endif // KMilionVIEW_H
