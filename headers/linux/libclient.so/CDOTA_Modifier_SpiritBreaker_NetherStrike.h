#pragma once

class CDOTA_Modifier_SpiritBreaker_NetherStrike : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 damage; // offset 0x1A78, size 0x4, align 4
    bool m_bStrikeLanded; // offset 0x1A7C, size 0x1, align 1
    char _pad_1A7D[0x3]; // offset 0x1A7D
    VectorWS m_vCastLocation; // offset 0x1A80, size 0xC, align 4
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1A8C, size 0x4, align 4
};
