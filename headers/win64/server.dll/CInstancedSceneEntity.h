#pragma once

class CInstancedSceneEntity : public CSceneEntity /*0x0*/  // sizeof 0x848, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x830]; // offset 0x0
    CHandle< CBaseEntity > m_hOwner; // offset 0x830, size 0x4, align 4
    bool m_bHadOwner; // offset 0x834, size 0x1, align 1
    char _pad_0835[0x3]; // offset 0x835
    float32 m_flPostSpeakDelay; // offset 0x838, size 0x4, align 4
    float32 m_flPreDelay; // offset 0x83C, size 0x4, align 4
    bool m_bIsBackground; // offset 0x840, size 0x1, align 1
    char _pad_0841[0x3]; // offset 0x841
    CHandle< CBaseEntity > m_hTarget; // offset 0x844, size 0x4, align 4
};
