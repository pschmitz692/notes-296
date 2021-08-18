#ifndef EDITORSETTINGSBUTTON_H
#define EDITORSETTINGSBUTTON_H

#include <QPushButton>

class EditorSettingsButton : public QPushButton
{
    Q_OBJECT
public:
    EditorSettingsButton(QWidget *parent = Q_NULLPTR);
    void paintEvent(QPaintEvent *p);
    void changeFont(QString fontName, QString fontTypeface, QColor fontColor);

private:
    QString m_currentFontName;
    QString m_currentFontTypeface;
    QColor m_currentFontColor;
};

#endif // EDITORSETTINGSBUTTON_H
