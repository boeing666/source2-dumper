#pragma once

class CDOTA_Modifier_Spectre_Haunt : public CDOTA_Buff /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 destroy_if_target_is_dead; // offset 0x1A58, size 0x4, align 4
    GameTime_t m_fStartAttackTime; // offset 0x1A5C, size 0x4, align 255
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1A60, size 0x4, align 4
    bool m_bTargetIsAlive; // offset 0x1A64, size 0x1, align 1
    char _pad_1A65[0x3]; // offset 0x1A65
};
