#pragma once

class CEnvLaser : public CBeam /*0x0*/  // sizeof 0xB10, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xAE8]; // offset 0x0
    CUtlSymbolLarge m_iszLaserTarget; // offset 0xAE8, size 0x8, align 8
    CHandle< CSprite > m_pSprite; // offset 0xAF0, size 0x4, align 4
    char _pad_0AF4[0x4]; // offset 0xAF4
    CUtlSymbolLarge m_iszSpriteName; // offset 0xAF8, size 0x8, align 8
    Vector m_firePosition; // offset 0xB00, size 0xC, align 4
    float32 m_flStartFrame; // offset 0xB0C, size 0x4, align 4
};
