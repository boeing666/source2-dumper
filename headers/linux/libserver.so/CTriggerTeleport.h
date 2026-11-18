#pragma once

class CTriggerTeleport : public CBaseTrigger /*0x0*/  // sizeof 0xD20, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xD10]; // offset 0x0
    CUtlSymbolLarge m_iLandmark; // offset 0xD10, size 0x8, align 8
    bool m_bUseLandmarkAngles; // offset 0xD18, size 0x1, align 1
    bool m_bMirrorPlayer; // offset 0xD19, size 0x1, align 1
    bool m_bCheckDestIfClearForPlayer; // offset 0xD1A, size 0x1, align 1
    bool m_bMoveWorldDecals; // offset 0xD1B, size 0x1, align 1
    char _pad_0D1C[0x4]; // offset 0xD1C
};
