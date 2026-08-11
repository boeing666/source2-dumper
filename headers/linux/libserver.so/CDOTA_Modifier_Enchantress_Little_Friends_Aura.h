#pragma once

class CDOTA_Modifier_Enchantress_Little_Friends_Aura : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    CHandle< CBaseEntity > m_hTarget; // offset 0x1A78, size 0x4, align 4
    int32 m_nAlliesTaunted; // offset 0x1A7C, size 0x4, align 4
    bool m_bRelicTriggered; // offset 0x1A80, size 0x1, align 1
    char _pad_1A81[0x3]; // offset 0x1A81
    float32 radius; // offset 0x1A84, size 0x4, align 4
    int32 damage_amplification; // offset 0x1A88, size 0x4, align 4
    int32 damage_reduction; // offset 0x1A8C, size 0x4, align 4
    float32 root_base_duration; // offset 0x1A90, size 0x4, align 4
    float32 root_per_target; // offset 0x1A94, size 0x4, align 4
    float32 max_root; // offset 0x1A98, size 0x4, align 4
    GameTime_t m_flLastSeen; // offset 0x1A9C, size 0x4, align 255
};
