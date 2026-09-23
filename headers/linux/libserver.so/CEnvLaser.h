#pragma once

class CEnvLaser : public CBeam /*0x0*/  // sizeof 0xBF0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBC8]; // offset 0x0
    CUtlSymbolLarge m_iszLaserTarget; // offset 0xBC8, size 0x8, align 8
    CHandle< CSprite > m_pSprite; // offset 0xBD0, size 0x4, align 4
    char _pad_0BD4[0x4]; // offset 0xBD4
    CUtlSymbolLarge m_iszSpriteName; // offset 0xBD8, size 0x8, align 8
    Vector m_firePosition; // offset 0xBE0, size 0xC, align 4
    float32 m_flStartFrame; // offset 0xBEC, size 0x4, align 4
};
