#pragma once

class CDOTA_Modifier_Invoker_IceWall_SlowDebuff : public CDOTA_Buff /*0x0*/  // sizeof 0x1B28, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 slow; // offset 0x1AF8, size 0x4, align 4
    float32 damage_per_second; // offset 0x1AFC, size 0x4, align 4
    int32 vector_cast_range; // offset 0x1B00, size 0x4, align 4
    float32 root_delay; // offset 0x1B04, size 0x4, align 4
    float32 root_duration; // offset 0x1B08, size 0x4, align 4
    float32 root_damage; // offset 0x1B0C, size 0x4, align 4
    float32 tick_interval; // offset 0x1B10, size 0x4, align 4
    CHandle< C_BaseEntity > m_hThinker; // offset 0x1B14, size 0x4, align 4
    GameTime_t m_NextDPSTime; // offset 0x1B18, size 0x4, align 255
    GameTime_t m_NextRootTime; // offset 0x1B1C, size 0x4, align 255
    bool m_bRootTriggered; // offset 0x1B20, size 0x1, align 1
    char _pad_1B21[0x7]; // offset 0x1B21
};
