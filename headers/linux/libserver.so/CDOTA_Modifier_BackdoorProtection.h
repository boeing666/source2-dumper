#pragma once

class CDOTA_Modifier_BackdoorProtection : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    bool m_bActivated; // offset 0x1A78, size 0x1, align 1
    char _pad_1A79[0x3]; // offset 0x1A79
    float32 m_flHealthToRestore; // offset 0x1A7C, size 0x4, align 4
    int32 radius; // offset 0x1A80, size 0x4, align 4
    float32 activation_time; // offset 0x1A84, size 0x4, align 4
    int32 regen_rate; // offset 0x1A88, size 0x4, align 4
    char _pad_1A8C[0x4]; // offset 0x1A8C
    CountdownTimer m_TimerToActivate; // offset 0x1A90, size 0x18, align 8
};
