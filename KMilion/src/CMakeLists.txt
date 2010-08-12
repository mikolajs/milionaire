set(kmilion_SRCS
   kmilion.cpp
   main.cpp
   QuizEdit.cpp
   QuizShow.cpp
   Quest.cpp
   Questions.cpp
   QuestionShow.cpp
 )

set( RESOURCE_RCS
    resource.qrc
)

set( QUIZ_RESOURCE testowy3.xml )

qt4_wrap_ui(kmilion_SRCS QuizEdit.ui QuizShow.ui)

qt4_add_resources( RESOURCE_RC_SRCS ${RESOURCE_RCS} )

####kde4_add_kcfg_files(kmilion_SRCS settings.kcfgc )

kde4_add_executable(kmilion ${kmilion_SRCS} ${RESOURCE_RC_SRCS})

target_link_libraries(kmilion ${KDE4_KDEUI_LIBS} )

install(TARGETS kmilion ${INSTALL_TARGETS_DEFAULT_ARGS} )


########### install files ###############

install( FILES kmilion.desktop  DESTINATION ${XDG_APPS_INSTALL_DIR} )
install( FILES kmilion.kcfg  DESTINATION  ${KCFG_INSTALL_DIR} )
install( FILES kmilionui.rc  DESTINATION  ${DATA_INSTALL_DIR}/kmilion )
install ( FILES ${QUIZ_RESOURCE} DESTINATION $ENV{HOME}/.config/kmilion )

