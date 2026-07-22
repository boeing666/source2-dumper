#pragma once

class CMomentaryRotButton : public CRotButton /*0x0*/  // sizeof 0x9A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8F0]; // offset 0x0
    CEntityOutputTemplate< float32 > m_Position; // offset 0x8F0, size 0x20, align 8
    CEntityIOOutput m_OnUnpressed; // offset 0x910, size 0x18, align 255
    CEntityIOOutput m_OnFullyOpen; // offset 0x928, size 0x18, align 255
    CEntityIOOutput m_OnFullyClosed; // offset 0x940, size 0x18, align 255
    CEntityIOOutput m_OnReachedPosition; // offset 0x958, size 0x18, align 255
    int32 m_lastUsed; // offset 0x970, size 0x4, align 4
    QAngle m_start; // offset 0x974, size 0xC, align 4
    QAngle m_end; // offset 0x980, size 0xC, align 4
    float32 m_IdealYaw; // offset 0x98C, size 0x4, align 4
    CUtlSymbolLarge m_sNoise; // offset 0x990, size 0x8, align 8
    bool m_bUpdateTarget; // offset 0x998, size 0x1, align 1
    char _pad_0999[0x3]; // offset 0x999
    int32 m_direction; // offset 0x99C, size 0x4, align 4
    float32 m_returnSpeed; // offset 0x9A0, size 0x4, align 4
    float32 m_flStartPosition; // offset 0x9A4, size 0x4, align 4
};
