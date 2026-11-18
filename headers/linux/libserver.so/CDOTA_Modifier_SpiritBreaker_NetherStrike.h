#pragma once

class CDOTA_Modifier_SpiritBreaker_NetherStrike : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 damage; // offset 0x1AF8, size 0x4, align 4
    bool m_bAttackAfterwards; // offset 0x1AFC, size 0x1, align 1
    bool m_bStrikeLanded; // offset 0x1AFD, size 0x1, align 1
    char _pad_1AFE[0x2]; // offset 0x1AFE
    VectorWS m_vCastLocation; // offset 0x1B00, size 0xC, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x1B0C, size 0x4, align 4
};
