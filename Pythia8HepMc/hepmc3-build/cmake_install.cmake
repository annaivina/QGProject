# Install script for directory: /srv01/agrp/annai/annai/QURK-GLUON/COCOA/Patrick_Dev_Br/HepMC3

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/srv01/agrp/annai/annai/QURK-GLUON/COCOA/Patrick_Dev_Br/hepmc3-install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RELEASE")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/cvmfs/sft.cern.ch/lcg/releases/binutils/2.40-acaab/x86_64-el9/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "libs" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libHepMC3.so.4" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libHepMC3.so.4")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libHepMC3.so.4"
         RPATH "/srv01/agrp/annai/annai/QURK-GLUON/COCOA/Patrick_Dev_Br/hepmc3-install/lib64")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib64" TYPE SHARED_LIBRARY FILES "/srv01/agrp/annai/annai/QURK-GLUON/COCOA/Patrick_Dev_Br/hepmc3-build/outputs/lib64/libHepMC3.so.4")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libHepMC3.so.4" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libHepMC3.so.4")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libHepMC3.so.4"
         OLD_RPATH "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"
         NEW_RPATH "/srv01/agrp/annai/annai/QURK-GLUON/COCOA/Patrick_Dev_Br/hepmc3-install/lib64")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/cvmfs/sft.cern.ch/lcg/releases/binutils/2.40-acaab/x86_64-el9/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libHepMC3.so.4")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "libs" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libHepMC3.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libHepMC3.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libHepMC3.so"
         RPATH "/srv01/agrp/annai/annai/QURK-GLUON/COCOA/Patrick_Dev_Br/hepmc3-install/lib64")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib64" TYPE SHARED_LIBRARY FILES "/srv01/agrp/annai/annai/QURK-GLUON/COCOA/Patrick_Dev_Br/hepmc3-build/outputs/lib64/libHepMC3.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libHepMC3.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libHepMC3.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libHepMC3.so"
         OLD_RPATH "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"
         NEW_RPATH "/srv01/agrp/annai/annai/QURK-GLUON/COCOA/Patrick_Dev_Br/hepmc3-install/lib64")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/cvmfs/sft.cern.ch/lcg/releases/binutils/2.40-acaab/x86_64-el9/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libHepMC3.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/srv01/agrp/annai/annai/QURK-GLUON/COCOA/Patrick_Dev_Br/HepMC3/include/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/HepMC3/interfaces" TYPE DIRECTORY FILES "/srv01/agrp/annai/annai/QURK-GLUON/COCOA/Patrick_Dev_Br/HepMC3/interfaces/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "doc" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/HepMC3/examples" TYPE DIRECTORY FILES "/srv01/agrp/annai/annai/QURK-GLUON/COCOA/Patrick_Dev_Br/HepMC3/examples/" FILES_MATCHING REGEX "/[^/]*$" REGEX "/[^/]*CMakeFiles[^/]*$" EXCLUDE REGEX "/[^/]*myclass\\_Classes\\.cxx$" EXCLUDE REGEX "/[^/]*pcm$" EXCLUDE REGEX "/[^/]*rootmap$" EXCLUDE REGEX "/[^/]*Dict\\.cxx$" EXCLUDE REGEX "/Makefile$" EXCLUDE REGEX "/[^/]*cmake\\_install\\.cmake[^/]*$" EXCLUDE REGEX "/[^/]*libAnalysis[^/]*$" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/HepMC3/cmake" TYPE FILE FILES
    "/srv01/agrp/annai/annai/QURK-GLUON/COCOA/Patrick_Dev_Br/hepmc3-build/outputs/share/HepMC3/cmake/HepMC3Config.cmake"
    "/srv01/agrp/annai/annai/QURK-GLUON/COCOA/Patrick_Dev_Br/hepmc3-build/outputs/share/HepMC3/cmake/HepMC3Config-version.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "libs" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE FILES "/srv01/agrp/annai/annai/QURK-GLUON/COCOA/Patrick_Dev_Br/hepmc3-build/outputs/bin/HepMC3-config")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "devel" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/HepMC3/cmake/HepMC3Targets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/HepMC3/cmake/HepMC3Targets.cmake"
         "/srv01/agrp/annai/annai/QURK-GLUON/COCOA/Patrick_Dev_Br/hepmc3-build/CMakeFiles/Export/cf3e329493f6024abbb60b82a27ccf67/HepMC3Targets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/HepMC3/cmake/HepMC3Targets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/HepMC3/cmake/HepMC3Targets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/HepMC3/cmake" TYPE FILE FILES "/srv01/agrp/annai/annai/QURK-GLUON/COCOA/Patrick_Dev_Br/hepmc3-build/CMakeFiles/Export/cf3e329493f6024abbb60b82a27ccf67/HepMC3Targets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/HepMC3/cmake" TYPE FILE FILES "/srv01/agrp/annai/annai/QURK-GLUON/COCOA/Patrick_Dev_Br/hepmc3-build/CMakeFiles/Export/cf3e329493f6024abbb60b82a27ccf67/HepMC3Targets-release.cmake")
  endif()
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/srv01/agrp/annai/annai/QURK-GLUON/COCOA/Patrick_Dev_Br/hepmc3-build/search/cmake_install.cmake")
  include("/srv01/agrp/annai/annai/QURK-GLUON/COCOA/Patrick_Dev_Br/hepmc3-build/rootIO/cmake_install.cmake")
  include("/srv01/agrp/annai/annai/QURK-GLUON/COCOA/Patrick_Dev_Br/hepmc3-build/doc/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/srv01/agrp/annai/annai/QURK-GLUON/COCOA/Patrick_Dev_Br/hepmc3-build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
