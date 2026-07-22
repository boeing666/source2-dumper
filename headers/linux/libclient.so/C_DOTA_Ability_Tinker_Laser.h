#pragma once

class C_DOTA_Ability_Tinker_Laser : public C_DOTABaseAbility /*0x0*/  // sizeof 0x850, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    VectorWS m_vProjectileLocation; // offset 0x824, size 0xC, align 4
    bool bBlocked; // offset 0x830, size 0x1, align 1
    char _pad_0831[0x7]; // offset 0x831
    CUtlVector< CHandle< C_BaseEntity > > m_hHitEntities; // offset 0x838, size 0x18, align 8
};
