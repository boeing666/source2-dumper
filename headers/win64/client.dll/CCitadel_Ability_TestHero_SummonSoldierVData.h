#pragma once

class CCitadel_Ability_TestHero_SummonSoldierVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1188, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CSoundEventName m_strSoldierShootSound; // offset 0x1080, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_BlockerModel; // offset 0x1090, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flHorizontalOffset; // offset 0x1170, size 0x4, align 4
    float32 m_flForwardOffset; // offset 0x1174, size 0x4, align 4
    float32 m_flHorizontalStaggerPerSoldier; // offset 0x1178, size 0x4, align 4
    float32 m_flRandomPositionOffset; // offset 0x117C, size 0x4, align 4
    float32 m_flRandomMissTargetOffset; // offset 0x1180, size 0x4, align 4
    char _pad_1184[0x4]; // offset 0x1184
};
