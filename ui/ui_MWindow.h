/********************************************************************************
** Form generated from reading UI file 'MWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MWINDOW_H
#define UI_MWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MWindow
{
public:
    QAction *actionOpen;
    QAction *actionClear;
    QAction *actionExit;
    QAction *actionGo_Fullscreen;
    QAction *actionReset_Camera;
    QAction *actionRemove_Mesh;
    QAction *actionRemove_Both;
    QAction *actionRemove_High_Resolution_Data;
    QAction *actionRemove_Mesh_2;
    QAction *actionRemove_all;
    QAction *actionReset_Transform;
    QAction *actionReset_Scene;
    QAction *actionInformation;
    QAction *actionAbout_OpenVDBViewer;
    QWidget *centralwidget;
    QGridLayout *MainWindow;
    QGridLayout *gridLayout_20;
    QLabel *FileName;
    QDoubleSpinBox *sbx_lineWidth;
    QDoubleSpinBox *sbx_pointSize;
    QSpacerItem *horizontalSpacer_2;
    QLabel *lbl_pointSize;
    QLabel *lbl_lineWidth;
    QFrame *line_21;
    QFrame *line_20;
    QCheckBox *cbx_showGrid;
    QWidget *widget;
    QGridLayout *glWindow;
    QSpacerItem *horizontalSpacer;
    QTabWidget *tabs_tabControl;
    QWidget *tab;
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *gbox_Render;
    QGridLayout *gridLayout_5;
    QCheckBox *cbx_showMesh;
    QWidget *widget_3;
    QGridLayout *gridLayout_26;
    QLabel *lbl_renderChannel;
    QCheckBox *cbx_showBBox;
    QComboBox *cmbo_renderChannel;
    QFrame *line_4;
    QGroupBox *gbox_vdbTree;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *cbx_showVDBTree;
    QVBoxLayout *verticalLayout_6;
    QLabel *lbl_TreeLevels;
    QCheckBox *cbx_treeLevel3;
    QCheckBox *cbx_treeLevel2;
    QCheckBox *cbx_treeLevel1;
    QCheckBox *cbx_treeLevel0;
    QFrame *line_2;
    QGroupBox *gbox_LOD;
    QGridLayout *gridLayout_3;
    QSlider *hsld_LOD;
    QDoubleSpinBox *sbx_LODValue;
    QFrame *line;
    QPushButton *btn_showFileInformation;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_10;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *gbx_colourMap;
    QGridLayout *gridLayout_13;
    QGroupBox *gbx_applyColourRampTo;
    QGridLayout *gridLayout_25;
    QRadioButton *rdio_applyToFile;
    QRadioButton *rdio_applyToCulledPoints;
    QComboBox *cmbo_applyCullToChannelSelect;
    QLabel *lbl_applyCullToChannelSelect;
    QCheckBox *cbx_applyColourMap;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_15;
    QRadioButton *rdio_automaticColourMap;
    QRadioButton *rdio_userDefColourMap;
    QDoubleSpinBox *dsbx_colourRampBottom;
    QDoubleSpinBox *dsbx_colourRampTop;
    QLabel *lbl_colourRampBotoom;
    QLabel *lbl_colourRampTop;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_16;
    QSpinBox *sbx_colourRampRed;
    QSpinBox *sbx_colourRampGreen;
    QSpinBox *sbx_colourRampBlue;
    QLabel *lbl_colourRampRed;
    QLabel *lbl_colourRampGreen;
    QLabel *lbl_colourRampBlue;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_7;
    QRadioButton *rdio_pointRamp;
    QRadioButton *rdio_channelRamp;
    QFrame *line_5;
    QGroupBox *gbox_Vectors;
    QVBoxLayout *verticalLayout;
    QCheckBox *cbx_showVectors;
    QComboBox *cmbo_channelSelect;
    QLabel *lbl_VectorLength;
    QSlider *hsld_vectorLength;
    QFrame *line_3;
    QGroupBox *gbox_VectorOptions;
    QGridLayout *gridLayout_7;
    QComboBox *cmbo_vectorColourType;
    QLabel *lbl_Red;
    QSpinBox *sbx_blue;
    QLabel *lbl_Blue;
    QSpinBox *sbx_red;
    QSpinBox *sbx_green;
    QLabel *lbl_Green;
    QLabel *lbl_vectorColourType;
    QCheckBox *cbx_invertVectorColours;
    QWidget *tab_6;
    QVBoxLayout *verticalLayout_11;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_12;
    QGroupBox *gbx_culling;
    QGridLayout *gridLayout_14;
    QFrame *line_18;
    QFrame *line_17;
    QWidget *widget_5;
    QGridLayout *gridLayout_18;
    QCheckBox *cbx_useCulling2;
    QComboBox *cmbo_currentPointChannelCulling_2;
    QLabel *lbl_cull2Type;
    QLabel *lbl_cull2TypeChannel;
    QComboBox *cmbo_cullingChoice2;
    QGroupBox *gbx_cull2From;
    QGridLayout *gridLayout_21;
    QDoubleSpinBox *dsbx_cull2FromX;
    QDoubleSpinBox *dsbx_cull2FromY;
    QDoubleSpinBox *dsbx_cull2FromZ;
    QGroupBox *gbx_cull2To;
    QGridLayout *gridLayout_22;
    QDoubleSpinBox *dsbx_cull2ToX;
    QDoubleSpinBox *dsbx_cull2ToY;
    QDoubleSpinBox *dsbx_cull2ToZ;
    QWidget *widget_4;
    QGridLayout *gridLayout_17;
    QLabel *lbl_cull1Type;
    QLabel *lbl_cull1TypeChannel;
    QComboBox *cmbo_currentPointChannelCulling_1;
    QComboBox *cmbo_cullingChoice1;
    QCheckBox *cbx_useCulling1;
    QGroupBox *gbx_cull1From;
    QGridLayout *gridLayout_2;
    QDoubleSpinBox *dsbx_cull1FromX;
    QDoubleSpinBox *dsbx_cull1FromZ;
    QDoubleSpinBox *dsbx_cull1FromY;
    QGroupBox *gbx_cull1To;
    QGridLayout *gridLayout_4;
    QDoubleSpinBox *dsbx_cull1ToZ;
    QDoubleSpinBox *dsbx_cull1ToY;
    QDoubleSpinBox *dsbx_cull1ToX;
    QWidget *widget_6;
    QGridLayout *gridLayout_19;
    QComboBox *cmbo_currentPointChannelCulling_3;
    QLabel *lbl_cull3Type;
    QLabel *lbl_cull3TypeChannel;
    QComboBox *cmbo_cullingChoice3;
    QCheckBox *cbx_useCulling3;
    QGroupBox *gbx_cull3From;
    QGridLayout *gridLayout_23;
    QDoubleSpinBox *dsbx_cull3FromX;
    QDoubleSpinBox *dsbx_cull3FromY;
    QDoubleSpinBox *dsbx_cull3FromZ;
    QGroupBox *gbx_cull3To;
    QGridLayout *gridLayout_24;
    QDoubleSpinBox *dsbx_cull3ToX;
    QDoubleSpinBox *dsbx_cull3ToY;
    QDoubleSpinBox *dsbx_cull3ToZ;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_7;
    QScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_4;
    QVBoxLayout *verticalLayout_13;
    QGroupBox *gbox_Crop;
    QVBoxLayout *verticalLayout_9;
    QGridLayout *gridLayout_9;
    QCheckBox *cbx_useCrop;
    QLabel *lbl_numCrops;
    QComboBox *cmbo_numCrops;
    QFrame *line_11;
    QGridLayout *gridLayout_8;
    QLabel *lbl_depth;
    QLabel *lbl_height;
    QDoubleSpinBox *dsbx_cropWidth;
    QDoubleSpinBox *dsbx_cropX;
    QDoubleSpinBox *dsbx_cropY;
    QDoubleSpinBox *dsbx_cropZ;
    QLabel *lbl_cropNumber;
    QDoubleSpinBox *dsbx_cropHeight;
    QComboBox *cmbo_sliceSelection;
    QDoubleSpinBox *dsbx_cropDepth;
    QLabel *lbl_xPos;
    QLabel *lbl_yPos;
    QLabel *lbl_width;
    QLabel *lbl_zPos;
    QFrame *line_7;
    QGroupBox *gbox_ScanModel;
    QVBoxLayout *verticalLayout_8;
    QGridLayout *gridLayout_6;
    QComboBox *cmbo_scanType;
    QPushButton *btn_startSingleScan;
    QFrame *line_10;
    QPushButton *btn_PauseScan;
    QSlider *hsld_cropSlide;
    QFrame *line_12;
    QPushButton *btn_stopScan;
    QFrame *line_9;
    QGroupBox *gbox_ScanOptions;
    QGridLayout *gridLayout_10;
    QLabel *lbl_yScanHeight;
    QFrame *line_13;
    QLabel *lbl_scanSpeed;
    QSlider *hsld_scanSpeed;
    QLabel *lbl_zScanDepth;
    QDoubleSpinBox *dsbx_yScanHeight;
    QLabel *lbl_xScanWidth;
    QDoubleSpinBox *dsbx_zScanDepth;
    QDoubleSpinBox *dsbx_xScanWidth;
    QFrame *line_14;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuOptions;
    QMenu *menuRemove;
    QMenu *menuCamera;
    QMenu *menuSettings;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MWindow)
    {
        if (MWindow->objectName().isEmpty())
            MWindow->setObjectName(QString::fromUtf8("MWindow"));
        MWindow->resize(1267, 917);
        actionOpen = new QAction(MWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionClear = new QAction(MWindow);
        actionClear->setObjectName(QString::fromUtf8("actionClear"));
        actionExit = new QAction(MWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionGo_Fullscreen = new QAction(MWindow);
        actionGo_Fullscreen->setObjectName(QString::fromUtf8("actionGo_Fullscreen"));
        actionReset_Camera = new QAction(MWindow);
        actionReset_Camera->setObjectName(QString::fromUtf8("actionReset_Camera"));
        actionRemove_Mesh = new QAction(MWindow);
        actionRemove_Mesh->setObjectName(QString::fromUtf8("actionRemove_Mesh"));
        actionRemove_Both = new QAction(MWindow);
        actionRemove_Both->setObjectName(QString::fromUtf8("actionRemove_Both"));
        actionRemove_High_Resolution_Data = new QAction(MWindow);
        actionRemove_High_Resolution_Data->setObjectName(QString::fromUtf8("actionRemove_High_Resolution_Data"));
        actionRemove_Mesh_2 = new QAction(MWindow);
        actionRemove_Mesh_2->setObjectName(QString::fromUtf8("actionRemove_Mesh_2"));
        actionRemove_all = new QAction(MWindow);
        actionRemove_all->setObjectName(QString::fromUtf8("actionRemove_all"));
        actionReset_Transform = new QAction(MWindow);
        actionReset_Transform->setObjectName(QString::fromUtf8("actionReset_Transform"));
        actionReset_Scene = new QAction(MWindow);
        actionReset_Scene->setObjectName(QString::fromUtf8("actionReset_Scene"));
        actionInformation = new QAction(MWindow);
        actionInformation->setObjectName(QString::fromUtf8("actionInformation"));
        actionAbout_OpenVDBViewer = new QAction(MWindow);
        actionAbout_OpenVDBViewer->setObjectName(QString::fromUtf8("actionAbout_OpenVDBViewer"));
        centralwidget = new QWidget(MWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MainWindow = new QGridLayout(centralwidget);
        MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        gridLayout_20 = new QGridLayout();
        gridLayout_20->setObjectName(QString::fromUtf8("gridLayout_20"));
        FileName = new QLabel(centralwidget);
        FileName->setObjectName(QString::fromUtf8("FileName"));

        gridLayout_20->addWidget(FileName, 5, 0, 1, 1);

        sbx_lineWidth = new QDoubleSpinBox(centralwidget);
        sbx_lineWidth->setObjectName(QString::fromUtf8("sbx_lineWidth"));
        sbx_lineWidth->setDecimals(1);
        sbx_lineWidth->setMaximum(50.000000000000000);
        sbx_lineWidth->setSingleStep(0.100000000000000);
        sbx_lineWidth->setValue(1.000000000000000);

        gridLayout_20->addWidget(sbx_lineWidth, 5, 8, 1, 1);

        sbx_pointSize = new QDoubleSpinBox(centralwidget);
        sbx_pointSize->setObjectName(QString::fromUtf8("sbx_pointSize"));
        sbx_pointSize->setDecimals(1);
        sbx_pointSize->setMaximum(50.000000000000000);
        sbx_pointSize->setSingleStep(0.100000000000000);
        sbx_pointSize->setValue(1.000000000000000);

        gridLayout_20->addWidget(sbx_pointSize, 5, 5, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_20->addItem(horizontalSpacer_2, 5, 1, 1, 1);

        lbl_pointSize = new QLabel(centralwidget);
        lbl_pointSize->setObjectName(QString::fromUtf8("lbl_pointSize"));

        gridLayout_20->addWidget(lbl_pointSize, 5, 4, 1, 1);

        lbl_lineWidth = new QLabel(centralwidget);
        lbl_lineWidth->setObjectName(QString::fromUtf8("lbl_lineWidth"));

        gridLayout_20->addWidget(lbl_lineWidth, 5, 7, 1, 1);

        line_21 = new QFrame(centralwidget);
        line_21->setObjectName(QString::fromUtf8("line_21"));
        line_21->setFrameShape(QFrame::VLine);
        line_21->setFrameShadow(QFrame::Sunken);

        gridLayout_20->addWidget(line_21, 5, 6, 1, 1);

        line_20 = new QFrame(centralwidget);
        line_20->setObjectName(QString::fromUtf8("line_20"));
        line_20->setFrameShape(QFrame::VLine);
        line_20->setFrameShadow(QFrame::Sunken);

        gridLayout_20->addWidget(line_20, 5, 3, 1, 1);

        cbx_showGrid = new QCheckBox(centralwidget);
        cbx_showGrid->setObjectName(QString::fromUtf8("cbx_showGrid"));
        cbx_showGrid->setChecked(true);

        gridLayout_20->addWidget(cbx_showGrid, 5, 2, 1, 1);


        MainWindow->addLayout(gridLayout_20, 1, 0, 1, 1);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setFocusPolicy(Qt::ClickFocus);
        widget->setAcceptDrops(true);
        glWindow = new QGridLayout(widget);
        glWindow->setObjectName(QString::fromUtf8("glWindow"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        glWindow->addItem(horizontalSpacer, 0, 0, 1, 1);


        MainWindow->addWidget(widget, 0, 0, 1, 2);

        tabs_tabControl = new QTabWidget(centralwidget);
        tabs_tabControl->setObjectName(QString::fromUtf8("tabs_tabControl"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabs_tabControl->sizePolicy().hasHeightForWidth());
        tabs_tabControl->setSizePolicy(sizePolicy1);
        tabs_tabControl->setLayoutDirection(Qt::LeftToRight);
        tabs_tabControl->setLocale(QLocale(QLocale::English, QLocale::UnitedKingdom));
        tabs_tabControl->setTabPosition(QTabWidget::North);
        tabs_tabControl->setTabShape(QTabWidget::Rounded);
        tabs_tabControl->setIconSize(QSize(16, 16));
        tabs_tabControl->setUsesScrollButtons(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(tab);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 359, 760));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gbox_Render = new QGroupBox(scrollAreaWidgetContents);
        gbox_Render->setObjectName(QString::fromUtf8("gbox_Render"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        gbox_Render->setFont(font);
        gridLayout_5 = new QGridLayout(gbox_Render);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        cbx_showMesh = new QCheckBox(gbox_Render);
        cbx_showMesh->setObjectName(QString::fromUtf8("cbx_showMesh"));
        cbx_showMesh->setEnabled(false);
        cbx_showMesh->setChecked(true);

        gridLayout_5->addWidget(cbx_showMesh, 0, 0, 1, 1);

        widget_3 = new QWidget(gbox_Render);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        gridLayout_26 = new QGridLayout(widget_3);
        gridLayout_26->setObjectName(QString::fromUtf8("gridLayout_26"));
        lbl_renderChannel = new QLabel(widget_3);
        lbl_renderChannel->setObjectName(QString::fromUtf8("lbl_renderChannel"));

        gridLayout_26->addWidget(lbl_renderChannel, 0, 0, 1, 1);

        cbx_showBBox = new QCheckBox(widget_3);
        cbx_showBBox->setObjectName(QString::fromUtf8("cbx_showBBox"));

        gridLayout_26->addWidget(cbx_showBBox, 2, 0, 1, 2);

        cmbo_renderChannel = new QComboBox(widget_3);
        cmbo_renderChannel->setObjectName(QString::fromUtf8("cmbo_renderChannel"));
        cmbo_renderChannel->setEnabled(false);

        gridLayout_26->addWidget(cmbo_renderChannel, 0, 1, 1, 1);


        gridLayout_5->addWidget(widget_3, 1, 0, 1, 2);


        verticalLayout_3->addWidget(gbox_Render);

        line_4 = new QFrame(scrollAreaWidgetContents);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_4);

        gbox_vdbTree = new QGroupBox(scrollAreaWidgetContents);
        gbox_vdbTree->setObjectName(QString::fromUtf8("gbox_vdbTree"));
        verticalLayout_5 = new QVBoxLayout(gbox_vdbTree);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        cbx_showVDBTree = new QCheckBox(gbox_vdbTree);
        cbx_showVDBTree->setObjectName(QString::fromUtf8("cbx_showVDBTree"));
        cbx_showVDBTree->setChecked(true);

        verticalLayout_2->addWidget(cbx_showVDBTree);


        verticalLayout_5->addLayout(verticalLayout_2);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        lbl_TreeLevels = new QLabel(gbox_vdbTree);
        lbl_TreeLevels->setObjectName(QString::fromUtf8("lbl_TreeLevels"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        lbl_TreeLevels->setFont(font1);

        verticalLayout_6->addWidget(lbl_TreeLevels);

        cbx_treeLevel3 = new QCheckBox(gbox_vdbTree);
        cbx_treeLevel3->setObjectName(QString::fromUtf8("cbx_treeLevel3"));
        cbx_treeLevel3->setChecked(true);

        verticalLayout_6->addWidget(cbx_treeLevel3);

        cbx_treeLevel2 = new QCheckBox(gbox_vdbTree);
        cbx_treeLevel2->setObjectName(QString::fromUtf8("cbx_treeLevel2"));
        cbx_treeLevel2->setChecked(true);

        verticalLayout_6->addWidget(cbx_treeLevel2);

        cbx_treeLevel1 = new QCheckBox(gbox_vdbTree);
        cbx_treeLevel1->setObjectName(QString::fromUtf8("cbx_treeLevel1"));
        cbx_treeLevel1->setChecked(true);

        verticalLayout_6->addWidget(cbx_treeLevel1);

        cbx_treeLevel0 = new QCheckBox(gbox_vdbTree);
        cbx_treeLevel0->setObjectName(QString::fromUtf8("cbx_treeLevel0"));
        cbx_treeLevel0->setChecked(true);

        verticalLayout_6->addWidget(cbx_treeLevel0);


        verticalLayout_5->addLayout(verticalLayout_6);


        verticalLayout_3->addWidget(gbox_vdbTree);

        line_2 = new QFrame(scrollAreaWidgetContents);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_2);

        gbox_LOD = new QGroupBox(scrollAreaWidgetContents);
        gbox_LOD->setObjectName(QString::fromUtf8("gbox_LOD"));
        gridLayout_3 = new QGridLayout(gbox_LOD);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        hsld_LOD = new QSlider(gbox_LOD);
        hsld_LOD->setObjectName(QString::fromUtf8("hsld_LOD"));
        hsld_LOD->setCursor(QCursor(Qt::ArrowCursor));
        hsld_LOD->setMinimum(1);
        hsld_LOD->setMaximum(1000);
        hsld_LOD->setValue(500);
        hsld_LOD->setOrientation(Qt::Horizontal);
        hsld_LOD->setTickPosition(QSlider::TicksBothSides);
        hsld_LOD->setTickInterval(20);

        gridLayout_3->addWidget(hsld_LOD, 1, 0, 1, 2);

        sbx_LODValue = new QDoubleSpinBox(gbox_LOD);
        sbx_LODValue->setObjectName(QString::fromUtf8("sbx_LODValue"));
        sbx_LODValue->setReadOnly(true);
        sbx_LODValue->setButtonSymbols(QAbstractSpinBox::NoButtons);
        sbx_LODValue->setDecimals(1);

        gridLayout_3->addWidget(sbx_LODValue, 0, 0, 1, 1);


        verticalLayout_3->addWidget(gbox_LOD);

        line = new QFrame(scrollAreaWidgetContents);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        btn_showFileInformation = new QPushButton(scrollAreaWidgetContents);
        btn_showFileInformation->setObjectName(QString::fromUtf8("btn_showFileInformation"));

        verticalLayout_3->addWidget(btn_showFileInformation);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);

        tabs_tabControl->addTab(tab, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        verticalLayout_10 = new QVBoxLayout(tab_5);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        scrollArea_2 = new QScrollArea(tab_5);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 359, 800));
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        gbx_colourMap = new QGroupBox(scrollAreaWidgetContents_2);
        gbx_colourMap->setObjectName(QString::fromUtf8("gbx_colourMap"));
        gridLayout_13 = new QGridLayout(gbx_colourMap);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gbx_applyColourRampTo = new QGroupBox(gbx_colourMap);
        gbx_applyColourRampTo->setObjectName(QString::fromUtf8("gbx_applyColourRampTo"));
        gridLayout_25 = new QGridLayout(gbx_applyColourRampTo);
        gridLayout_25->setObjectName(QString::fromUtf8("gridLayout_25"));
        rdio_applyToFile = new QRadioButton(gbx_applyColourRampTo);
        rdio_applyToFile->setObjectName(QString::fromUtf8("rdio_applyToFile"));
        rdio_applyToFile->setChecked(true);

        gridLayout_25->addWidget(rdio_applyToFile, 0, 1, 1, 1);

        rdio_applyToCulledPoints = new QRadioButton(gbx_applyColourRampTo);
        rdio_applyToCulledPoints->setObjectName(QString::fromUtf8("rdio_applyToCulledPoints"));
        rdio_applyToCulledPoints->setEnabled(false);

        gridLayout_25->addWidget(rdio_applyToCulledPoints, 0, 2, 1, 1);

        cmbo_applyCullToChannelSelect = new QComboBox(gbx_applyColourRampTo);
        cmbo_applyCullToChannelSelect->setObjectName(QString::fromUtf8("cmbo_applyCullToChannelSelect"));
        cmbo_applyCullToChannelSelect->setEnabled(false);

        gridLayout_25->addWidget(cmbo_applyCullToChannelSelect, 1, 2, 1, 1);

        lbl_applyCullToChannelSelect = new QLabel(gbx_applyColourRampTo);
        lbl_applyCullToChannelSelect->setObjectName(QString::fromUtf8("lbl_applyCullToChannelSelect"));

        gridLayout_25->addWidget(lbl_applyCullToChannelSelect, 1, 1, 1, 1);


        gridLayout_13->addWidget(gbx_applyColourRampTo, 1, 0, 1, 1);

        cbx_applyColourMap = new QCheckBox(gbx_colourMap);
        cbx_applyColourMap->setObjectName(QString::fromUtf8("cbx_applyColourMap"));

        gridLayout_13->addWidget(cbx_applyColourMap, 0, 0, 1, 1);

        groupBox = new QGroupBox(gbx_colourMap);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_15 = new QGridLayout(groupBox);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        rdio_automaticColourMap = new QRadioButton(groupBox);
        rdio_automaticColourMap->setObjectName(QString::fromUtf8("rdio_automaticColourMap"));
        rdio_automaticColourMap->setChecked(true);

        gridLayout_15->addWidget(rdio_automaticColourMap, 0, 0, 1, 1);

        rdio_userDefColourMap = new QRadioButton(groupBox);
        rdio_userDefColourMap->setObjectName(QString::fromUtf8("rdio_userDefColourMap"));

        gridLayout_15->addWidget(rdio_userDefColourMap, 0, 1, 1, 1);

        dsbx_colourRampBottom = new QDoubleSpinBox(groupBox);
        dsbx_colourRampBottom->setObjectName(QString::fromUtf8("dsbx_colourRampBottom"));
        dsbx_colourRampBottom->setEnabled(false);
        dsbx_colourRampBottom->setDecimals(4);
        dsbx_colourRampBottom->setMinimum(-10000.000000000000000);
        dsbx_colourRampBottom->setMaximum(10000.000000000000000);
        dsbx_colourRampBottom->setSingleStep(0.010000000000000);

        gridLayout_15->addWidget(dsbx_colourRampBottom, 2, 0, 1, 1);

        dsbx_colourRampTop = new QDoubleSpinBox(groupBox);
        dsbx_colourRampTop->setObjectName(QString::fromUtf8("dsbx_colourRampTop"));
        dsbx_colourRampTop->setEnabled(false);
        dsbx_colourRampTop->setDecimals(4);
        dsbx_colourRampTop->setMinimum(-10000.000000000000000);
        dsbx_colourRampTop->setMaximum(10000.000000000000000);
        dsbx_colourRampTop->setSingleStep(0.010000000000000);

        gridLayout_15->addWidget(dsbx_colourRampTop, 2, 1, 1, 1);

        lbl_colourRampBotoom = new QLabel(groupBox);
        lbl_colourRampBotoom->setObjectName(QString::fromUtf8("lbl_colourRampBotoom"));

        gridLayout_15->addWidget(lbl_colourRampBotoom, 1, 0, 1, 1);

        lbl_colourRampTop = new QLabel(groupBox);
        lbl_colourRampTop->setObjectName(QString::fromUtf8("lbl_colourRampTop"));

        gridLayout_15->addWidget(lbl_colourRampTop, 1, 1, 1, 1);


        gridLayout_13->addWidget(groupBox, 3, 0, 1, 1);

        groupBox_2 = new QGroupBox(gbx_colourMap);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_16 = new QGridLayout(groupBox_2);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        sbx_colourRampRed = new QSpinBox(groupBox_2);
        sbx_colourRampRed->setObjectName(QString::fromUtf8("sbx_colourRampRed"));
        sbx_colourRampRed->setMaximum(255);
        sbx_colourRampRed->setValue(255);

        gridLayout_16->addWidget(sbx_colourRampRed, 1, 0, 1, 1);

        sbx_colourRampGreen = new QSpinBox(groupBox_2);
        sbx_colourRampGreen->setObjectName(QString::fromUtf8("sbx_colourRampGreen"));
        sbx_colourRampGreen->setMaximum(255);

        gridLayout_16->addWidget(sbx_colourRampGreen, 1, 1, 1, 1);

        sbx_colourRampBlue = new QSpinBox(groupBox_2);
        sbx_colourRampBlue->setObjectName(QString::fromUtf8("sbx_colourRampBlue"));
        sbx_colourRampBlue->setMaximum(255);

        gridLayout_16->addWidget(sbx_colourRampBlue, 1, 2, 1, 1);

        lbl_colourRampRed = new QLabel(groupBox_2);
        lbl_colourRampRed->setObjectName(QString::fromUtf8("lbl_colourRampRed"));

        gridLayout_16->addWidget(lbl_colourRampRed, 0, 0, 1, 1);

        lbl_colourRampGreen = new QLabel(groupBox_2);
        lbl_colourRampGreen->setObjectName(QString::fromUtf8("lbl_colourRampGreen"));

        gridLayout_16->addWidget(lbl_colourRampGreen, 0, 1, 1, 1);

        lbl_colourRampBlue = new QLabel(groupBox_2);
        lbl_colourRampBlue->setObjectName(QString::fromUtf8("lbl_colourRampBlue"));

        gridLayout_16->addWidget(lbl_colourRampBlue, 0, 2, 1, 1);


        gridLayout_13->addWidget(groupBox_2, 4, 0, 1, 1);

        groupBox_3 = new QGroupBox(gbx_colourMap);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout_7 = new QHBoxLayout(groupBox_3);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        rdio_pointRamp = new QRadioButton(groupBox_3);
        rdio_pointRamp->setObjectName(QString::fromUtf8("rdio_pointRamp"));
        rdio_pointRamp->setChecked(true);

        horizontalLayout_7->addWidget(rdio_pointRamp);

        rdio_channelRamp = new QRadioButton(groupBox_3);
        rdio_channelRamp->setObjectName(QString::fromUtf8("rdio_channelRamp"));
        rdio_channelRamp->setEnabled(true);

        horizontalLayout_7->addWidget(rdio_channelRamp);


        gridLayout_13->addWidget(groupBox_3, 2, 0, 1, 1);


        verticalLayout_4->addWidget(gbx_colourMap);

        line_5 = new QFrame(scrollAreaWidgetContents_2);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_5);

        gbox_Vectors = new QGroupBox(scrollAreaWidgetContents_2);
        gbox_Vectors->setObjectName(QString::fromUtf8("gbox_Vectors"));
        verticalLayout = new QVBoxLayout(gbox_Vectors);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        cbx_showVectors = new QCheckBox(gbox_Vectors);
        cbx_showVectors->setObjectName(QString::fromUtf8("cbx_showVectors"));
        cbx_showVectors->setEnabled(false);

        verticalLayout->addWidget(cbx_showVectors);

        cmbo_channelSelect = new QComboBox(gbox_Vectors);
        cmbo_channelSelect->setObjectName(QString::fromUtf8("cmbo_channelSelect"));
        cmbo_channelSelect->setEnabled(false);

        verticalLayout->addWidget(cmbo_channelSelect);

        lbl_VectorLength = new QLabel(gbox_Vectors);
        lbl_VectorLength->setObjectName(QString::fromUtf8("lbl_VectorLength"));

        verticalLayout->addWidget(lbl_VectorLength);

        hsld_vectorLength = new QSlider(gbox_Vectors);
        hsld_vectorLength->setObjectName(QString::fromUtf8("hsld_vectorLength"));
        hsld_vectorLength->setMinimum(1);
        hsld_vectorLength->setMaximum(100);
        hsld_vectorLength->setSingleStep(1);
        hsld_vectorLength->setPageStep(10);
        hsld_vectorLength->setSliderPosition(10);
        hsld_vectorLength->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(hsld_vectorLength);


        verticalLayout_4->addWidget(gbox_Vectors);

        line_3 = new QFrame(scrollAreaWidgetContents_2);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_3);

        gbox_VectorOptions = new QGroupBox(scrollAreaWidgetContents_2);
        gbox_VectorOptions->setObjectName(QString::fromUtf8("gbox_VectorOptions"));
        gridLayout_7 = new QGridLayout(gbox_VectorOptions);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        cmbo_vectorColourType = new QComboBox(gbox_VectorOptions);
        cmbo_vectorColourType->addItem(QString());
        cmbo_vectorColourType->addItem(QString());
        cmbo_vectorColourType->setObjectName(QString::fromUtf8("cmbo_vectorColourType"));

        gridLayout_7->addWidget(cmbo_vectorColourType, 1, 0, 1, 3);

        lbl_Red = new QLabel(gbox_VectorOptions);
        lbl_Red->setObjectName(QString::fromUtf8("lbl_Red"));

        gridLayout_7->addWidget(lbl_Red, 2, 0, 1, 1);

        sbx_blue = new QSpinBox(gbox_VectorOptions);
        sbx_blue->setObjectName(QString::fromUtf8("sbx_blue"));
        sbx_blue->setMaximum(255);
        sbx_blue->setValue(204);

        gridLayout_7->addWidget(sbx_blue, 3, 2, 1, 1);

        lbl_Blue = new QLabel(gbox_VectorOptions);
        lbl_Blue->setObjectName(QString::fromUtf8("lbl_Blue"));

        gridLayout_7->addWidget(lbl_Blue, 2, 2, 1, 1);

        sbx_red = new QSpinBox(gbox_VectorOptions);
        sbx_red->setObjectName(QString::fromUtf8("sbx_red"));
        sbx_red->setMinimum(102);
        sbx_red->setMaximum(255);

        gridLayout_7->addWidget(sbx_red, 3, 0, 1, 1);

        sbx_green = new QSpinBox(gbox_VectorOptions);
        sbx_green->setObjectName(QString::fromUtf8("sbx_green"));
        sbx_green->setMaximum(255);
        sbx_green->setValue(153);

        gridLayout_7->addWidget(sbx_green, 3, 1, 1, 1);

        lbl_Green = new QLabel(gbox_VectorOptions);
        lbl_Green->setObjectName(QString::fromUtf8("lbl_Green"));

        gridLayout_7->addWidget(lbl_Green, 2, 1, 1, 1);

        lbl_vectorColourType = new QLabel(gbox_VectorOptions);
        lbl_vectorColourType->setObjectName(QString::fromUtf8("lbl_vectorColourType"));

        gridLayout_7->addWidget(lbl_vectorColourType, 0, 0, 1, 3);

        cbx_invertVectorColours = new QCheckBox(gbox_VectorOptions);
        cbx_invertVectorColours->setObjectName(QString::fromUtf8("cbx_invertVectorColours"));

        gridLayout_7->addWidget(cbx_invertVectorColours, 4, 0, 1, 3);


        verticalLayout_4->addWidget(gbox_VectorOptions);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_10->addWidget(scrollArea_2);

        tabs_tabControl->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        verticalLayout_11 = new QVBoxLayout(tab_6);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        scrollArea_3 = new QScrollArea(tab_6);
        scrollArea_3->setObjectName(QString::fromUtf8("scrollArea_3"));
        scrollArea_3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 359, 839));
        verticalLayout_12 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        gbx_culling = new QGroupBox(scrollAreaWidgetContents_3);
        gbx_culling->setObjectName(QString::fromUtf8("gbx_culling"));
        gridLayout_14 = new QGridLayout(gbx_culling);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        line_18 = new QFrame(gbx_culling);
        line_18->setObjectName(QString::fromUtf8("line_18"));
        line_18->setFrameShape(QFrame::HLine);
        line_18->setFrameShadow(QFrame::Sunken);

        gridLayout_14->addWidget(line_18, 3, 1, 1, 1);

        line_17 = new QFrame(gbx_culling);
        line_17->setObjectName(QString::fromUtf8("line_17"));
        line_17->setFrameShape(QFrame::HLine);
        line_17->setFrameShadow(QFrame::Sunken);

        gridLayout_14->addWidget(line_17, 1, 1, 1, 1);

        widget_5 = new QWidget(gbx_culling);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        gridLayout_18 = new QGridLayout(widget_5);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        cbx_useCulling2 = new QCheckBox(widget_5);
        cbx_useCulling2->setObjectName(QString::fromUtf8("cbx_useCulling2"));
        cbx_useCulling2->setEnabled(false);

        gridLayout_18->addWidget(cbx_useCulling2, 5, 0, 1, 3);

        cmbo_currentPointChannelCulling_2 = new QComboBox(widget_5);
        cmbo_currentPointChannelCulling_2->setObjectName(QString::fromUtf8("cmbo_currentPointChannelCulling_2"));
        cmbo_currentPointChannelCulling_2->setEnabled(false);

        gridLayout_18->addWidget(cmbo_currentPointChannelCulling_2, 1, 0, 1, 1);

        lbl_cull2Type = new QLabel(widget_5);
        lbl_cull2Type->setObjectName(QString::fromUtf8("lbl_cull2Type"));
        QFont font2;
        font2.setItalic(true);
        lbl_cull2Type->setFont(font2);

        gridLayout_18->addWidget(lbl_cull2Type, 1, 2, 1, 1);

        lbl_cull2TypeChannel = new QLabel(widget_5);
        lbl_cull2TypeChannel->setObjectName(QString::fromUtf8("lbl_cull2TypeChannel"));
        lbl_cull2TypeChannel->setFont(font1);

        gridLayout_18->addWidget(lbl_cull2TypeChannel, 1, 1, 1, 1);

        cmbo_cullingChoice2 = new QComboBox(widget_5);
        cmbo_cullingChoice2->addItem(QString());
        cmbo_cullingChoice2->addItem(QString());
        cmbo_cullingChoice2->addItem(QString());
        cmbo_cullingChoice2->setObjectName(QString::fromUtf8("cmbo_cullingChoice2"));
        cmbo_cullingChoice2->setEnabled(false);

        gridLayout_18->addWidget(cmbo_cullingChoice2, 2, 0, 1, 3);

        gbx_cull2From = new QGroupBox(widget_5);
        gbx_cull2From->setObjectName(QString::fromUtf8("gbx_cull2From"));
        gridLayout_21 = new QGridLayout(gbx_cull2From);
        gridLayout_21->setObjectName(QString::fromUtf8("gridLayout_21"));
        dsbx_cull2FromX = new QDoubleSpinBox(gbx_cull2From);
        dsbx_cull2FromX->setObjectName(QString::fromUtf8("dsbx_cull2FromX"));
        dsbx_cull2FromX->setEnabled(false);
        dsbx_cull2FromX->setDecimals(3);
        dsbx_cull2FromX->setSingleStep(0.010000000000000);

        gridLayout_21->addWidget(dsbx_cull2FromX, 0, 0, 1, 1);

        dsbx_cull2FromY = new QDoubleSpinBox(gbx_cull2From);
        dsbx_cull2FromY->setObjectName(QString::fromUtf8("dsbx_cull2FromY"));
        dsbx_cull2FromY->setEnabled(false);
        dsbx_cull2FromY->setDecimals(3);
        dsbx_cull2FromY->setSingleStep(0.010000000000000);

        gridLayout_21->addWidget(dsbx_cull2FromY, 0, 1, 1, 1);

        dsbx_cull2FromZ = new QDoubleSpinBox(gbx_cull2From);
        dsbx_cull2FromZ->setObjectName(QString::fromUtf8("dsbx_cull2FromZ"));
        dsbx_cull2FromZ->setEnabled(false);
        dsbx_cull2FromZ->setDecimals(3);
        dsbx_cull2FromZ->setSingleStep(0.010000000000000);

        gridLayout_21->addWidget(dsbx_cull2FromZ, 0, 2, 1, 1);


        gridLayout_18->addWidget(gbx_cull2From, 3, 0, 1, 3);

        gbx_cull2To = new QGroupBox(widget_5);
        gbx_cull2To->setObjectName(QString::fromUtf8("gbx_cull2To"));
        gridLayout_22 = new QGridLayout(gbx_cull2To);
        gridLayout_22->setObjectName(QString::fromUtf8("gridLayout_22"));
        dsbx_cull2ToX = new QDoubleSpinBox(gbx_cull2To);
        dsbx_cull2ToX->setObjectName(QString::fromUtf8("dsbx_cull2ToX"));
        dsbx_cull2ToX->setEnabled(false);
        dsbx_cull2ToX->setDecimals(3);
        dsbx_cull2ToX->setSingleStep(0.010000000000000);

        gridLayout_22->addWidget(dsbx_cull2ToX, 0, 0, 1, 1);

        dsbx_cull2ToY = new QDoubleSpinBox(gbx_cull2To);
        dsbx_cull2ToY->setObjectName(QString::fromUtf8("dsbx_cull2ToY"));
        dsbx_cull2ToY->setEnabled(false);
        dsbx_cull2ToY->setDecimals(3);
        dsbx_cull2ToY->setSingleStep(0.010000000000000);

        gridLayout_22->addWidget(dsbx_cull2ToY, 0, 1, 1, 1);

        dsbx_cull2ToZ = new QDoubleSpinBox(gbx_cull2To);
        dsbx_cull2ToZ->setObjectName(QString::fromUtf8("dsbx_cull2ToZ"));
        dsbx_cull2ToZ->setEnabled(false);
        dsbx_cull2ToZ->setDecimals(3);
        dsbx_cull2ToZ->setSingleStep(0.010000000000000);

        gridLayout_22->addWidget(dsbx_cull2ToZ, 0, 2, 1, 1);


        gridLayout_18->addWidget(gbx_cull2To, 4, 0, 1, 3);


        gridLayout_14->addWidget(widget_5, 2, 1, 1, 1);

        widget_4 = new QWidget(gbx_culling);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        gridLayout_17 = new QGridLayout(widget_4);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        lbl_cull1Type = new QLabel(widget_4);
        lbl_cull1Type->setObjectName(QString::fromUtf8("lbl_cull1Type"));
        lbl_cull1Type->setFont(font2);

        gridLayout_17->addWidget(lbl_cull1Type, 1, 2, 1, 1);

        lbl_cull1TypeChannel = new QLabel(widget_4);
        lbl_cull1TypeChannel->setObjectName(QString::fromUtf8("lbl_cull1TypeChannel"));
        lbl_cull1TypeChannel->setFont(font1);

        gridLayout_17->addWidget(lbl_cull1TypeChannel, 1, 1, 1, 1);

        cmbo_currentPointChannelCulling_1 = new QComboBox(widget_4);
        cmbo_currentPointChannelCulling_1->setObjectName(QString::fromUtf8("cmbo_currentPointChannelCulling_1"));
        cmbo_currentPointChannelCulling_1->setEnabled(false);

        gridLayout_17->addWidget(cmbo_currentPointChannelCulling_1, 1, 0, 1, 1);

        cmbo_cullingChoice1 = new QComboBox(widget_4);
        cmbo_cullingChoice1->addItem(QString());
        cmbo_cullingChoice1->addItem(QString());
        cmbo_cullingChoice1->addItem(QString());
        cmbo_cullingChoice1->setObjectName(QString::fromUtf8("cmbo_cullingChoice1"));
        cmbo_cullingChoice1->setEnabled(false);

        gridLayout_17->addWidget(cmbo_cullingChoice1, 2, 0, 1, 3);

        cbx_useCulling1 = new QCheckBox(widget_4);
        cbx_useCulling1->setObjectName(QString::fromUtf8("cbx_useCulling1"));
        cbx_useCulling1->setEnabled(false);

        gridLayout_17->addWidget(cbx_useCulling1, 5, 0, 1, 3);

        gbx_cull1From = new QGroupBox(widget_4);
        gbx_cull1From->setObjectName(QString::fromUtf8("gbx_cull1From"));
        gridLayout_2 = new QGridLayout(gbx_cull1From);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        dsbx_cull1FromX = new QDoubleSpinBox(gbx_cull1From);
        dsbx_cull1FromX->setObjectName(QString::fromUtf8("dsbx_cull1FromX"));
        dsbx_cull1FromX->setEnabled(false);
        dsbx_cull1FromX->setDecimals(3);
        dsbx_cull1FromX->setSingleStep(0.010000000000000);

        gridLayout_2->addWidget(dsbx_cull1FromX, 0, 0, 1, 1);

        dsbx_cull1FromZ = new QDoubleSpinBox(gbx_cull1From);
        dsbx_cull1FromZ->setObjectName(QString::fromUtf8("dsbx_cull1FromZ"));
        dsbx_cull1FromZ->setEnabled(false);
        dsbx_cull1FromZ->setDecimals(3);
        dsbx_cull1FromZ->setSingleStep(0.014000000000000);

        gridLayout_2->addWidget(dsbx_cull1FromZ, 0, 2, 1, 1);

        dsbx_cull1FromY = new QDoubleSpinBox(gbx_cull1From);
        dsbx_cull1FromY->setObjectName(QString::fromUtf8("dsbx_cull1FromY"));
        dsbx_cull1FromY->setEnabled(false);
        dsbx_cull1FromY->setDecimals(3);
        dsbx_cull1FromY->setSingleStep(0.010000000000000);

        gridLayout_2->addWidget(dsbx_cull1FromY, 0, 1, 1, 1);


        gridLayout_17->addWidget(gbx_cull1From, 3, 0, 1, 3);

        gbx_cull1To = new QGroupBox(widget_4);
        gbx_cull1To->setObjectName(QString::fromUtf8("gbx_cull1To"));
        gridLayout_4 = new QGridLayout(gbx_cull1To);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        dsbx_cull1ToZ = new QDoubleSpinBox(gbx_cull1To);
        dsbx_cull1ToZ->setObjectName(QString::fromUtf8("dsbx_cull1ToZ"));
        dsbx_cull1ToZ->setEnabled(false);
        dsbx_cull1ToZ->setDecimals(3);
        dsbx_cull1ToZ->setSingleStep(0.010000000000000);

        gridLayout_4->addWidget(dsbx_cull1ToZ, 0, 2, 1, 1);

        dsbx_cull1ToY = new QDoubleSpinBox(gbx_cull1To);
        dsbx_cull1ToY->setObjectName(QString::fromUtf8("dsbx_cull1ToY"));
        dsbx_cull1ToY->setEnabled(false);
        dsbx_cull1ToY->setDecimals(3);
        dsbx_cull1ToY->setSingleStep(0.010000000000000);

        gridLayout_4->addWidget(dsbx_cull1ToY, 0, 1, 1, 1);

        dsbx_cull1ToX = new QDoubleSpinBox(gbx_cull1To);
        dsbx_cull1ToX->setObjectName(QString::fromUtf8("dsbx_cull1ToX"));
        dsbx_cull1ToX->setEnabled(false);
        dsbx_cull1ToX->setDecimals(3);
        dsbx_cull1ToX->setSingleStep(0.010000000000000);

        gridLayout_4->addWidget(dsbx_cull1ToX, 0, 0, 1, 1);


        gridLayout_17->addWidget(gbx_cull1To, 4, 0, 1, 3);


        gridLayout_14->addWidget(widget_4, 0, 1, 1, 1);

        widget_6 = new QWidget(gbx_culling);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        gridLayout_19 = new QGridLayout(widget_6);
        gridLayout_19->setObjectName(QString::fromUtf8("gridLayout_19"));
        cmbo_currentPointChannelCulling_3 = new QComboBox(widget_6);
        cmbo_currentPointChannelCulling_3->setObjectName(QString::fromUtf8("cmbo_currentPointChannelCulling_3"));
        cmbo_currentPointChannelCulling_3->setEnabled(false);

        gridLayout_19->addWidget(cmbo_currentPointChannelCulling_3, 1, 0, 1, 1);

        lbl_cull3Type = new QLabel(widget_6);
        lbl_cull3Type->setObjectName(QString::fromUtf8("lbl_cull3Type"));
        lbl_cull3Type->setFont(font2);

        gridLayout_19->addWidget(lbl_cull3Type, 1, 2, 1, 1);

        lbl_cull3TypeChannel = new QLabel(widget_6);
        lbl_cull3TypeChannel->setObjectName(QString::fromUtf8("lbl_cull3TypeChannel"));
        lbl_cull3TypeChannel->setFont(font1);

        gridLayout_19->addWidget(lbl_cull3TypeChannel, 1, 1, 1, 1);

        cmbo_cullingChoice3 = new QComboBox(widget_6);
        cmbo_cullingChoice3->addItem(QString());
        cmbo_cullingChoice3->addItem(QString());
        cmbo_cullingChoice3->addItem(QString());
        cmbo_cullingChoice3->setObjectName(QString::fromUtf8("cmbo_cullingChoice3"));
        cmbo_cullingChoice3->setEnabled(false);

        gridLayout_19->addWidget(cmbo_cullingChoice3, 2, 0, 1, 3);

        cbx_useCulling3 = new QCheckBox(widget_6);
        cbx_useCulling3->setObjectName(QString::fromUtf8("cbx_useCulling3"));
        cbx_useCulling3->setEnabled(false);

        gridLayout_19->addWidget(cbx_useCulling3, 5, 0, 1, 3);

        gbx_cull3From = new QGroupBox(widget_6);
        gbx_cull3From->setObjectName(QString::fromUtf8("gbx_cull3From"));
        gridLayout_23 = new QGridLayout(gbx_cull3From);
        gridLayout_23->setObjectName(QString::fromUtf8("gridLayout_23"));
        dsbx_cull3FromX = new QDoubleSpinBox(gbx_cull3From);
        dsbx_cull3FromX->setObjectName(QString::fromUtf8("dsbx_cull3FromX"));
        dsbx_cull3FromX->setEnabled(false);
        dsbx_cull3FromX->setDecimals(3);
        dsbx_cull3FromX->setSingleStep(0.010000000000000);

        gridLayout_23->addWidget(dsbx_cull3FromX, 0, 0, 1, 1);

        dsbx_cull3FromY = new QDoubleSpinBox(gbx_cull3From);
        dsbx_cull3FromY->setObjectName(QString::fromUtf8("dsbx_cull3FromY"));
        dsbx_cull3FromY->setEnabled(false);
        dsbx_cull3FromY->setDecimals(3);
        dsbx_cull3FromY->setSingleStep(0.010000000000000);

        gridLayout_23->addWidget(dsbx_cull3FromY, 0, 1, 1, 1);

        dsbx_cull3FromZ = new QDoubleSpinBox(gbx_cull3From);
        dsbx_cull3FromZ->setObjectName(QString::fromUtf8("dsbx_cull3FromZ"));
        dsbx_cull3FromZ->setEnabled(false);
        dsbx_cull3FromZ->setDecimals(3);
        dsbx_cull3FromZ->setSingleStep(0.010000000000000);

        gridLayout_23->addWidget(dsbx_cull3FromZ, 0, 2, 1, 1);


        gridLayout_19->addWidget(gbx_cull3From, 3, 0, 1, 3);

        gbx_cull3To = new QGroupBox(widget_6);
        gbx_cull3To->setObjectName(QString::fromUtf8("gbx_cull3To"));
        gridLayout_24 = new QGridLayout(gbx_cull3To);
        gridLayout_24->setObjectName(QString::fromUtf8("gridLayout_24"));
        dsbx_cull3ToX = new QDoubleSpinBox(gbx_cull3To);
        dsbx_cull3ToX->setObjectName(QString::fromUtf8("dsbx_cull3ToX"));
        dsbx_cull3ToX->setEnabled(false);
        dsbx_cull3ToX->setDecimals(3);
        dsbx_cull3ToX->setSingleStep(0.010000000000000);

        gridLayout_24->addWidget(dsbx_cull3ToX, 0, 0, 1, 1);

        dsbx_cull3ToY = new QDoubleSpinBox(gbx_cull3To);
        dsbx_cull3ToY->setObjectName(QString::fromUtf8("dsbx_cull3ToY"));
        dsbx_cull3ToY->setEnabled(false);
        dsbx_cull3ToY->setDecimals(3);
        dsbx_cull3ToY->setSingleStep(0.010000000000000);

        gridLayout_24->addWidget(dsbx_cull3ToY, 0, 1, 1, 1);

        dsbx_cull3ToZ = new QDoubleSpinBox(gbx_cull3To);
        dsbx_cull3ToZ->setObjectName(QString::fromUtf8("dsbx_cull3ToZ"));
        dsbx_cull3ToZ->setEnabled(false);
        dsbx_cull3ToZ->setDecimals(3);
        dsbx_cull3ToZ->setSingleStep(0.010000000000000);

        gridLayout_24->addWidget(dsbx_cull3ToZ, 0, 2, 1, 1);


        gridLayout_19->addWidget(gbx_cull3To, 4, 0, 1, 3);


        gridLayout_14->addWidget(widget_6, 4, 1, 1, 1);


        verticalLayout_12->addWidget(gbx_culling);

        scrollArea_3->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_11->addWidget(scrollArea_3);

        tabs_tabControl->addTab(tab_6, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_7 = new QVBoxLayout(tab_3);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        scrollArea_4 = new QScrollArea(tab_3);
        scrollArea_4->setObjectName(QString::fromUtf8("scrollArea_4"));
        scrollArea_4->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea_4->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 359, 760));
        verticalLayout_13 = new QVBoxLayout(scrollAreaWidgetContents_4);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        gbox_Crop = new QGroupBox(scrollAreaWidgetContents_4);
        gbox_Crop->setObjectName(QString::fromUtf8("gbox_Crop"));
        verticalLayout_9 = new QVBoxLayout(gbox_Crop);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        cbx_useCrop = new QCheckBox(gbox_Crop);
        cbx_useCrop->setObjectName(QString::fromUtf8("cbx_useCrop"));
        cbx_useCrop->setEnabled(false);

        gridLayout_9->addWidget(cbx_useCrop, 0, 0, 2, 1);

        lbl_numCrops = new QLabel(gbox_Crop);
        lbl_numCrops->setObjectName(QString::fromUtf8("lbl_numCrops"));

        gridLayout_9->addWidget(lbl_numCrops, 2, 0, 1, 1);

        cmbo_numCrops = new QComboBox(gbox_Crop);
        cmbo_numCrops->addItem(QString());
        cmbo_numCrops->addItem(QString());
        cmbo_numCrops->addItem(QString());
        cmbo_numCrops->setObjectName(QString::fromUtf8("cmbo_numCrops"));
        cmbo_numCrops->setEnabled(false);

        gridLayout_9->addWidget(cmbo_numCrops, 2, 1, 1, 1);


        verticalLayout_9->addLayout(gridLayout_9);

        line_11 = new QFrame(gbox_Crop);
        line_11->setObjectName(QString::fromUtf8("line_11"));
        line_11->setFrameShape(QFrame::HLine);
        line_11->setFrameShadow(QFrame::Sunken);

        verticalLayout_9->addWidget(line_11);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        lbl_depth = new QLabel(gbox_Crop);
        lbl_depth->setObjectName(QString::fromUtf8("lbl_depth"));

        gridLayout_8->addWidget(lbl_depth, 4, 2, 1, 1);

        lbl_height = new QLabel(gbox_Crop);
        lbl_height->setObjectName(QString::fromUtf8("lbl_height"));

        gridLayout_8->addWidget(lbl_height, 4, 1, 1, 1);

        dsbx_cropWidth = new QDoubleSpinBox(gbox_Crop);
        dsbx_cropWidth->setObjectName(QString::fromUtf8("dsbx_cropWidth"));
        dsbx_cropWidth->setEnabled(false);
        dsbx_cropWidth->setSingleStep(1.000000000000000);
        dsbx_cropWidth->setValue(2.000000000000000);

        gridLayout_8->addWidget(dsbx_cropWidth, 5, 0, 1, 1);

        dsbx_cropX = new QDoubleSpinBox(gbox_Crop);
        dsbx_cropX->setObjectName(QString::fromUtf8("dsbx_cropX"));
        dsbx_cropX->setEnabled(false);
        dsbx_cropX->setMinimum(-99.000000000000000);
        dsbx_cropX->setSingleStep(1.000000000000000);

        gridLayout_8->addWidget(dsbx_cropX, 3, 0, 1, 1);

        dsbx_cropY = new QDoubleSpinBox(gbox_Crop);
        dsbx_cropY->setObjectName(QString::fromUtf8("dsbx_cropY"));
        dsbx_cropY->setEnabled(false);
        dsbx_cropY->setMinimum(-99.000000000000000);
        dsbx_cropY->setMaximum(99.000000000000000);
        dsbx_cropY->setSingleStep(1.000000000000000);
        dsbx_cropY->setValue(15.000000000000000);

        gridLayout_8->addWidget(dsbx_cropY, 3, 1, 1, 1);

        dsbx_cropZ = new QDoubleSpinBox(gbox_Crop);
        dsbx_cropZ->setObjectName(QString::fromUtf8("dsbx_cropZ"));
        dsbx_cropZ->setEnabled(false);
        dsbx_cropZ->setMinimum(-99.000000000000000);
        dsbx_cropZ->setSingleStep(1.000000000000000);

        gridLayout_8->addWidget(dsbx_cropZ, 3, 2, 1, 1);

        lbl_cropNumber = new QLabel(gbox_Crop);
        lbl_cropNumber->setObjectName(QString::fromUtf8("lbl_cropNumber"));

        gridLayout_8->addWidget(lbl_cropNumber, 1, 0, 1, 2);

        dsbx_cropHeight = new QDoubleSpinBox(gbox_Crop);
        dsbx_cropHeight->setObjectName(QString::fromUtf8("dsbx_cropHeight"));
        dsbx_cropHeight->setEnabled(false);
        dsbx_cropHeight->setSingleStep(1.000000000000000);
        dsbx_cropHeight->setValue(30.000000000000000);

        gridLayout_8->addWidget(dsbx_cropHeight, 5, 1, 1, 1);

        cmbo_sliceSelection = new QComboBox(gbox_Crop);
        cmbo_sliceSelection->setObjectName(QString::fromUtf8("cmbo_sliceSelection"));
        cmbo_sliceSelection->setEnabled(false);

        gridLayout_8->addWidget(cmbo_sliceSelection, 1, 2, 1, 1);

        dsbx_cropDepth = new QDoubleSpinBox(gbox_Crop);
        dsbx_cropDepth->setObjectName(QString::fromUtf8("dsbx_cropDepth"));
        dsbx_cropDepth->setEnabled(false);
        dsbx_cropDepth->setSingleStep(1.000000000000000);
        dsbx_cropDepth->setValue(10.000000000000000);

        gridLayout_8->addWidget(dsbx_cropDepth, 5, 2, 1, 1);

        lbl_xPos = new QLabel(gbox_Crop);
        lbl_xPos->setObjectName(QString::fromUtf8("lbl_xPos"));

        gridLayout_8->addWidget(lbl_xPos, 2, 0, 1, 1);

        lbl_yPos = new QLabel(gbox_Crop);
        lbl_yPos->setObjectName(QString::fromUtf8("lbl_yPos"));

        gridLayout_8->addWidget(lbl_yPos, 2, 1, 1, 1);

        lbl_width = new QLabel(gbox_Crop);
        lbl_width->setObjectName(QString::fromUtf8("lbl_width"));

        gridLayout_8->addWidget(lbl_width, 4, 0, 1, 1);

        lbl_zPos = new QLabel(gbox_Crop);
        lbl_zPos->setObjectName(QString::fromUtf8("lbl_zPos"));

        gridLayout_8->addWidget(lbl_zPos, 2, 2, 1, 1);


        verticalLayout_9->addLayout(gridLayout_8);


        verticalLayout_13->addWidget(gbox_Crop);

        line_7 = new QFrame(scrollAreaWidgetContents_4);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        verticalLayout_13->addWidget(line_7);

        gbox_ScanModel = new QGroupBox(scrollAreaWidgetContents_4);
        gbox_ScanModel->setObjectName(QString::fromUtf8("gbox_ScanModel"));
        verticalLayout_8 = new QVBoxLayout(gbox_ScanModel);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        cmbo_scanType = new QComboBox(gbox_ScanModel);
        cmbo_scanType->addItem(QString());
        cmbo_scanType->addItem(QString());
        cmbo_scanType->addItem(QString());
        cmbo_scanType->setObjectName(QString::fromUtf8("cmbo_scanType"));

        gridLayout_6->addWidget(cmbo_scanType, 0, 0, 1, 2);

        btn_startSingleScan = new QPushButton(gbox_ScanModel);
        btn_startSingleScan->setObjectName(QString::fromUtf8("btn_startSingleScan"));

        gridLayout_6->addWidget(btn_startSingleScan, 1, 0, 1, 2);


        verticalLayout_8->addLayout(gridLayout_6);

        line_10 = new QFrame(gbox_ScanModel);
        line_10->setObjectName(QString::fromUtf8("line_10"));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);

        verticalLayout_8->addWidget(line_10);

        btn_PauseScan = new QPushButton(gbox_ScanModel);
        btn_PauseScan->setObjectName(QString::fromUtf8("btn_PauseScan"));
        btn_PauseScan->setEnabled(false);

        verticalLayout_8->addWidget(btn_PauseScan);

        hsld_cropSlide = new QSlider(gbox_ScanModel);
        hsld_cropSlide->setObjectName(QString::fromUtf8("hsld_cropSlide"));
        hsld_cropSlide->setEnabled(false);
        hsld_cropSlide->setMinimum(-1000);
        hsld_cropSlide->setMaximum(1000);
        hsld_cropSlide->setOrientation(Qt::Horizontal);

        verticalLayout_8->addWidget(hsld_cropSlide);

        line_12 = new QFrame(gbox_ScanModel);
        line_12->setObjectName(QString::fromUtf8("line_12"));
        line_12->setFrameShape(QFrame::HLine);
        line_12->setFrameShadow(QFrame::Sunken);

        verticalLayout_8->addWidget(line_12);

        btn_stopScan = new QPushButton(gbox_ScanModel);
        btn_stopScan->setObjectName(QString::fromUtf8("btn_stopScan"));

        verticalLayout_8->addWidget(btn_stopScan);


        verticalLayout_13->addWidget(gbox_ScanModel);

        line_9 = new QFrame(scrollAreaWidgetContents_4);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);

        verticalLayout_13->addWidget(line_9);

        gbox_ScanOptions = new QGroupBox(scrollAreaWidgetContents_4);
        gbox_ScanOptions->setObjectName(QString::fromUtf8("gbox_ScanOptions"));
        gridLayout_10 = new QGridLayout(gbox_ScanOptions);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        lbl_yScanHeight = new QLabel(gbox_ScanOptions);
        lbl_yScanHeight->setObjectName(QString::fromUtf8("lbl_yScanHeight"));

        gridLayout_10->addWidget(lbl_yScanHeight, 2, 2, 1, 1);

        line_13 = new QFrame(gbox_ScanOptions);
        line_13->setObjectName(QString::fromUtf8("line_13"));
        line_13->setFrameShape(QFrame::VLine);
        line_13->setFrameShadow(QFrame::Sunken);

        gridLayout_10->addWidget(line_13, 2, 1, 2, 1);

        lbl_scanSpeed = new QLabel(gbox_ScanOptions);
        lbl_scanSpeed->setObjectName(QString::fromUtf8("lbl_scanSpeed"));

        gridLayout_10->addWidget(lbl_scanSpeed, 0, 0, 1, 1);

        hsld_scanSpeed = new QSlider(gbox_ScanOptions);
        hsld_scanSpeed->setObjectName(QString::fromUtf8("hsld_scanSpeed"));
        hsld_scanSpeed->setMinimum(1);
        hsld_scanSpeed->setMaximum(100);
        hsld_scanSpeed->setValue(40);
        hsld_scanSpeed->setOrientation(Qt::Horizontal);

        gridLayout_10->addWidget(hsld_scanSpeed, 1, 0, 1, 5);

        lbl_zScanDepth = new QLabel(gbox_ScanOptions);
        lbl_zScanDepth->setObjectName(QString::fromUtf8("lbl_zScanDepth"));

        gridLayout_10->addWidget(lbl_zScanDepth, 2, 4, 1, 1);

        dsbx_yScanHeight = new QDoubleSpinBox(gbox_ScanOptions);
        dsbx_yScanHeight->setObjectName(QString::fromUtf8("dsbx_yScanHeight"));
        dsbx_yScanHeight->setSingleStep(0.010000000000000);
        dsbx_yScanHeight->setValue(2.500000000000000);

        gridLayout_10->addWidget(dsbx_yScanHeight, 3, 2, 1, 1);

        lbl_xScanWidth = new QLabel(gbox_ScanOptions);
        lbl_xScanWidth->setObjectName(QString::fromUtf8("lbl_xScanWidth"));

        gridLayout_10->addWidget(lbl_xScanWidth, 2, 0, 1, 1);

        dsbx_zScanDepth = new QDoubleSpinBox(gbox_ScanOptions);
        dsbx_zScanDepth->setObjectName(QString::fromUtf8("dsbx_zScanDepth"));
        dsbx_zScanDepth->setSingleStep(0.010000000000000);
        dsbx_zScanDepth->setValue(2.500000000000000);

        gridLayout_10->addWidget(dsbx_zScanDepth, 3, 4, 1, 1);

        dsbx_xScanWidth = new QDoubleSpinBox(gbox_ScanOptions);
        dsbx_xScanWidth->setObjectName(QString::fromUtf8("dsbx_xScanWidth"));
        dsbx_xScanWidth->setSingleStep(0.010000000000000);
        dsbx_xScanWidth->setValue(2.500000000000000);

        gridLayout_10->addWidget(dsbx_xScanWidth, 3, 0, 1, 1);

        line_14 = new QFrame(gbox_ScanOptions);
        line_14->setObjectName(QString::fromUtf8("line_14"));
        line_14->setFrameShape(QFrame::VLine);
        line_14->setFrameShadow(QFrame::Sunken);

        gridLayout_10->addWidget(line_14, 2, 3, 2, 1);


        verticalLayout_13->addWidget(gbox_ScanOptions);

        scrollArea_4->setWidget(scrollAreaWidgetContents_4);

        verticalLayout_7->addWidget(scrollArea_4);

        tabs_tabControl->addTab(tab_3, QString());

        MainWindow->addWidget(tabs_tabControl, 0, 2, 1, 1);

        MWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1267, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuOptions = new QMenu(menubar);
        menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
        menuRemove = new QMenu(menuOptions);
        menuRemove->setObjectName(QString::fromUtf8("menuRemove"));
        menuCamera = new QMenu(menubar);
        menuCamera->setObjectName(QString::fromUtf8("menuCamera"));
        menuSettings = new QMenu(menubar);
        menuSettings->setObjectName(QString::fromUtf8("menuSettings"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuOptions->menuAction());
        menubar->addAction(menuCamera->menuAction());
        menubar->addAction(menuSettings->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionClear);
        menuFile->addAction(actionExit);
        menuOptions->addAction(menuRemove->menuAction());
        menuOptions->addSeparator();
        menuOptions->addAction(actionReset_Transform);
        menuOptions->addAction(actionReset_Scene);
        menuRemove->addAction(actionRemove_High_Resolution_Data);
        menuCamera->addAction(actionReset_Camera);
        menuSettings->addAction(actionInformation);
        menuHelp->addAction(actionAbout_OpenVDBViewer);

        retranslateUi(MWindow);

        tabs_tabControl->setCurrentIndex(0);
        cmbo_scanType->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MWindow)
    {
        MWindow->setWindowTitle(QCoreApplication::translate("MWindow", "OpenVDB Viewer - OpenGL", nullptr));
        actionOpen->setText(QCoreApplication::translate("MWindow", "Open", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("MWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionClear->setText(QCoreApplication::translate("MWindow", "Clear", nullptr));
#if QT_CONFIG(shortcut)
        actionClear->setShortcut(QCoreApplication::translate("MWindow", "Ctrl+Shift+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExit->setText(QCoreApplication::translate("MWindow", "Exit", nullptr));
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("MWindow", "Esc", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGo_Fullscreen->setText(QCoreApplication::translate("MWindow", "Go Fullscreen", nullptr));
#if QT_CONFIG(shortcut)
        actionGo_Fullscreen->setShortcut(QCoreApplication::translate("MWindow", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionReset_Camera->setText(QCoreApplication::translate("MWindow", "Reset Camera", nullptr));
#if QT_CONFIG(shortcut)
        actionReset_Camera->setShortcut(QCoreApplication::translate("MWindow", "Shift+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRemove_Mesh->setText(QCoreApplication::translate("MWindow", "Remove Mesh", nullptr));
        actionRemove_Both->setText(QCoreApplication::translate("MWindow", "Remove Both", nullptr));
        actionRemove_High_Resolution_Data->setText(QCoreApplication::translate("MWindow", "Remove High Resolution Data", nullptr));
#if QT_CONFIG(shortcut)
        actionRemove_High_Resolution_Data->setShortcut(QCoreApplication::translate("MWindow", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRemove_Mesh_2->setText(QCoreApplication::translate("MWindow", "Remove Mesh", nullptr));
#if QT_CONFIG(shortcut)
        actionRemove_Mesh_2->setShortcut(QCoreApplication::translate("MWindow", "Ctrl+Del", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRemove_all->setText(QCoreApplication::translate("MWindow", "Remove all", nullptr));
        actionReset_Transform->setText(QCoreApplication::translate("MWindow", "Reset Transform", nullptr));
#if QT_CONFIG(shortcut)
        actionReset_Transform->setShortcut(QCoreApplication::translate("MWindow", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionReset_Scene->setText(QCoreApplication::translate("MWindow", "Reset Scene", nullptr));
#if QT_CONFIG(shortcut)
        actionReset_Scene->setShortcut(QCoreApplication::translate("MWindow", "R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionInformation->setText(QCoreApplication::translate("MWindow", "Information", nullptr));
        actionAbout_OpenVDBViewer->setText(QCoreApplication::translate("MWindow", "About OpenVDBViewer", nullptr));
        FileName->setText(QCoreApplication::translate("MWindow", "Use File->Open to open a VDB file", nullptr));
        lbl_pointSize->setText(QCoreApplication::translate("MWindow", "Point Size", nullptr));
        lbl_lineWidth->setText(QCoreApplication::translate("MWindow", "Line Width", nullptr));
        cbx_showGrid->setText(QCoreApplication::translate("MWindow", "Show Grid", nullptr));
        gbox_Render->setTitle(QCoreApplication::translate("MWindow", "Render Mode", nullptr));
        cbx_showMesh->setText(QCoreApplication::translate("MWindow", "Show High Resolution", nullptr));
        lbl_renderChannel->setText(QCoreApplication::translate("MWindow", "Render Channel", nullptr));
        cbx_showBBox->setText(QCoreApplication::translate("MWindow", "Show Bounding Box", nullptr));
        gbox_vdbTree->setTitle(QCoreApplication::translate("MWindow", "VDB Tree", nullptr));
        cbx_showVDBTree->setText(QCoreApplication::translate("MWindow", "Show VDB Tree", nullptr));
        lbl_TreeLevels->setText(QCoreApplication::translate("MWindow", "Tree Levels", nullptr));
        cbx_treeLevel3->setText(QCoreApplication::translate("MWindow", "Level 3", nullptr));
        cbx_treeLevel2->setText(QCoreApplication::translate("MWindow", "Level 2", nullptr));
        cbx_treeLevel1->setText(QCoreApplication::translate("MWindow", "Level 1", nullptr));
        cbx_treeLevel0->setText(QCoreApplication::translate("MWindow", "Level 0", nullptr));
        gbox_LOD->setTitle(QCoreApplication::translate("MWindow", "Level of Detail", nullptr));
        btn_showFileInformation->setText(QCoreApplication::translate("MWindow", "Show File Information", nullptr));
        tabs_tabControl->setTabText(tabs_tabControl->indexOf(tab), QCoreApplication::translate("MWindow", "Render", nullptr));
        gbx_colourMap->setTitle(QCoreApplication::translate("MWindow", "Colour Ramp", nullptr));
        gbx_applyColourRampTo->setTitle(QCoreApplication::translate("MWindow", "Apply Colour Ramp to", nullptr));
        rdio_applyToFile->setText(QCoreApplication::translate("MWindow", "File", nullptr));
        rdio_applyToCulledPoints->setText(QCoreApplication::translate("MWindow", "Culled Points", nullptr));
        lbl_applyCullToChannelSelect->setText(QCoreApplication::translate("MWindow", "Apply to:", nullptr));
        cbx_applyColourMap->setText(QCoreApplication::translate("MWindow", "Apply Colour Ramp", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MWindow", "Colour Ramp Range", nullptr));
        rdio_automaticColourMap->setText(QCoreApplication::translate("MWindow", "Automatic", nullptr));
        rdio_userDefColourMap->setText(QCoreApplication::translate("MWindow", "User Defined", nullptr));
        lbl_colourRampBotoom->setText(QCoreApplication::translate("MWindow", "Bottom", nullptr));
        lbl_colourRampTop->setText(QCoreApplication::translate("MWindow", "Top", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MWindow", "Ramp Colour", nullptr));
        lbl_colourRampRed->setText(QCoreApplication::translate("MWindow", "Red", nullptr));
        lbl_colourRampGreen->setText(QCoreApplication::translate("MWindow", "Green", nullptr));
        lbl_colourRampBlue->setText(QCoreApplication::translate("MWindow", "Blue", nullptr));
        groupBox_3->setTitle(QString());
        rdio_pointRamp->setText(QCoreApplication::translate("MWindow", "Points", nullptr));
        rdio_channelRamp->setText(QCoreApplication::translate("MWindow", "Channel", nullptr));
        gbox_Vectors->setTitle(QCoreApplication::translate("MWindow", "Vectors", nullptr));
        cbx_showVectors->setText(QCoreApplication::translate("MWindow", "Show Channel as Vector", nullptr));
        lbl_VectorLength->setText(QCoreApplication::translate("MWindow", "Vector Length", nullptr));
        gbox_VectorOptions->setTitle(QCoreApplication::translate("MWindow", "Vector Options", nullptr));
        cmbo_vectorColourType->setItemText(0, QCoreApplication::translate("MWindow", "Solid Colour", nullptr));
        cmbo_vectorColourType->setItemText(1, QCoreApplication::translate("MWindow", "Direction", nullptr));

        lbl_Red->setText(QCoreApplication::translate("MWindow", "Red", nullptr));
        lbl_Blue->setText(QCoreApplication::translate("MWindow", "Blue", nullptr));
        lbl_Green->setText(QCoreApplication::translate("MWindow", "Green", nullptr));
        lbl_vectorColourType->setText(QCoreApplication::translate("MWindow", "Vector Colour Type", nullptr));
        cbx_invertVectorColours->setText(QCoreApplication::translate("MWindow", "Invert Colours", nullptr));
        tabs_tabControl->setTabText(tabs_tabControl->indexOf(tab_5), QCoreApplication::translate("MWindow", "Channels", nullptr));
        gbx_culling->setTitle(QCoreApplication::translate("MWindow", "Culling", nullptr));
        cbx_useCulling2->setText(QCoreApplication::translate("MWindow", "Use Culling", nullptr));
        lbl_cull2Type->setText(QString());
        lbl_cull2TypeChannel->setText(QCoreApplication::translate("MWindow", "Type:", nullptr));
        cmbo_cullingChoice2->setItemText(0, QCoreApplication::translate("MWindow", "Less than <", nullptr));
        cmbo_cullingChoice2->setItemText(1, QCoreApplication::translate("MWindow", "Between", nullptr));
        cmbo_cullingChoice2->setItemText(2, QCoreApplication::translate("MWindow", "Greater than >", nullptr));

        lbl_cull1Type->setText(QString());
        lbl_cull1TypeChannel->setText(QCoreApplication::translate("MWindow", "Type:", nullptr));
        cmbo_cullingChoice1->setItemText(0, QCoreApplication::translate("MWindow", "Less than <", nullptr));
        cmbo_cullingChoice1->setItemText(1, QCoreApplication::translate("MWindow", "Between", nullptr));
        cmbo_cullingChoice1->setItemText(2, QCoreApplication::translate("MWindow", "Greater than >", nullptr));

        cbx_useCulling1->setText(QCoreApplication::translate("MWindow", "Use Culling", nullptr));
        lbl_cull3Type->setText(QString());
        lbl_cull3TypeChannel->setText(QCoreApplication::translate("MWindow", "Type:", nullptr));
        cmbo_cullingChoice3->setItemText(0, QCoreApplication::translate("MWindow", "Less than <", nullptr));
        cmbo_cullingChoice3->setItemText(1, QCoreApplication::translate("MWindow", "Between", nullptr));
        cmbo_cullingChoice3->setItemText(2, QCoreApplication::translate("MWindow", "Greater than >", nullptr));

        cbx_useCulling3->setText(QCoreApplication::translate("MWindow", "Use Culling", nullptr));
        tabs_tabControl->setTabText(tabs_tabControl->indexOf(tab_6), QCoreApplication::translate("MWindow", "Culling", nullptr));
        gbox_Crop->setTitle(QCoreApplication::translate("MWindow", "Crop Model", nullptr));
        cbx_useCrop->setText(QCoreApplication::translate("MWindow", "Use Crop", nullptr));
        lbl_numCrops->setText(QCoreApplication::translate("MWindow", "Number of crop boxes", nullptr));
        cmbo_numCrops->setItemText(0, QCoreApplication::translate("MWindow", "1", nullptr));
        cmbo_numCrops->setItemText(1, QCoreApplication::translate("MWindow", "2", nullptr));
        cmbo_numCrops->setItemText(2, QCoreApplication::translate("MWindow", "3", nullptr));

        cmbo_numCrops->setCurrentText(QCoreApplication::translate("MWindow", "1", nullptr));
        lbl_depth->setText(QCoreApplication::translate("MWindow", "Depth", nullptr));
        lbl_height->setText(QCoreApplication::translate("MWindow", "Height", nullptr));
        lbl_cropNumber->setText(QCoreApplication::translate("MWindow", "Crop Box", nullptr));
        lbl_xPos->setText(QCoreApplication::translate("MWindow", "X", nullptr));
        lbl_yPos->setText(QCoreApplication::translate("MWindow", "Y", nullptr));
        lbl_width->setText(QCoreApplication::translate("MWindow", "Width", nullptr));
        lbl_zPos->setText(QCoreApplication::translate("MWindow", "Z", nullptr));
        gbox_ScanModel->setTitle(QCoreApplication::translate("MWindow", "Scan Model", nullptr));
        cmbo_scanType->setItemText(0, QCoreApplication::translate("MWindow", "X Axis", nullptr));
        cmbo_scanType->setItemText(1, QCoreApplication::translate("MWindow", "Y Axis", nullptr));
        cmbo_scanType->setItemText(2, QCoreApplication::translate("MWindow", "Z Axis", nullptr));

        btn_startSingleScan->setText(QCoreApplication::translate("MWindow", "Start", nullptr));
        btn_PauseScan->setText(QCoreApplication::translate("MWindow", "Pause", nullptr));
        btn_stopScan->setText(QCoreApplication::translate("MWindow", "Stop", nullptr));
        gbox_ScanOptions->setTitle(QCoreApplication::translate("MWindow", "Scan Options", nullptr));
        lbl_yScanHeight->setText(QCoreApplication::translate("MWindow", "Y Scan Height", nullptr));
        lbl_scanSpeed->setText(QCoreApplication::translate("MWindow", "Scan Speed", nullptr));
        lbl_zScanDepth->setText(QCoreApplication::translate("MWindow", "Z Scan Depth", nullptr));
        lbl_xScanWidth->setText(QCoreApplication::translate("MWindow", "X Scan Width", nullptr));
        tabs_tabControl->setTabText(tabs_tabControl->indexOf(tab_3), QCoreApplication::translate("MWindow", "Crop", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MWindow", "File", nullptr));
        menuOptions->setTitle(QCoreApplication::translate("MWindow", "Volume", nullptr));
        menuRemove->setTitle(QCoreApplication::translate("MWindow", "Remove", nullptr));
        menuCamera->setTitle(QCoreApplication::translate("MWindow", "Camera", nullptr));
        menuSettings->setTitle(QCoreApplication::translate("MWindow", "Information", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MWindow: public Ui_MWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MWINDOW_H
