#pragma once

enum RadiusDmgOverride_t : uint32_t  // sizeof 0x4
{
    RADIUS_DMG_OVERRIDE_NONE = 0,
    RADIUS_DMG_OVERRIDE_POSITION_ONLY = 1,
    RADIUS_DMG_OVERRIDE_POSITION_SKIP_TRACES = 2,
};
