#pragma once

class CEnvFade : public CLogicalEntity /*0x0*/  // sizeof 0x4C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    Color m_fadeColor; // offset 0x498, size 0x4, align 1
    float32 m_Duration; // offset 0x49C, size 0x4, align 4
    float32 m_HoldDuration; // offset 0x4A0, size 0x4, align 4
    char _pad_04A4[0x4]; // offset 0x4A4
    CEntityIOOutput m_OnBeginFade; // offset 0x4A8, size 0x18, align 255
};
