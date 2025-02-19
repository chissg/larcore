/**
 * @file   Geometry_service.cc
 * @brief  art framework interface to geometry description - implementation file
 * @author brebel@fnal.gov
 * @see    Geometry.h
 */

// class header
#include "larcore/Geometry/AuxDetGeometry.h"

// Framework includes
#include "art/Framework/Services/Registry/ServiceDefinitionMacros.h"

namespace geo {
  DEFINE_ART_SERVICE(AuxDetGeometry)
} // namespace geo

