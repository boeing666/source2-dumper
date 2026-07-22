#pragma once

struct RegionTriggerBoxes_t  // sizeof 0x30, align 0xFF (client)
{
    AABB_t regionBox; // offset 0x0, size 0x18, align 255
    VectorWS vRegionBoxOrigin; // offset 0x18, size 0xC, align 4
    char _pad_0024[0x4]; // offset 0x24
    CUtlString strRegionName; // offset 0x28, size 0x8, align 8
};
