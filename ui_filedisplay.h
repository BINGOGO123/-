/********************************************************************************
** Form generated from reading UI file 'filedisplay.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEDISPLAY_H
#define UI_FILEDISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileDisplay
{
public:
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_3;
    QTableWidget *tableWidget;

    void setupUi(QDialog *FileDisplay)
    {
        if (FileDisplay->objectName().isEmpty())
            FileDisplay->setObjectName(QStringLiteral("FileDisplay"));
        FileDisplay->resize(1000, 800);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FileDisplay->sizePolicy().hasHeightForWidth());
        FileDisplay->setSizePolicy(sizePolicy);
        FileDisplay->setMinimumSize(QSize(1000, 800));
        QIcon icon;
        icon.addFile(QStringLiteral(":/myImage/images/open.ico"), QSize(), QIcon::Normal, QIcon::Off);
        FileDisplay->setWindowIcon(icon);
        horizontalLayout_2 = new QHBoxLayout(FileDisplay);
        horizontalLayout_2->setSpacing(4);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(4, 4, 4, 4);
        widget = new QWidget(FileDisplay);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QStringLiteral("background-color: rgb(61, 61, 61);"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/myImage/images/ui.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(60, 60));
        pushButton_2->setFlat(true);

        verticalLayout->addWidget(pushButton_2);

        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/myImage/images/min.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon2);
        pushButton_6->setIconSize(QSize(60, 60));
        pushButton_6->setFlat(true);

        verticalLayout->addWidget(pushButton_6);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/myImage/images/close.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon3);
        pushButton_5->setIconSize(QSize(60, 60));
        pushButton_5->setFlat(true);

        verticalLayout->addWidget(pushButton_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addWidget(widget);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(4);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        tableWidget = new QTableWidget(FileDisplay);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout_3->addWidget(tableWidget);


        horizontalLayout_2->addLayout(verticalLayout_3);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 6);

        retranslateUi(FileDisplay);

        QMetaObject::connectSlotsByName(FileDisplay);
    } // setupUi

    void retranslateUi(QDialog *FileDisplay)
    {
        FileDisplay->setWindowTitle(QApplication::translate("FileDisplay", "\346\211\223\345\274\200\346\226\207\344\273\266", 0));
        pushButton_2->setText(QString());
        pushButton_6->setText(QString());
        pushButton_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FileDisplay: public Ui_FileDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEDISPLAY_H
