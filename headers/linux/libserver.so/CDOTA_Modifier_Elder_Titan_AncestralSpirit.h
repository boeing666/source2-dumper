#pragma once

class CDOTA_Modifier_Elder_Titan_AncestralSpirit : public CDOTA_Buff /*0x0*/  // sizeof 0x1AF0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 pass_damage; // offset 0x1AA8, size 0x4, align 4
    float32 radius; // offset 0x1AAC, size 0x4, align 4
    int32 controllable; // offset 0x1AB0, size 0x4, align 4
    int32 m_nCreepsHit; // offset 0x1AB4, size 0x4, align 4
    int32 m_nHeroesHit; // offset 0x1AB8, size 0x4, align 4
    float32 m_flSpeed; // offset 0x1ABC, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_hHitUnits; // offset 0x1AC0, size 0x18, align 8
    VectorWS m_vCasterStartPosition; // offset 0x1AD8, size 0xC, align 4
    VectorWS m_vSpiritStartPosition; // offset 0x1AE4, size 0xC, align 4
};
