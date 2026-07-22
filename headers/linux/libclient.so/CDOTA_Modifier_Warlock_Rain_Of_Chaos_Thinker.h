#pragma once

class CDOTA_Modifier_Warlock_Rain_Of_Chaos_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 stun_duration; // offset 0x1A58, size 0x4, align 4
    bool bHasScepter; // offset 0x1A5C, size 0x1, align 1
    char _pad_1A5D[0x3]; // offset 0x1A5D
    float32 aoe; // offset 0x1A60, size 0x4, align 4
    int32 m_iCount; // offset 0x1A64, size 0x4, align 4
};
