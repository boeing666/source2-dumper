#pragma once

class CCitadel_Modifier_UltCombo_TargetVData : public CCitadel_Modifier_StunnedVData /*0x0*/  // sizeof 0x848, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x830]; // offset 0x0
    float32 m_flTargetPosDistance; // offset 0x830, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flTargetPosRange; // offset 0x834, size 0x4, align 4
    float32 m_flPullSpeedMin; // offset 0x838, size 0x4, align 4
    float32 m_flPullSpeedMax; // offset 0x83C, size 0x4, align 4
    float32 m_flPullDistanceMin; // offset 0x840, size 0x4, align 4
    float32 m_flPullDistanceMax; // offset 0x844, size 0x4, align 4
};
