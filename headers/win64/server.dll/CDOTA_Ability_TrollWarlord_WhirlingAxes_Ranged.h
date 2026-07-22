#pragma once

class CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged : public CDOTABaseAbility /*0x0*/  // sizeof 0x5C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    VectorWS m_vStartPos; // offset 0x580, size 0xC, align 4
    int32 m_iArrowProjectile; // offset 0x58C, size 0x4, align 4
    float32 axe_width; // offset 0x590, size 0x4, align 4
    float32 axe_speed; // offset 0x594, size 0x4, align 4
    float32 axe_range; // offset 0x598, size 0x4, align 4
    float32 axe_spread; // offset 0x59C, size 0x4, align 4
    int32 axe_count; // offset 0x5A0, size 0x4, align 4
    char _pad_05A4[0x4]; // offset 0x5A4
    CUtlVector< CHandle< CBaseEntity > > m_hHitUnits; // offset 0x5A8, size 0x18, align 8
};
