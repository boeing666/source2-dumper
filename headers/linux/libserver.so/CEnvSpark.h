#pragma once

class CEnvSpark : public CPointEntity /*0x0*/  // sizeof 0x7A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    float32 m_flDelay; // offset 0x778, size 0x4, align 4
    int32 m_nMagnitude; // offset 0x77C, size 0x4, align 4
    int32 m_nTrailLength; // offset 0x780, size 0x4, align 4
    int32 m_nType; // offset 0x784, size 0x4, align 4
    CEntityIOOutput m_OnSpark; // offset 0x788, size 0x18, align 255
};
