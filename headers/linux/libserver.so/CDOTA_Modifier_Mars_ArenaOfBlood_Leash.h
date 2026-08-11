#pragma once

class CDOTA_Modifier_Mars_ArenaOfBlood_Leash : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 radius; // offset 0x1A78, size 0x4, align 4
    float32 width; // offset 0x1A7C, size 0x4, align 4
    int32 obscure_vision; // offset 0x1A80, size 0x4, align 4
    bool block_targeting; // offset 0x1A84, size 0x1, align 1
    char _pad_1A85[0x3]; // offset 0x1A85
    float32 reduced_vision_percent; // offset 0x1A88, size 0x4, align 4
    VectorWS m_vOriginLoc; // offset 0x1A8C, size 0xC, align 4
    bool pierces_debuff_immunity; // offset 0x1A98, size 0x1, align 1
    char _pad_1A99[0x7]; // offset 0x1A99
};
