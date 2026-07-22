#pragma once

class CTriggerTeleport : public CBaseTrigger /*0x0*/  // sizeof 0x8F0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8E0]; // offset 0x0
    CUtlSymbolLarge m_iLandmark; // offset 0x8E0, size 0x8, align 8
    bool m_bUseLandmarkAngles; // offset 0x8E8, size 0x1, align 1
    bool m_bMirrorPlayer; // offset 0x8E9, size 0x1, align 1
    bool m_bCheckDestIfClearForPlayer; // offset 0x8EA, size 0x1, align 1
    char _pad_08EB[0x5]; // offset 0x8EB
};
