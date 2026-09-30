#pragma once

class CCitadelSoundStackFieldOBB : public C_BaseEntity /*0x0*/  // sizeof 0x6F0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6B0]; // offset 0x0
    Vector m_vMins; // offset 0x6B0, size 0xC, align 4
    Vector m_vMaxs; // offset 0x6BC, size 0xC, align 4
    uint32 m_nMaxDistance; // offset 0x6C8, size 0x4, align 4
    char _pad_06CC[0x4]; // offset 0x6CC
    CUtlString m_nStackName; // offset 0x6D0, size 0x8, align 8
    CUtlString m_nOperatorName; // offset 0x6D8, size 0x8, align 8
    CUtlString m_nOperatorFieldName; // offset 0x6E0, size 0x8, align 8
    uint32 m_nMusicState; // offset 0x6E8, size 0x4, align 4
    char _pad_06EC[0x4]; // offset 0x6EC
};
