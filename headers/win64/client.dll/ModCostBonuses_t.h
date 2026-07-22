#pragma once

struct ModCostBonuses_t  // sizeof 0xC, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults MPropertyArrayElementNameKey}
{
    int32 nGoldThreshold; // offset 0x0, size 0x4, align 4
    float32 flBonus; // offset 0x4, size 0x4, align 4
    float32 flPercentOnGraph; // offset 0x8, size 0x4, align 4
};
