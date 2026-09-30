#pragma once

class CCitadelSoundStackFieldOBB : public CBaseEntity /*0x0*/  // sizeof 0x4F0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    Vector m_vMins; // offset 0x4B0, size 0xC, align 4
    Vector m_vMaxs; // offset 0x4BC, size 0xC, align 4
    uint32 m_nMaxDistance; // offset 0x4C8, size 0x4, align 4
    char _pad_04CC[0x4]; // offset 0x4CC
    CUtlString m_nStackName; // offset 0x4D0, size 0x8, align 8
    CUtlString m_nOperatorName; // offset 0x4D8, size 0x8, align 8
    CUtlString m_nOperatorFieldName; // offset 0x4E0, size 0x8, align 8
    uint32 m_nMusicState; // offset 0x4E8, size 0x4, align 4
    char _pad_04EC[0x4]; // offset 0x4EC
};
