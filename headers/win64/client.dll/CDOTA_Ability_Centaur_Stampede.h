#pragma once

class CDOTA_Ability_Centaur_Stampede : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6D8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    float32 duration; // offset 0x6A8, size 0x4, align 4
    int32 base_damage; // offset 0x6AC, size 0x4, align 4
    float32 strength_damage; // offset 0x6B0, size 0x4, align 4
    float32 slow_duration; // offset 0x6B4, size 0x4, align 4
    float32 scepter_bonus_duration; // offset 0x6B8, size 0x4, align 4
    char _pad_06BC[0x4]; // offset 0x6BC
    CUtlVector< CHandle< C_BaseEntity > > m_hHitEntities; // offset 0x6C0, size 0x18, align 8
};
