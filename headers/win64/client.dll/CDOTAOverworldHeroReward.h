#pragma once

class CDOTAOverworldHeroReward  // sizeof 0x60, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    HeroID_t m_unHeroID; // offset 0x0, size 0x4, align 255 | MVDataUniqueMonotonicInt
    char _pad_0004[0x44]; // offset 0x4
    CUtlVector< CUtlString > m_vecTokenNames; // offset 0x48, size 0x18, align 8 | MPropertyDescription
};
