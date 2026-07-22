#pragma once

class CCitadel_Modifier_VacuumAuraTargetModifierVData : public CCitadel_Modifier_StunnedVData /*0x0*/  // sizeof 0x848, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x830]; // offset 0x0
    float32 m_flOuterSpeedScale; // offset 0x830, size 0x4, align 4
    float32 m_flSpeedScaleBias; // offset 0x834, size 0x4, align 4
    CSoundEventName m_TargetLoopingSound; // offset 0x838, size 0x10, align 8 | MPropertyGroupName
};
