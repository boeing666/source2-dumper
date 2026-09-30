#pragma once

class CCitadel_Modifier_UltCombo_TargetVData : public CCitadel_Modifier_StunnedVData /*0x0*/  // sizeof 0x868, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x840]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_AttachModifier; // offset 0x840, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flTargetPosDistance; // offset 0x850, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flTargetPosRange; // offset 0x854, size 0x4, align 4
    float32 m_flPullSpeedMin; // offset 0x858, size 0x4, align 4
    float32 m_flPullSpeedMax; // offset 0x85C, size 0x4, align 4
    float32 m_flPullDistanceMin; // offset 0x860, size 0x4, align 4
    float32 m_flPullDistanceMax; // offset 0x864, size 0x4, align 4
};
