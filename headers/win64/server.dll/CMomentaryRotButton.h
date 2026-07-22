#pragma once

class CMomentaryRotButton : public CRotButton /*0x0*/  // sizeof 0x9B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x900]; // offset 0x0
    CEntityOutputTemplate< float32 > m_Position; // offset 0x900, size 0x20, align 8
    CEntityIOOutput m_OnUnpressed; // offset 0x920, size 0x18, align 255
    CEntityIOOutput m_OnFullyOpen; // offset 0x938, size 0x18, align 255
    CEntityIOOutput m_OnFullyClosed; // offset 0x950, size 0x18, align 255
    CEntityIOOutput m_OnReachedPosition; // offset 0x968, size 0x18, align 255
    int32 m_lastUsed; // offset 0x980, size 0x4, align 4
    QAngle m_start; // offset 0x984, size 0xC, align 4
    QAngle m_end; // offset 0x990, size 0xC, align 4
    float32 m_IdealYaw; // offset 0x99C, size 0x4, align 4
    CUtlSymbolLarge m_sNoise; // offset 0x9A0, size 0x8, align 8
    bool m_bUpdateTarget; // offset 0x9A8, size 0x1, align 1
    char _pad_09A9[0x3]; // offset 0x9A9
    int32 m_direction; // offset 0x9AC, size 0x4, align 4
    float32 m_returnSpeed; // offset 0x9B0, size 0x4, align 4
    float32 m_flStartPosition; // offset 0x9B4, size 0x4, align 4
};
