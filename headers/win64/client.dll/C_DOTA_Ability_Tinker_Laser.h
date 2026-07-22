#pragma once

class C_DOTA_Ability_Tinker_Laser : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6D0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    VectorWS m_vProjectileLocation; // offset 0x6A8, size 0xC, align 4
    bool bBlocked; // offset 0x6B4, size 0x1, align 1
    char _pad_06B5[0x3]; // offset 0x6B5
    CUtlVector< CHandle< C_BaseEntity > > m_hHitEntities; // offset 0x6B8, size 0x18, align 8
};
