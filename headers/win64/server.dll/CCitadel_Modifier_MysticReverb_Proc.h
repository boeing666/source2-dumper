#pragma once

class CCitadel_Modifier_MysticReverb_Proc : public CCitadel_Modifier_BaseEventProc /*0x0*/  // sizeof 0x418, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x208]; // offset 0x0
    bool m_bNoDeath; // offset 0x208, size 0x1, align 1
    char _pad_0209[0x3]; // offset 0x209
    float32 m_flDamage; // offset 0x20C, size 0x4, align 4
    int32 m_nDamageTick; // offset 0x210, size 0x4, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x214, size 0x4, align 4
    char _pad_0218[0x200]; // offset 0x218
};
