#pragma once

class CCitadel_ArmorUpgrade_AblativeCoatVData : public CitadelItemVData /*0x0*/  // sizeof 0x11D0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1180]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_RestoreEffectModifier; // offset 0x1180, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_OnTakeDamageEffectModifier; // offset 0x1190, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_OnBreakEffectModifier; // offset 0x11A0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ResistBuffModifier; // offset 0x11B0, size 0x10, align 8
    float32 m_flOnTakeDamageEffectDuration; // offset 0x11C0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flOnBreakEffectDuration; // offset 0x11C4, size 0x4, align 4
    float32 m_flOnRestoreEffectDuration; // offset 0x11C8, size 0x4, align 4
    char _pad_11CC[0x4]; // offset 0x11CC
};
