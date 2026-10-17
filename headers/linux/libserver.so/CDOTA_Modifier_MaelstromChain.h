#pragma once

class CDOTA_Modifier_MaelstromChain : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 chain_radius; // offset 0x1AA8, size 0x4, align 4
    int32 chain_strikes; // offset 0x1AAC, size 0x4, align 4
    int32 chain_damage; // offset 0x1AB0, size 0x4, align 4
    float32 chain_delay; // offset 0x1AB4, size 0x4, align 4
    int32 m_iCurJumpCount; // offset 0x1AB8, size 0x4, align 4
    VectorWS m_vCurTargetLoc; // offset 0x1ABC, size 0xC, align 4
    CUtlVector< CHandle< CBaseEntity > > m_hHitEntities; // offset 0x1AC8, size 0x18, align 8
};
