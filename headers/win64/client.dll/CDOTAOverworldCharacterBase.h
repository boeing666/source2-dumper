#pragma once

class CDOTAOverworldCharacterBase  // sizeof 0x38, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    CPanoramaImageName m_sImage; // offset 0x0, size 0x10, align 8
    CUtlString m_sClassName; // offset 0x10, size 0x8, align 8
    Vector2D m_vSize; // offset 0x18, size 0x8, align 4
    Vector2D m_vOffset; // offset 0x20, size 0x8, align 4
    uint16 m_unFrameWidth; // offset 0x28, size 0x2, align 2
    uint16 m_unFrameTime; // offset 0x2A, size 0x2, align 2
    bool m_bUse3dPreview; // offset 0x2C, size 0x1, align 1
    char _pad_002D[0x3]; // offset 0x2D
    HeroID_t m_nPreviewHeroID; // offset 0x30, size 0x4, align 255
    char _pad_0034[0x4]; // offset 0x34
};
