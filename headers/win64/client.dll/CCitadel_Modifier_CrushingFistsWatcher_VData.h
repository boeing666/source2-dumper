#pragma once

class CCitadel_Modifier_CrushingFistsWatcher_VData : public CCitadel_Modifier_Intrinsic_BaseVData /*0x0*/  // sizeof 0x7B0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_StackingDebuffModifier; // offset 0x790, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strStackSound; // offset 0x7A0, size 0x10, align 8 | MPropertyStartGroup
};
