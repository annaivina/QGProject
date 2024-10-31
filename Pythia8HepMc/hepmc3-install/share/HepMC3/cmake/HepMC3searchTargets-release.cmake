#----------------------------------------------------------------
# Generated CMake target import file for configuration "RELEASE".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "HepMC3::search" for configuration "RELEASE"
set_property(TARGET HepMC3::search APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(HepMC3::search PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib64/libHepMC3search.so.5"
  IMPORTED_SONAME_RELEASE "libHepMC3search.so.5"
  )

list(APPEND _cmake_import_check_targets HepMC3::search )
list(APPEND _cmake_import_check_files_for_HepMC3::search "${_IMPORT_PREFIX}/lib64/libHepMC3search.so.5" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
