#pragma once

struct HeroScalingStat_t  // sizeof 0x8, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    EStatsType eScalingStat; // offset 0x0, size 0x4, align 4
    float32 flScale; // offset 0x4, size 0x4, align 4
};
