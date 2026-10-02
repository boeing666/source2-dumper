#pragma once

class CCitadel_Ability_TestHero_SummonSoldierVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x14F0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CSoundEventName m_strSoldierShootSound; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_BlockerModel; // offset 0x13F8, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flHorizontalOffset; // offset 0x14D8, size 0x4, align 4
    float32 m_flForwardOffset; // offset 0x14DC, size 0x4, align 4
    float32 m_flHorizontalStaggerPerSoldier; // offset 0x14E0, size 0x4, align 4
    float32 m_flRandomPositionOffset; // offset 0x14E4, size 0x4, align 4
    float32 m_flRandomMissTargetOffset; // offset 0x14E8, size 0x4, align 4
    char _pad_14EC[0x4]; // offset 0x14EC
};
