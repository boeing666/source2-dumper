#pragma once

class CDOTA_Modifier_Invoker_IceWall_SlowDebuff : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 slow; // offset 0x1A78, size 0x4, align 4
    float32 damage_per_second; // offset 0x1A7C, size 0x4, align 4
    int32 vector_cast_range; // offset 0x1A80, size 0x4, align 4
    float32 root_delay; // offset 0x1A84, size 0x4, align 4
    float32 root_duration; // offset 0x1A88, size 0x4, align 4
    float32 root_damage; // offset 0x1A8C, size 0x4, align 4
    float32 tick_interval; // offset 0x1A90, size 0x4, align 4
    CHandle< C_BaseEntity > m_hThinker; // offset 0x1A94, size 0x4, align 4
    GameTime_t m_NextDPSTime; // offset 0x1A98, size 0x4, align 255
    GameTime_t m_NextRootTime; // offset 0x1A9C, size 0x4, align 255
    bool m_bRootTriggered; // offset 0x1AA0, size 0x1, align 1
    char _pad_1AA1[0x7]; // offset 0x1AA1
};
