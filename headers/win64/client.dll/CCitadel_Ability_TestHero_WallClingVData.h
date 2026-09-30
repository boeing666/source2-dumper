#pragma once

class CCitadel_Ability_TestHero_WallClingVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x14A0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChannelParticle; // offset 0x13A0, size 0xE0, align 8 | MPropertyStartGroup MPropertyStartGroup
    float32 m_flWallClingBackupDistance; // offset 0x1480, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flWallClingWallOffsetDistance; // offset 0x1484, size 0x4, align 4
    float32 m_flWallClingTraceDistance; // offset 0x1488, size 0x4, align 4
    float32 m_flWallClingTraceRadius; // offset 0x148C, size 0x4, align 4
    float32 m_flWallClingSearchRadius; // offset 0x1490, size 0x4, align 4
    bool m_bWallClingDebug; // offset 0x1494, size 0x1, align 1
    char _pad_1495[0x3]; // offset 0x1495
    float32 m_flAcceleration; // offset 0x1498, size 0x4, align 4
    float32 m_flWallClingStickyForce; // offset 0x149C, size 0x4, align 4
};
