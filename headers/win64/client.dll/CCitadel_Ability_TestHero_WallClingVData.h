#pragma once

class CCitadel_Ability_TestHero_WallClingVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x14E8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChannelParticle; // offset 0x13E8, size 0xE0, align 8 | MPropertyStartGroup MPropertyStartGroup
    float32 m_flWallClingBackupDistance; // offset 0x14C8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flWallClingWallOffsetDistance; // offset 0x14CC, size 0x4, align 4
    float32 m_flWallClingTraceDistance; // offset 0x14D0, size 0x4, align 4
    float32 m_flWallClingTraceRadius; // offset 0x14D4, size 0x4, align 4
    float32 m_flWallClingSearchRadius; // offset 0x14D8, size 0x4, align 4
    bool m_bWallClingDebug; // offset 0x14DC, size 0x1, align 1
    char _pad_14DD[0x3]; // offset 0x14DD
    float32 m_flAcceleration; // offset 0x14E0, size 0x4, align 4
    float32 m_flWallClingStickyForce; // offset 0x14E4, size 0x4, align 4
};
