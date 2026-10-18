#pragma once

enum AssetWarningFixType_t : uint32_t  // sizeof 0x4
{
    NONE = 0,
    VMDL_CONVERT_TO_MODELDOC = 1,
    VMAP_MANUAL_RECOMPILE = 2,
};
