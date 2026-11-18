#pragma once

class CDOTA_Modifier_Invoker_DeafeningBlast_Knockback : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 disarm_duration; // offset 0x1AF8, size 0x4, align 4
    Vector m_vPushDir; // offset 0x1AFC, size 0xC, align 4
    GameTime_t m_flStartTime; // offset 0x1B08, size 0x4, align 255
    char _pad_1B0C[0x4]; // offset 0x1B0C
};
