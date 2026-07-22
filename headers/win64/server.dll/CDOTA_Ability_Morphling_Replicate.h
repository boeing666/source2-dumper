#pragma once

class CDOTA_Ability_Morphling_Replicate : public CDOTABaseAbility /*0x0*/  // sizeof 0x590, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    CHandle< CBaseEntity > m_hTarget; // offset 0x580, size 0x4, align 4
    CHandle< CBaseEntity > m_hScepterIllusion; // offset 0x584, size 0x4, align 4
    bool m_bIsAltCastState; // offset 0x588, size 0x1, align 1
    char _pad_0589[0x7]; // offset 0x589
};
