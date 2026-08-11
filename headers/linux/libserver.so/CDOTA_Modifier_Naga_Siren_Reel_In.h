#pragma once

class CDOTA_Modifier_Naga_Siren_Reel_In : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 pull_strength; // offset 0x1A78, size 0x4, align 4
    int32 min_pull_distance; // offset 0x1A7C, size 0x4, align 4
    GameTime_t m_flLastThinkTime; // offset 0x1A80, size 0x4, align 255
    char _pad_1A84[0x4]; // offset 0x1A84
};
