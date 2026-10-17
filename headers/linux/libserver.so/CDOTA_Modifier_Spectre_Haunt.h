#pragma once

class CDOTA_Modifier_Spectre_Haunt : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    bool m_bRealityApplied; // offset 0x1AA8, size 0x1, align 1
    char _pad_1AA9[0x3]; // offset 0x1AA9
    int32 destroy_if_target_is_dead; // offset 0x1AAC, size 0x4, align 4
    GameTime_t m_fStartAttackTime; // offset 0x1AB0, size 0x4, align 255
    CHandle< CBaseEntity > m_hTarget; // offset 0x1AB4, size 0x4, align 4
    bool m_bTargetIsAlive; // offset 0x1AB8, size 0x1, align 1
    char _pad_1AB9[0x7]; // offset 0x1AB9
};
