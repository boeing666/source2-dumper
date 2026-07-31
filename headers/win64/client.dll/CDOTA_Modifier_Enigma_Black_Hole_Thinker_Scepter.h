#pragma once

class CDOTA_Modifier_Enigma_Black_Hole_Thinker_Scepter : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 scepter_radius; // offset 0x1A78, size 0x4, align 4
    ParticleIndex_t n_FXIndex; // offset 0x1A7C, size 0x4, align 255
};
