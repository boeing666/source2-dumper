#pragma once

class CModifier_Upgrade_ArcaneSurge_VData : public CCitadelModifierVData /*0x0*/  // sizeof 0x7B8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SurgeWindowModifier; // offset 0x790, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_AbilityWatcherModifier; // offset 0x7A0, size 0x10, align 8
    float32 m_flMaxSurgeTime; // offset 0x7B0, size 0x4, align 4 | MPropertyStartGroup
    char _pad_07B4[0x4]; // offset 0x7B4
};
