#pragma once

class CDOTA_Modifier_Grimstroke_SoulChain_ChannelCheck : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    CHandle< CBaseEntity > m_hCurrentAbility; // offset 0x1A78, size 0x4, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x1A7C, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_hAbilities; // offset 0x1A80, size 0x18, align 8
    VectorWS m_vLocation; // offset 0x1A98, size 0xC, align 4
    GameTime_t m_fChannelEnd; // offset 0x1AA4, size 0x4, align 255
    bool m_bInterrupt; // offset 0x1AA8, size 0x1, align 1
    bool m_bExpired; // offset 0x1AA9, size 0x1, align 1
    char _pad_1AAA[0x6]; // offset 0x1AAA
};
