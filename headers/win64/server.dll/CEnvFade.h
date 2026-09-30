#pragma once

class CEnvFade : public CLogicalEntity /*0x0*/  // sizeof 0x4D8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    Color m_fadeColor; // offset 0x4B0, size 0x4, align 4
    float32 m_Duration; // offset 0x4B4, size 0x4, align 4
    float32 m_HoldDuration; // offset 0x4B8, size 0x4, align 4
    char _pad_04BC[0x4]; // offset 0x4BC
    CEntityIOOutput m_OnBeginFade; // offset 0x4C0, size 0x18, align 255
};
