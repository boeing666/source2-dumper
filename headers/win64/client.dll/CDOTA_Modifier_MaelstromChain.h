#pragma once

class CDOTA_Modifier_MaelstromChain : public CDOTA_Buff /*0x0*/  // sizeof 0x1B30, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 chain_radius; // offset 0x1AF8, size 0x4, align 4
    int32 chain_strikes; // offset 0x1AFC, size 0x4, align 4
    float32 chain_damage; // offset 0x1B00, size 0x4, align 4
    float32 chain_delay; // offset 0x1B04, size 0x4, align 4
    int32 m_iCurJumpCount; // offset 0x1B08, size 0x4, align 4
    VectorWS m_vCurTargetLoc; // offset 0x1B0C, size 0xC, align 4
    CUtlVector< CHandle< C_BaseEntity > > m_hHitEntities; // offset 0x1B18, size 0x18, align 8
};
