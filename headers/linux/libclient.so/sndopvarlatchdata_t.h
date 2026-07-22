#pragma once

struct sndopvarlatchdata_t  // sizeof 0x30, align 0x8 [vtable trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    CUtlSymbolLarge m_iszStack; // offset 0x8, size 0x8, align 8
    CUtlSymbolLarge m_iszOperator; // offset 0x10, size 0x8, align 8
    CUtlSymbolLarge m_iszOpvar; // offset 0x18, size 0x8, align 8
    float32 m_flVal; // offset 0x20, size 0x4, align 4
    VectorWS m_vPos; // offset 0x24, size 0xC, align 4
};
