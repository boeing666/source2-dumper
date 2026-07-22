#pragma once

class CCitadel_Item_FocusLens_VData : public CCitadel_Item_TrackingProjectileApplyModifierVData /*0x0*/  // sizeof 0x19E8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x19B8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // offset 0x19B8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DamageModifier; // offset 0x19C8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ResistReductionModifier; // offset 0x19D8, size 0x10, align 8
};
