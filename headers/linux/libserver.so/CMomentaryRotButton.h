#pragma once

class CMomentaryRotButton : public CRotButton /*0x0*/  // sizeof 0xC80, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBC8]; // offset 0x0
    CEntityOutputTemplate< float32 > m_Position; // offset 0xBC8, size 0x20, align 8
    CEntityIOOutput m_OnUnpressed; // offset 0xBE8, size 0x18, align 255
    CEntityIOOutput m_OnFullyOpen; // offset 0xC00, size 0x18, align 255
    CEntityIOOutput m_OnFullyClosed; // offset 0xC18, size 0x18, align 255
    CEntityIOOutput m_OnReachedPosition; // offset 0xC30, size 0x18, align 255
    int32 m_lastUsed; // offset 0xC48, size 0x4, align 4
    QAngle m_start; // offset 0xC4C, size 0xC, align 4
    QAngle m_end; // offset 0xC58, size 0xC, align 4
    float32 m_IdealYaw; // offset 0xC64, size 0x4, align 4
    CUtlSymbolLarge m_sNoise; // offset 0xC68, size 0x8, align 8
    bool m_bUpdateTarget; // offset 0xC70, size 0x1, align 1
    char _pad_0C71[0x3]; // offset 0xC71
    int32 m_direction; // offset 0xC74, size 0x4, align 4
    float32 m_returnSpeed; // offset 0xC78, size 0x4, align 4
    float32 m_flStartPosition; // offset 0xC7C, size 0x4, align 4
};
