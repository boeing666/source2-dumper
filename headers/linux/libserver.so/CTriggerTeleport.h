#pragma once

class CTriggerTeleport : public CBaseTrigger /*0x0*/  // sizeof 0xBD8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBC8]; // offset 0x0
    CUtlSymbolLarge m_iLandmark; // offset 0xBC8, size 0x8, align 8
    bool m_bUseLandmarkAngles; // offset 0xBD0, size 0x1, align 1
    bool m_bMirrorPlayer; // offset 0xBD1, size 0x1, align 1
    bool m_bCheckDestIfClearForPlayer; // offset 0xBD2, size 0x1, align 1
    char _pad_0BD3[0x5]; // offset 0xBD3
};
