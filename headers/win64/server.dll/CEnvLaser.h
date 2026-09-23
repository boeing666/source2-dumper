#pragma once

class CEnvLaser : public CBeam /*0x0*/  // sizeof 0x918, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8F0]; // offset 0x0
    CUtlSymbolLarge m_iszLaserTarget; // offset 0x8F0, size 0x8, align 8
    CHandle< CSprite > m_pSprite; // offset 0x8F8, size 0x4, align 4
    char _pad_08FC[0x4]; // offset 0x8FC
    CUtlSymbolLarge m_iszSpriteName; // offset 0x900, size 0x8, align 8
    Vector m_firePosition; // offset 0x908, size 0xC, align 4
    float32 m_flStartFrame; // offset 0x914, size 0x4, align 4
};
