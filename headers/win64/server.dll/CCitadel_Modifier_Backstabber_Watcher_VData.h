#pragma once

class CCitadel_Modifier_Backstabber_Watcher_VData : public CCitadel_Modifier_Intrinsic_BaseVData /*0x0*/  // sizeof 0x7B8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x790, size 0x10, align 8 | MPropertyGroupName
    float32 flDotResultMin; // offset 0x7A0, size 0x4, align 4 | MPropertyGroupName
    char _pad_07A4[0x4]; // offset 0x7A4
    CSoundEventName m_strHitConfirmSound; // offset 0x7A8, size 0x10, align 8 | MPropertyStartGroup
};
