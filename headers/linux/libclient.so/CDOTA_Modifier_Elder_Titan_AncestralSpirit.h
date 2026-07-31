#pragma once

class CDOTA_Modifier_Elder_Titan_AncestralSpirit : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 pass_damage; // offset 0x1A78, size 0x4, align 4
    float32 radius; // offset 0x1A7C, size 0x4, align 4
    int32 controllable; // offset 0x1A80, size 0x4, align 4
    int32 m_nCreepsHit; // offset 0x1A84, size 0x4, align 4
    int32 m_nHeroesHit; // offset 0x1A88, size 0x4, align 4
    float32 m_flSpeed; // offset 0x1A8C, size 0x4, align 4
    CUtlVector< CHandle< C_BaseEntity > > m_hHitUnits; // offset 0x1A90, size 0x18, align 8
    VectorWS m_vCasterStartPosition; // offset 0x1AA8, size 0xC, align 4
    VectorWS m_vSpiritStartPosition; // offset 0x1AB4, size 0xC, align 4
};
