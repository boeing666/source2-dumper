#pragma once

class CDOTA_Ability_Snapfire_SpitCreep : public CDOTABaseAbility /*0x0*/  // sizeof 0x5A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    int32 m_nDamagePerProjectile; // offset 0x580, size 0x4, align 4
    CHandle< CBaseEntity > m_hGobbledUnit; // offset 0x584, size 0x4, align 4
    int32 m_nProjectileID; // offset 0x588, size 0x4, align 4
    char _pad_058C[0x14]; // offset 0x58C
};
