# ======================================================================
#
# Testing
#
# ======================================================================

find_package(Boost REQUIRED)

cet_test(ServiceUtil_test
  LIBRARIES
    larcorealg::CoreUtils
    art::Framework_Services_Registry
    art::Utilities
    canvas::canvas
    messagefacility::MF_MessageLogger
    fhiclcpp::fhiclcpp
    cetlib_except::cetlib_except
  USE_BOOST_UNIT
  )

