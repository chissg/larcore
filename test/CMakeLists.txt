
include(CetTest)
cet_enable_asserts()
cet_test_env(FHICL_FILE_PATH=$ENV{FHICL_FILE_PATH}:.)

add_subdirectory(Geometry)
add_subdirectory(CoreUtils)

