#pragma once

class CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged : public CDOTABaseAbility /*0x0*/  // sizeof 0x898, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    VectorWS m_vStartPos; // offset 0x85C, size 0xC, align 4
    int32 m_iArrowProjectile; // offset 0x868, size 0x4, align 4
    float32 axe_width; // offset 0x86C, size 0x4, align 4
    float32 axe_speed; // offset 0x870, size 0x4, align 4
    float32 axe_range; // offset 0x874, size 0x4, align 4
    float32 axe_spread; // offset 0x878, size 0x4, align 4
    int32 axe_count; // offset 0x87C, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_hHitUnits; // offset 0x880, size 0x18, align 8
};
