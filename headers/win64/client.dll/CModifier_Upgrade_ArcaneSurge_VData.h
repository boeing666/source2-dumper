#pragma once

class CModifier_Upgrade_ArcaneSurge_VData : public CCitadelModifierVData /*0x0*/  // sizeof 0x778, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SurgeWindowModifier; // offset 0x750, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_AbilityWatcherModifier; // offset 0x760, size 0x10, align 8
    float32 m_flMaxSurgeTime; // offset 0x770, size 0x4, align 4 | MPropertyStartGroup
    char _pad_0774[0x4]; // offset 0x774
};
