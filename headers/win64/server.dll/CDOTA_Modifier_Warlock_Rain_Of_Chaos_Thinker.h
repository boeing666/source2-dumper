#pragma once

class CDOTA_Modifier_Warlock_Rain_Of_Chaos_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 stun_duration; // offset 0x1A78, size 0x4, align 4
    bool bHasScepter; // offset 0x1A7C, size 0x1, align 1
    char _pad_1A7D[0x3]; // offset 0x1A7D
    float32 aoe; // offset 0x1A80, size 0x4, align 4
    int32 m_iCount; // offset 0x1A84, size 0x4, align 4
};
