#pragma once

class CMonsterHunterHeroDefinition  // sizeof 0x20, align 0x8 (client) {MGetKV3ClassDefaults}
{
public:
    HeroID_t m_nHeroID; // offset 0x0, size 0x4, align 255
    char _pad_0004[0x4]; // offset 0x4
    CUtlVector< CMonsterHunterMaterialDropDefinition > m_vecMaterialDrops; // offset 0x8, size 0x18, align 8
};
