#pragma once

class CDOTA_Modifier_Venomancer_NoxiousPlagueContagious : public CDOTA_Buff /*0x0*/  // sizeof 0x1B00, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 debuff_radius; // offset 0x1AF8, size 0x4, align 4
    int32 spreads; // offset 0x1AFC, size 0x4, align 4
};
