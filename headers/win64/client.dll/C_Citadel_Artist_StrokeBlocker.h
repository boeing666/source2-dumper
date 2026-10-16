#pragma once

class C_Citadel_Artist_StrokeBlocker : public CBaseAnimGraph /*0x0*/  // sizeof 0x10E0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xDF8]; // offset 0x0
    VectorWS m_vStrokeStart; // offset 0xDF8, size 0xC, align 4
    VectorWS m_vStrokeEnd; // offset 0xE04, size 0xC, align 4
    CHandle< C_Citadel_Artist_StrokeBlocker > m_hPrevBlocker; // offset 0xE10, size 0x4, align 4
    CHandle< C_Citadel_Artist_StrokeBlocker > m_hNextBlocker; // offset 0xE14, size 0x4, align 4
    float32 m_flStrokeRadius; // offset 0xE18, size 0x4, align 4
    float32 m_flLifetime; // offset 0xE1C, size 0x4, align 4
    char _pad_0E20[0x8]; // offset 0xE20
    C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_vecOverlap; // offset 0xE28, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_vecPrevOverlap; // offset 0xE40, size 0x18, align 8
    CHandle< C_BaseEntity > m_hBreaker; // offset 0xE58, size 0x4, align 4
    char _pad_0E5C[0x284]; // offset 0xE5C
};
