#pragma once

class CDOTA_Ability_Jakiro_IcePath : public CDOTABaseAbility /*0x0*/  // sizeof 0x590, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    CHandle< CBaseEntity > m_hThinker; // offset 0x580, size 0x4, align 4
    int32 detonate_damage; // offset 0x584, size 0x4, align 4
    float32 detonate_stun_duration; // offset 0x588, size 0x4, align 4
    char _pad_058C[0x4]; // offset 0x58C
};
