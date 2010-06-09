#ifndef QUESTEDITOR_H
#define QUESTEDITOR_H

#include <QWidget>
#include "../Questions/Questions.h"

namespace Ui {
    class QuestEditor;
}

class QuestEditor : public QWidget {
    Q_OBJECT
public:
    QuestEditor(QWidget* parent, bool nowe, Quest& pytanie);
    ~QuestEditor();

protected:
    void changeEvent(QEvent *e);
    int PobierzIndex(QChar odp);

private:
    Ui::QuestEditor *ui;
    Quest& m_pytanie;
    bool m_nowe;

public slots:
    void ZatwierdzZmiany();
    void Wyjdz();
};

#endif // QUESTEDITOR_H
