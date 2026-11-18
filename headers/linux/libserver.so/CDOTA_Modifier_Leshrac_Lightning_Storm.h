#pragma once

class CDOTA_Modifier_Leshrac_Lightning_Storm : public CDOTA_Buff /*0x0*/  // sizeof 0x1B48, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 damage; // offset 0x1AF8, size 0x4, align 4
    float32 radius; // offset 0x1AFC, size 0x4, align 4
    int32 jump_count; // offset 0x1B00, size 0x4, align 4
    float32 slow_duration; // offset 0x1B04, size 0x4, align 4
    float32 jump_delay; // offset 0x1B08, size 0x4, align 4
    CHandle< CBaseEntity > hInitialTarget; // offset 0x1B0C, size 0x4, align 4
    float32 m_flDamage; // offset 0x1B10, size 0x4, align 4
    int32 m_iCurJumpCount; // offset 0x1B14, size 0x4, align 4
    VectorWS m_vCurTargetLoc; // offset 0x1B18, size 0xC, align 4
    char _pad_1B24[0x4]; // offset 0x1B24
    CUtlVector< CHandle< CBaseEntity > > m_hHitEntities; // offset 0x1B28, size 0x18, align 8
    bool m_bGrantedGem; // offset 0x1B40, size 0x1, align 1
    bool m_bBounceTwice; // offset 0x1B41, size 0x1, align 1
    char _pad_1B42[0x2]; // offset 0x1B42
    CHandle< CBaseEntity > m_eLastTarget; // offset 0x1B44, size 0x4, align 4
};
