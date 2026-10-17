#pragma once

class CDOTA_Modifier_Naga_Siren_Reel_In : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 pull_strength; // offset 0x1AA8, size 0x4, align 4
    int32 min_pull_distance; // offset 0x1AAC, size 0x4, align 4
    GameTime_t m_flLastThinkTime; // offset 0x1AB0, size 0x4, align 255
    char _pad_1AB4[0x4]; // offset 0x1AB4
};
