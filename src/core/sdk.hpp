#pragma once

// Single entry point for every sourcesdk header the dumper uses.
// The SDK marks its classes with `schema class X`; the `schema` marker macro collides with
// our `namespace schema` and with glaze's `glz::schema`. All SDK headers are pulled in here
// (their include guards make later includes no-ops), then the marker macros are dropped.
// Older SDK branches (dota/deadlock) define the marker in tier0/basetypes.h; the main branch
// moved it to schemacompiler/schemaon.h / schemaoff.h.

// SDK_MAIN_BRANCH: the main SDK branch (cs2), whose IApplication / IScriptVM were re-typed
// after the engine source layout move; the dota/deadlock branches keep the old interfaces.
#if __has_include(<schemacompiler/schemaon.h>)
#define SDK_MAIN_BRANCH 1
#else
#define SDK_MAIN_BRANCH 0
#endif

#include <appframework/iappsystem.h>
#include <entity2/entityinstance.h>
#include <filesystem.h>
#include <icvar.h>

// igamesystem.h uses the `schema` marker without enabling it itself (main SDK branch).
// Pull in its dependencies first so their own schemaoff.h cannot disable the marker midway.
#if SDK_MAIN_BRANCH
#include <iloopmode.h>
#include "network_connection.pb.h"
#include <entity2/entityidentity.h>
#include <tier0/utlstring.h>
#include <tier0/utlvector.h>
#include <schemacompiler/schemaon.h>
#include <igamesystem.h>
#include <schemacompiler/schemaoff.h>
#else
#include <igamesystem.h>
#endif

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
