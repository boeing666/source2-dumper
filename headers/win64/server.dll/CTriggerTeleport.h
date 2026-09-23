#pragma once

class CTriggerTeleport : public CBaseTrigger /*0x0*/  // sizeof 0x9D8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9C8]; // offset 0x0
    CUtlSymbolLarge m_iLandmark; // offset 0x9C8, size 0x8, align 8
    bool m_bUseLandmarkAngles; // offset 0x9D0, size 0x1, align 1
    bool m_bMirrorPlayer; // offset 0x9D1, size 0x1, align 1
    bool m_bCheckDestIfClearForPlayer; // offset 0x9D2, size 0x1, align 1
    char _pad_09D3[0x5]; // offset 0x9D3
};
