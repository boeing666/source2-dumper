#pragma once

class CMomentaryRotButton : public CRotButton /*0x0*/  // sizeof 0xD60, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xCA8]; // offset 0x0
    CEntityOutputTemplate< float32 > m_Position; // offset 0xCA8, size 0x20, align 8
    CEntityIOOutput m_OnUnpressed; // offset 0xCC8, size 0x18, align 255
    CEntityIOOutput m_OnFullyOpen; // offset 0xCE0, size 0x18, align 255
    CEntityIOOutput m_OnFullyClosed; // offset 0xCF8, size 0x18, align 255
    CEntityIOOutput m_OnReachedPosition; // offset 0xD10, size 0x18, align 255
    int32 m_lastUsed; // offset 0xD28, size 0x4, align 4
    QAngle m_start; // offset 0xD2C, size 0xC, align 4
    QAngle m_end; // offset 0xD38, size 0xC, align 4
    float32 m_IdealYaw; // offset 0xD44, size 0x4, align 4
    CUtlSymbolLarge m_sNoise; // offset 0xD48, size 0x8, align 8
    bool m_bUpdateTarget; // offset 0xD50, size 0x1, align 1
    char _pad_0D51[0x3]; // offset 0xD51
    int32 m_direction; // offset 0xD54, size 0x4, align 4
    float32 m_returnSpeed; // offset 0xD58, size 0x4, align 4
    float32 m_flStartPosition; // offset 0xD5C, size 0x4, align 4
};
