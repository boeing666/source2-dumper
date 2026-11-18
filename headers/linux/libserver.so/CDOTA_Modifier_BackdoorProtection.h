#pragma once

class CDOTA_Modifier_BackdoorProtection : public CDOTA_Buff /*0x0*/  // sizeof 0x1B28, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    bool m_bActivated; // offset 0x1AF8, size 0x1, align 1
    char _pad_1AF9[0x3]; // offset 0x1AF9
    float32 m_flHealthToRestore; // offset 0x1AFC, size 0x4, align 4
    int32 radius; // offset 0x1B00, size 0x4, align 4
    float32 activation_time; // offset 0x1B04, size 0x4, align 4
    int32 regen_rate; // offset 0x1B08, size 0x4, align 4
    char _pad_1B0C[0x4]; // offset 0x1B0C
    CountdownTimer m_TimerToActivate; // offset 0x1B10, size 0x18, align 8
};
