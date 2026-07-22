#pragma once

class CDOTA_Ability_Clinkz_Burning_Army : public CDOTABaseAbility /*0x0*/  // sizeof 0x888, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    int32 range; // offset 0x85C, size 0x4, align 4
    VectorWS m_vEndpoint; // offset 0x860, size 0xC, align 4
    Vector m_vSlashDir; // offset 0x86C, size 0xC, align 4
    int32 m_nDashProjectileID; // offset 0x878, size 0x4, align 4
    Vector m_vDashProjectileLocation; // offset 0x87C, size 0xC, align 4
};
