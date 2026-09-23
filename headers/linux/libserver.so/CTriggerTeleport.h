#pragma once

class CTriggerTeleport : public CBaseTrigger /*0x0*/  // sizeof 0xCB0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xCA0]; // offset 0x0
    CUtlSymbolLarge m_iLandmark; // offset 0xCA0, size 0x8, align 8
    bool m_bUseLandmarkAngles; // offset 0xCA8, size 0x1, align 1
    bool m_bMirrorPlayer; // offset 0xCA9, size 0x1, align 1
    bool m_bCheckDestIfClearForPlayer; // offset 0xCAA, size 0x1, align 1
    char _pad_0CAB[0x5]; // offset 0xCAB
};
