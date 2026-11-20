#pragma once

class CDOTA_Modifier_Morphling_Replicate_Echo : public CDOTA_Buff /*0x0*/  // sizeof 0x1B38, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    CHandle< CBaseEntity > m_hTarget; // offset 0x1AF8, size 0x4, align 4
    CHandle< CBaseEntity > m_hEchoAbility; // offset 0x1AFC, size 0x4, align 4
    int32 m_nEchoIndex; // offset 0x1B00, size 0x4, align 4
    bool m_bSpent; // offset 0x1B04, size 0x1, align 1
    char _pad_1B05[0x3]; // offset 0x1B05
    GameTime_t m_flExpireTime; // offset 0x1B08, size 0x4, align 255
    CHandle< CBaseEntity > m_hChannelAbility; // offset 0x1B0C, size 0x4, align 4
    GameTime_t m_flLastChannelThinkTime; // offset 0x1B10, size 0x4, align 255
    CHandle< CBaseEntity > m_hDebuffTarget; // offset 0x1B14, size 0x4, align 4
    char _pad_1B18[0x18]; // offset 0x1B18
    float32 echo_power; // offset 0x1B30, size 0x4, align 4
    float32 scepter_echo_visible_duration; // offset 0x1B34, size 0x4, align 4
};
