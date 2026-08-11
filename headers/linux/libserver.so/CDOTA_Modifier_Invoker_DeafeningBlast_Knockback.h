#pragma once

class CDOTA_Modifier_Invoker_DeafeningBlast_Knockback : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 disarm_duration; // offset 0x1A78, size 0x4, align 4
    Vector m_vPushDir; // offset 0x1A7C, size 0xC, align 4
    GameTime_t m_flStartTime; // offset 0x1A88, size 0x4, align 255
    char _pad_1A8C[0x4]; // offset 0x1A8C
};
