#pragma once

class CCitadel_Ability_TestHero_WallClingVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1170, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChannelParticle; // offset 0x1070, size 0xE0, align 8 | MPropertyStartGroup MPropertyStartGroup
    float32 m_flWallClingBackupDistance; // offset 0x1150, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flWallClingWallOffsetDistance; // offset 0x1154, size 0x4, align 4
    float32 m_flWallClingTraceDistance; // offset 0x1158, size 0x4, align 4
    float32 m_flWallClingTraceRadius; // offset 0x115C, size 0x4, align 4
    float32 m_flWallClingSearchRadius; // offset 0x1160, size 0x4, align 4
    bool m_bWallClingDebug; // offset 0x1164, size 0x1, align 1
    char _pad_1165[0x3]; // offset 0x1165
    float32 m_flAcceleration; // offset 0x1168, size 0x4, align 4
    float32 m_flWallClingStickyForce; // offset 0x116C, size 0x4, align 4
};
