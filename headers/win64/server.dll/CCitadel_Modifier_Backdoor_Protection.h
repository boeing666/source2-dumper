#pragma once

class CCitadel_Modifier_Backdoor_Protection : public CCitadelModifier /*0x0*/  // sizeof 0x168, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    int32 m_MaxHealth; // offset 0x150, size 0x4, align 4
    GameTime_t m_flLastAttackedTime; // offset 0x154, size 0x4, align 255
    ParticleIndex_t m_nActiveShieldEffect; // offset 0x158, size 0x4, align 255
    bool m_bIsActive; // offset 0x15C, size 0x1, align 1
    char _pad_015D[0x3]; // offset 0x15D
    GameTime_t m_tActivationTime; // offset 0x160, size 0x4, align 255
    char _pad_0164[0x4]; // offset 0x164
};
