#pragma once

class CDOTA_Modifier_Mars_ArenaOfBlood_Leash : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 radius; // offset 0x1AA8, size 0x4, align 4
    float32 width; // offset 0x1AAC, size 0x4, align 4
    int32 obscure_vision; // offset 0x1AB0, size 0x4, align 4
    bool block_targeting; // offset 0x1AB4, size 0x1, align 1
    char _pad_1AB5[0x3]; // offset 0x1AB5
    float32 reduced_vision_percent; // offset 0x1AB8, size 0x4, align 4
    VectorWS m_vOriginLoc; // offset 0x1ABC, size 0xC, align 4
    bool pierces_debuff_immunity; // offset 0x1AC8, size 0x1, align 1
    char _pad_1AC9[0x7]; // offset 0x1AC9
};
