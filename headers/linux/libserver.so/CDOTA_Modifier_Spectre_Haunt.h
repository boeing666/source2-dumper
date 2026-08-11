#pragma once

class CDOTA_Modifier_Spectre_Haunt : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    bool m_bRealityApplied; // offset 0x1A78, size 0x1, align 1
    char _pad_1A79[0x3]; // offset 0x1A79
    int32 destroy_if_target_is_dead; // offset 0x1A7C, size 0x4, align 4
    GameTime_t m_fStartAttackTime; // offset 0x1A80, size 0x4, align 255
    CHandle< CBaseEntity > m_hTarget; // offset 0x1A84, size 0x4, align 4
    bool m_bTargetIsAlive; // offset 0x1A88, size 0x1, align 1
    char _pad_1A89[0x7]; // offset 0x1A89
};
