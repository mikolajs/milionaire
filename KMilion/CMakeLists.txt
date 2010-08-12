project(kmilion)

find_package(KDE4 REQUIRED)
include (KDE4Defaults)

include_directories( ${KDE4_INCLUDES} ${QT_INCLUDES} )


SET(CMAKE_INSTALL_PREFIX "/usr" CACHE PATH "/usr" FORCE)



add_subdirectory( doc )
add_subdirectory( src )
add_subdirectory( icons )
