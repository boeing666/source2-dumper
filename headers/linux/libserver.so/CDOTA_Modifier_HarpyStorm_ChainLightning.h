#pragma once

class CDOTA_Modifier_HarpyStorm_ChainLightning : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 jump_range; // offset 0x1AA8, size 0x4, align 4
    int32 max_targets; // offset 0x1AAC, size 0x4, align 4
    float32 damage_percent_loss; // offset 0x1AB0, size 0x4, align 4
    float32 m_flCurDamage; // offset 0x1AB4, size 0x4, align 4
    VectorWS m_vJumpPosition; // offset 0x1AB8, size 0xC, align 4
    char _pad_1AC4[0x4]; // offset 0x1AC4
    CUtlVector< CHandle< CBaseEntity > > m_hHitEntities; // offset 0x1AC8, size 0x18, align 8
};
