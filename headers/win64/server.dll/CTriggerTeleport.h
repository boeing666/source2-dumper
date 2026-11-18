#pragma once

class CTriggerTeleport : public CBaseTrigger /*0x0*/  // sizeof 0xA40, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA30]; // offset 0x0
    CUtlSymbolLarge m_iLandmark; // offset 0xA30, size 0x8, align 8
    bool m_bUseLandmarkAngles; // offset 0xA38, size 0x1, align 1
    bool m_bMirrorPlayer; // offset 0xA39, size 0x1, align 1
    bool m_bCheckDestIfClearForPlayer; // offset 0xA3A, size 0x1, align 1
    bool m_bMoveWorldDecals; // offset 0xA3B, size 0x1, align 1
    char _pad_0A3C[0x4]; // offset 0xA3C
};
