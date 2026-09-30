#pragma once

class CCitadel_Modifier_Backstabber_Watcher_VData : public CCitadel_Modifier_Intrinsic_BaseVData /*0x0*/  // sizeof 0x788, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x760, size 0x10, align 8 | MPropertyGroupName
    float32 flDotResultMin; // offset 0x770, size 0x4, align 4 | MPropertyGroupName
    char _pad_0774[0x4]; // offset 0x774
    CSoundEventName m_strHitConfirmSound; // offset 0x778, size 0x10, align 8 | MPropertyStartGroup
};
