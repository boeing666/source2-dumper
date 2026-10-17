#pragma once

class CInstancedSceneEntity : public CSceneEntity /*0x0*/  // sizeof 0xB10, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xAF8]; // offset 0x0
    CHandle< CBaseEntity > m_hOwner; // offset 0xAF8, size 0x4, align 4
    bool m_bHadOwner; // offset 0xAFC, size 0x1, align 1
    char _pad_0AFD[0x3]; // offset 0xAFD
    float32 m_flPostSpeakDelay; // offset 0xB00, size 0x4, align 4
    float32 m_flPreDelay; // offset 0xB04, size 0x4, align 4
    bool m_bIsBackground; // offset 0xB08, size 0x1, align 1
    char _pad_0B09[0x3]; // offset 0xB09
    CHandle< CBaseEntity > m_hTarget; // offset 0xB0C, size 0x4, align 4
};
