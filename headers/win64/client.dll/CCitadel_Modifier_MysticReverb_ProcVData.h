#pragma once

class CCitadel_Modifier_MysticReverb_ProcVData : public CCitadel_Modifier_BaseEventProcVData /*0x0*/  // sizeof 0x7E8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x7C8]; // offset 0x0
    CEmbeddedSubclass< CBaseModifier > m_ExplosionModifier; // offset 0x7C8, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CBaseModifier > m_SlowModifier; // offset 0x7D8, size 0x10, align 8
};
