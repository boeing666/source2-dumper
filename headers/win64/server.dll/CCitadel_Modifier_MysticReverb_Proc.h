#pragma once

class CCitadel_Modifier_MysticReverb_Proc : public CCitadel_Modifier_BaseEventProc /*0x0*/  // sizeof 0x5A8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x2D8]; // offset 0x0
    bool m_bNoDeath; // offset 0x2D8, size 0x1, align 1
    char _pad_02D9[0x3]; // offset 0x2D9
    float32 m_flDamage; // offset 0x2DC, size 0x4, align 4
    int32 m_nDamageTick; // offset 0x2E0, size 0x4, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x2E4, size 0x4, align 4
    char _pad_02E8[0x2C0]; // offset 0x2E8
};
