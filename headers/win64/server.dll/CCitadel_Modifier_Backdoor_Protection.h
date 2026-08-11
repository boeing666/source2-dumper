#pragma once

class CCitadel_Modifier_Backdoor_Protection : public CCitadelModifier /*0x0*/  // sizeof 0xE8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    int32 m_MaxHealth; // offset 0xD0, size 0x4, align 4
    GameTime_t m_flLastAttackedTime; // offset 0xD4, size 0x4, align 255
    ParticleIndex_t m_nActiveShieldEffect; // offset 0xD8, size 0x4, align 255
    bool m_bIsActive; // offset 0xDC, size 0x1, align 1
    char _pad_00DD[0x3]; // offset 0xDD
    GameTime_t m_tActivationTime; // offset 0xE0, size 0x4, align 255
    char _pad_00E4[0x4]; // offset 0xE4
};
