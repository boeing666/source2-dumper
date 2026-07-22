#pragma once

class CDOTA_Ability_Dawnbreaker_Solar_Guardian : public CDOTABaseAbility /*0x0*/  // sizeof 0x590, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    CHandle< CBaseEntity > m_hThinker; // offset 0x580, size 0x4, align 4
    bool m_bJumping; // offset 0x584, size 0x1, align 1
    char _pad_0585[0x3]; // offset 0x585
    CHandle< CBaseEntity > m_hTeleportTarget; // offset 0x588, size 0x4, align 4
    char _pad_058C[0x4]; // offset 0x58C
};
