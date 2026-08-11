#pragma once

class CDOTA_Ability_Snapfire_SpitCreep : public CDOTABaseAbility /*0x0*/  // sizeof 0x880, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    int32 m_nDamagePerProjectile; // offset 0x85C, size 0x4, align 4
    CHandle< CBaseEntity > m_hGobbledUnit; // offset 0x860, size 0x4, align 4
    int32 m_nProjectileID; // offset 0x864, size 0x4, align 4
    char _pad_0868[0x18]; // offset 0x868
};
