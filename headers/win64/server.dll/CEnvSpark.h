#pragma once

class CEnvSpark : public CPointEntity /*0x0*/  // sizeof 0x4D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    float32 m_flDelay; // offset 0x4A8, size 0x4, align 4
    int32 m_nMagnitude; // offset 0x4AC, size 0x4, align 4
    int32 m_nTrailLength; // offset 0x4B0, size 0x4, align 4
    int32 m_nType; // offset 0x4B4, size 0x4, align 4
    CEntityIOOutput m_OnSpark; // offset 0x4B8, size 0x18, align 255
};
