CMAKE_MINIMUM_REQUIRED(VERSION 2.6)

PROJECT( ViewChestData )

SET( CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}" )

FIND_PACKAGE( VTK )
IF ( VTK_FOUND )  
   INCLUDE ( ${VTK_USE_FILE} )    
ELSE ( VTK_FOUND )
  MESSAGE ( FATAL_ERROR "Cannot build without VTK" )
ENDIF( VTK_FOUND )

FIND_PACKAGE ( ITK )
IF ( ITK_FOUND )
  INCLUDE(${ITK_USE_FILE})
ELSE ( ITK_FOUND )
  MESSAGE ( FATAL_ERROR "Cannot build without ITK" )
ENDIF ( ITK_FOUND )

INCLUDE_DIRECTORIES(
${CMAKE_SOURCE_DIR}/Utilities
${CMAKE_SOURCE_DIR}/Common
${CMAKE_SOURCE_DIR}/IO
)

SET ( ViewChestData_SOURCE ViewChestData.cxx )

IF ( APPLE )
   ADD_EXECUTABLE ( ViewChestData  MACOSX_BUNDLE ${ViewChestData_SOURCE})
ELSE ( APPLE )
   ADD_EXECUTABLE ( ViewChestData ${ViewChestData_SOURCE})
ENDIF ( APPLE )

TARGET_LINK_LIBRARIES ( ViewChestData ${ITK_LIBRARIES} ${VTK_LIBRARIES} CIPCommon CIPUtilities CIPIO )
