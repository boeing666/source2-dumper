#pragma once

class CCitadel_Modifier_Backdoor_Protection : public CCitadelModifier /*0x0*/  // sizeof 0x158, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    int32 m_MaxHealth; // offset 0x140, size 0x4, align 4
    GameTime_t m_flLastAttackedTime; // offset 0x144, size 0x4, align 255
    ParticleIndex_t m_nActiveShieldEffect; // offset 0x148, size 0x4, align 255
    bool m_bIsActive; // offset 0x14C, size 0x1, align 1
    char _pad_014D[0x3]; // offset 0x14D
    GameTime_t m_tActivationTime; // offset 0x150, size 0x4, align 255
    char _pad_0154[0x4]; // offset 0x154
};
