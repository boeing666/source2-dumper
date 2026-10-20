#pragma once

class CCitadel_Ability_FissureWall : public CCitadelBaseAbility /*0x0*/  // sizeof 0x17D8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1778]; // offset 0x0
    VectorWS m_vecPosition; // offset 0x1778, size 0xC, align 4
    VectorWS m_vecTravellingPosition; // offset 0x1784, size 0xC, align 4
    VectorWS m_vecInitialPosition; // offset 0x1790, size 0xC, align 4
    GameTime_t m_CastTime; // offset 0x179C, size 0x4, align 255
    Vector m_vecDirection; // offset 0x17A0, size 0xC, align 4
    Vector m_vecLeft; // offset 0x17AC, size 0xC, align 4
    float32 m_Length; // offset 0x17B8, size 0x4, align 4
    char _pad_17BC[0x16]; // offset 0x17BC
    bool m_bTraveling; // offset 0x17D2, size 0x1, align 1
    bool m_bPreview; // offset 0x17D3, size 0x1, align 1
    char _pad_17D4[0x4]; // offset 0x17D4
};
