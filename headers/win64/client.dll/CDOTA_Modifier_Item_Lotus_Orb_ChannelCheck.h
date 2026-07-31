#pragma once

class CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    CHandle< C_BaseEntity > m_hCurrentAbility; // offset 0x1A78, size 0x4, align 4
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1A7C, size 0x4, align 4
    VectorWS m_vLocation; // offset 0x1A80, size 0xC, align 4
    GameTime_t m_fChannelEnd; // offset 0x1A8C, size 0x4, align 255
    bool m_bInterrupt; // offset 0x1A90, size 0x1, align 1
    bool m_bExpired; // offset 0x1A91, size 0x1, align 1
    char _pad_1A92[0x6]; // offset 0x1A92
};
