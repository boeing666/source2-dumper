#pragma once

class CDOTA_Modifier_HarpyStorm_ChainLightning : public CDOTA_Buff /*0x0*/  // sizeof 0x1B30, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 jump_range; // offset 0x1AF8, size 0x4, align 4
    int32 max_targets; // offset 0x1AFC, size 0x4, align 4
    float32 damage_percent_loss; // offset 0x1B00, size 0x4, align 4
    float32 m_flCurDamage; // offset 0x1B04, size 0x4, align 4
    VectorWS m_vJumpPosition; // offset 0x1B08, size 0xC, align 4
    char _pad_1B14[0x4]; // offset 0x1B14
    CUtlVector< CHandle< CBaseEntity > > m_hHitEntities; // offset 0x1B18, size 0x18, align 8
};
