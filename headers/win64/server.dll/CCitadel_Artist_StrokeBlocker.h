#pragma once

class CCitadel_Artist_StrokeBlocker : public CBaseAnimGraph /*0x0*/  // sizeof 0xB50, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xAE0]; // offset 0x0
    VectorWS m_vStrokeStart; // offset 0xAE0, size 0xC, align 4
    VectorWS m_vStrokeEnd; // offset 0xAEC, size 0xC, align 4
    CHandle< CCitadel_Artist_StrokeBlocker > m_hPrevBlocker; // offset 0xAF8, size 0x4, align 4
    CHandle< CCitadel_Artist_StrokeBlocker > m_hNextBlocker; // offset 0xAFC, size 0x4, align 4
    float32 m_flStrokeRadius; // offset 0xB00, size 0x4, align 4
    float32 m_flLifetime; // offset 0xB04, size 0x4, align 4
    char _pad_0B08[0x8]; // offset 0xB08
    CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_vecOverlap; // offset 0xB10, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_vecPrevOverlap; // offset 0xB28, size 0x18, align 8
    CHandle< CBaseEntity > m_hBreaker; // offset 0xB40, size 0x4, align 4
    char _pad_0B44[0xC]; // offset 0xB44
};
