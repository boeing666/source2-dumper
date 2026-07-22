#pragma once

class CEnvFade : public CLogicalEntity /*0x0*/  // sizeof 0x7B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    Color m_fadeColor; // offset 0x788, size 0x4, align 1
    float32 m_Duration; // offset 0x78C, size 0x4, align 4
    float32 m_HoldDuration; // offset 0x790, size 0x4, align 4
    char _pad_0794[0x4]; // offset 0x794
    CEntityIOOutput m_OnBeginFade; // offset 0x798, size 0x18, align 255
};
