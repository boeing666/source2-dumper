#pragma once

class CDOTA_Ability_AbyssalUnderlord_Portal_Warp : public CDOTABaseAbility /*0x0*/  // sizeof 0x598, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    CHandle< CBaseEntity > m_hTarget; // offset 0x580, size 0x4, align 4
    float32 m_flChannelTime; // offset 0x584, size 0x4, align 4
    CHandle< CBaseEntity > m_hSpawnUnderlingThinker; // offset 0x588, size 0x4, align 4
    CHandle< CBaseEntity > m_hWarrior; // offset 0x58C, size 0x4, align 4
    CHandle< CBaseEntity > m_hArcher; // offset 0x590, size 0x4, align 4
    char _pad_0594[0x4]; // offset 0x594
};
