#pragma once

class CDOTA_Modifier_Grimstroke_SoulChain_ChannelCheck : public CDOTA_Buff /*0x0*/  // sizeof 0x1B30, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    CHandle< CBaseEntity > m_hCurrentAbility; // offset 0x1AF8, size 0x4, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x1AFC, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_hAbilities; // offset 0x1B00, size 0x18, align 8
    VectorWS m_vLocation; // offset 0x1B18, size 0xC, align 4
    GameTime_t m_fChannelEnd; // offset 0x1B24, size 0x4, align 255
    bool m_bInterrupt; // offset 0x1B28, size 0x1, align 1
    bool m_bExpired; // offset 0x1B29, size 0x1, align 1
    char _pad_1B2A[0x6]; // offset 0x1B2A
};
