#pragma once

class CDOTA_Modifier_Warlock_Rain_Of_Chaos_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 stun_duration; // offset 0x1AA8, size 0x4, align 4
    bool bHasScepter; // offset 0x1AAC, size 0x1, align 1
    char _pad_1AAD[0x3]; // offset 0x1AAD
    float32 aoe; // offset 0x1AB0, size 0x4, align 4
    int32 m_iCount; // offset 0x1AB4, size 0x4, align 4
};
