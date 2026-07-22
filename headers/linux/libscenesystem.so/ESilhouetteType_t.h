#pragma once

enum ESilhouetteType_t : uint32_t  // sizeof 0x4
{
    SILHOUETTE_NONE = 0,
    SILHOUETTE_LIGHT = 1,
    SILHOUETTE_ENVMAP = 2,
    SILHOUETTE_LPV = 4,
};
