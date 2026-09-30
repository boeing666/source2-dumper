#pragma once

class CCitadel_Ability_FissureWall : public CCitadelBaseAbility /*0x0*/  // sizeof 0x17D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1770]; // offset 0x0
    VectorWS m_vecPosition; // offset 0x1770, size 0xC, align 4
    VectorWS m_vecTravellingPosition; // offset 0x177C, size 0xC, align 4
    VectorWS m_vecInitialPosition; // offset 0x1788, size 0xC, align 4
    GameTime_t m_CastTime; // offset 0x1794, size 0x4, align 255
    Vector m_vecDirection; // offset 0x1798, size 0xC, align 4
    Vector m_vecLeft; // offset 0x17A4, size 0xC, align 4
    float32 m_Length; // offset 0x17B0, size 0x4, align 4
    char _pad_17B4[0x16]; // offset 0x17B4
    bool m_bTraveling; // offset 0x17CA, size 0x1, align 1
    bool m_bPreview; // offset 0x17CB, size 0x1, align 1
    char _pad_17CC[0x4]; // offset 0x17CC
};
