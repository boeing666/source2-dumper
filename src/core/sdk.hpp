#pragma once

// Single entry point for every sourcesdk header the dumper uses.
// tier0/basetypes.h defines `#define schema namespace ValveSchemaMarker {}` for the
// SDK's own `schema class X` annotations; it collides with our `namespace schema` and
// with glaze's `glz::schema`. All SDK headers are pulled in here (their include guards
// make later includes no-ops), then the marker macros are dropped.

#include <appframework/iappsystem.h>
#include <entity2/entityinstance.h>
#include <filesystem.h>
#include <icvar.h>
#include <igamesystem.h>
#include <igamesystemfactory.h>
#include <networksystem/inetworkserializer.h>
#include <schemasystem/schemasystem.h>
#include <tier0/keyvalues.h>
#include <tier1/convar.h>
#include <tier1/keyvalues3.h>
#include <tier1/tier1.h>
#include <vscript/ivscript.h>
#include "eiface.h"

#undef schema
#undef valve_schema
