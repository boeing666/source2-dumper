#pragma once

class CCitadel_ArmorUpgrade_AblativeCoatVData : public CitadelItemVData /*0x0*/  // sizeof 0x1548, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x14F8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_RestoreEffectModifier; // offset 0x14F8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_OnTakeDamageEffectModifier; // offset 0x1508, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_OnBreakEffectModifier; // offset 0x1518, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ResistBuffModifier; // offset 0x1528, size 0x10, align 8
    float32 m_flOnTakeDamageEffectDuration; // offset 0x1538, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flOnBreakEffectDuration; // offset 0x153C, size 0x4, align 4
    float32 m_flOnRestoreEffectDuration; // offset 0x1540, size 0x4, align 4
    char _pad_1544[0x4]; // offset 0x1544
};
