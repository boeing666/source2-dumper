#pragma once

class CModifier_Upgrade_ArcaneSurge_VData : public CCitadelModifierVData /*0x0*/  // sizeof 0x7C0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SurgeWindowModifier; // offset 0x798, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_AbilityWatcherModifier; // offset 0x7A8, size 0x10, align 8
    float32 m_flMaxSurgeTime; // offset 0x7B8, size 0x4, align 4 | MPropertyStartGroup
    char _pad_07BC[0x4]; // offset 0x7BC
};
