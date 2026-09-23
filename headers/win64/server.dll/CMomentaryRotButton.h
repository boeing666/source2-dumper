#pragma once

class CMomentaryRotButton : public CRotButton /*0x0*/  // sizeof 0xA88, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9D0]; // offset 0x0
    CEntityOutputTemplate< float32 > m_Position; // offset 0x9D0, size 0x20, align 8
    CEntityIOOutput m_OnUnpressed; // offset 0x9F0, size 0x18, align 255
    CEntityIOOutput m_OnFullyOpen; // offset 0xA08, size 0x18, align 255
    CEntityIOOutput m_OnFullyClosed; // offset 0xA20, size 0x18, align 255
    CEntityIOOutput m_OnReachedPosition; // offset 0xA38, size 0x18, align 255
    int32 m_lastUsed; // offset 0xA50, size 0x4, align 4
    QAngle m_start; // offset 0xA54, size 0xC, align 4
    QAngle m_end; // offset 0xA60, size 0xC, align 4
    float32 m_IdealYaw; // offset 0xA6C, size 0x4, align 4
    CUtlSymbolLarge m_sNoise; // offset 0xA70, size 0x8, align 8
    bool m_bUpdateTarget; // offset 0xA78, size 0x1, align 1
    char _pad_0A79[0x3]; // offset 0xA79
    int32 m_direction; // offset 0xA7C, size 0x4, align 4
    float32 m_returnSpeed; // offset 0xA80, size 0x4, align 4
    float32 m_flStartPosition; // offset 0xA84, size 0x4, align 4
};
