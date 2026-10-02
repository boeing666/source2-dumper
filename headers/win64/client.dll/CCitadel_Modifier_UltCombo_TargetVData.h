#pragma once

class CCitadel_Modifier_UltCombo_TargetVData : public CCitadel_Modifier_StunnedVData /*0x0*/  // sizeof 0x898, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x870]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_AttachModifier; // offset 0x870, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flTargetPosDistance; // offset 0x880, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flTargetPosRange; // offset 0x884, size 0x4, align 4
    float32 m_flPullSpeedMin; // offset 0x888, size 0x4, align 4
    float32 m_flPullSpeedMax; // offset 0x88C, size 0x4, align 4
    float32 m_flPullDistanceMin; // offset 0x890, size 0x4, align 4
    float32 m_flPullDistanceMax; // offset 0x894, size 0x4, align 4
};
