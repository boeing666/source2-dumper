#pragma once

class CEnvLaser : public CBeam /*0x0*/  // sizeof 0x838, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x810]; // offset 0x0
    CUtlSymbolLarge m_iszLaserTarget; // offset 0x810, size 0x8, align 8
    CHandle< CSprite > m_pSprite; // offset 0x818, size 0x4, align 4
    char _pad_081C[0x4]; // offset 0x81C
    CUtlSymbolLarge m_iszSpriteName; // offset 0x820, size 0x8, align 8
    Vector m_firePosition; // offset 0x828, size 0xC, align 4
    float32 m_flStartFrame; // offset 0x834, size 0x4, align 4
};
