#pragma once

class CCitadel_Modifier_VacuumAuraTargetModifierVData : public CCitadel_Modifier_StunnedVData /*0x0*/  // sizeof 0x858, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x840]; // offset 0x0
    float32 m_flOuterSpeedScale; // offset 0x840, size 0x4, align 4
    float32 m_flSpeedScaleBias; // offset 0x844, size 0x4, align 4
    CSoundEventName m_TargetLoopingSound; // offset 0x848, size 0x10, align 8 | MPropertyGroupName
};
