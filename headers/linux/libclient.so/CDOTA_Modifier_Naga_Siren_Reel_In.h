#pragma once

class CDOTA_Modifier_Naga_Siren_Reel_In : public CDOTA_Buff /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 pull_strength; // offset 0x1A58, size 0x4, align 4
    int32 min_pull_distance; // offset 0x1A5C, size 0x4, align 4
    GameTime_t m_flLastThinkTime; // offset 0x1A60, size 0x4, align 255
    char _pad_1A64[0x4]; // offset 0x1A64
};
