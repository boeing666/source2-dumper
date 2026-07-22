#pragma once

class CCitadel_Modifier_PullDownToGroundVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x768, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    float32 m_flMaxHeight; // offset 0x750, size 0x4, align 4
    float32 m_flPullDownSpeedMin; // offset 0x754, size 0x4, align 4
    float32 m_flPullDownSpeedScale; // offset 0x758, size 0x4, align 4
    float32 m_flFullPullDistance; // offset 0x75C, size 0x4, align 4
    float32 m_flDampenVelocityRate; // offset 0x760, size 0x4, align 4
    char _pad_0764[0x4]; // offset 0x764
};
