#pragma once

class CDOTA_Modifier_Mars_ArenaOfBlood_Leash : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 radius; // offset 0x1AF8, size 0x4, align 4
    float32 width; // offset 0x1AFC, size 0x4, align 4
    int32 obscure_vision; // offset 0x1B00, size 0x4, align 4
    bool block_targeting; // offset 0x1B04, size 0x1, align 1
    char _pad_1B05[0x3]; // offset 0x1B05
    float32 reduced_vision_percent; // offset 0x1B08, size 0x4, align 4
    VectorWS m_vOriginLoc; // offset 0x1B0C, size 0xC, align 4
    bool pierces_debuff_immunity; // offset 0x1B18, size 0x1, align 1
    char _pad_1B19[0x7]; // offset 0x1B19
};
