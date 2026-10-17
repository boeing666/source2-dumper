#pragma once

class CDOTA_Modifier_Magnataur_Shockwave_Pull : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    Vector m_vDirection; // offset 0x1AA8, size 0xC, align 4
    float32 m_flEndTime; // offset 0x1AB4, size 0x4, align 4
    float32 m_flCurTime; // offset 0x1AB8, size 0x4, align 4
    float32 pull_duration; // offset 0x1ABC, size 0x4, align 4
    float32 effective_distance; // offset 0x1AC0, size 0x4, align 4
    char _pad_1AC4[0x4]; // offset 0x1AC4
};
