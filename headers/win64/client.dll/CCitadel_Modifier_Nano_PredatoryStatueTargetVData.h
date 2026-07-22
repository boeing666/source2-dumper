#pragma once

class CCitadel_Modifier_Nano_PredatoryStatueTargetVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x790, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CSoundEventName m_strLaserHitSound; // offset 0x750, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strLaserStartSound; // offset 0x760, size 0x10, align 8
    CSoundEventName m_strLaserLoopSound; // offset 0x770, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x780, size 0x10, align 8 | MPropertyStartGroup
};
