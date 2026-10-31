#pragma once

class CCitadel_Modifier_Backstabber_Watcher_VData : public CCitadel_Modifier_Intrinsic_BaseVData /*0x0*/  // sizeof 0x7C0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x798, size 0x10, align 8 | MPropertyGroupName
    float32 flDotResultMin; // offset 0x7A8, size 0x4, align 4 | MPropertyGroupName
    char _pad_07AC[0x4]; // offset 0x7AC
    CSoundEventName m_strHitConfirmSound; // offset 0x7B0, size 0x10, align 8 | MPropertyStartGroup
};
