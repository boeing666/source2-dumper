#pragma once

struct WeightedChance_t  // sizeof 0x28, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CUtlOrderedMap< int32, float32 > m_mapOutcomesToWeights; // offset 0x0, size 0x28, align 8
};
