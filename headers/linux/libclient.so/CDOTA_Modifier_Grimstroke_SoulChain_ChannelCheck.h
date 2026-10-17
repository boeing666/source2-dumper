#pragma once

class CDOTA_Modifier_Grimstroke_SoulChain_ChannelCheck : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    CHandle< C_BaseEntity > m_hCurrentAbility; // offset 0x1AA8, size 0x4, align 4
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1AAC, size 0x4, align 4
    CUtlVector< CHandle< C_BaseEntity > > m_hAbilities; // offset 0x1AB0, size 0x18, align 8
    VectorWS m_vLocation; // offset 0x1AC8, size 0xC, align 4
    GameTime_t m_fChannelEnd; // offset 0x1AD4, size 0x4, align 255
    bool m_bInterrupt; // offset 0x1AD8, size 0x1, align 1
    bool m_bExpired; // offset 0x1AD9, size 0x1, align 1
    char _pad_1ADA[0x6]; // offset 0x1ADA
};
