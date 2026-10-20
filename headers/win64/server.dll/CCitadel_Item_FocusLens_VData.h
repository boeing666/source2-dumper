#pragma once

class CCitadel_Item_FocusLens_VData : public CCitadel_Item_TrackingProjectileApplyModifierVData /*0x0*/  // sizeof 0x12C0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1290]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // offset 0x1290, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DamageModifier; // offset 0x12A0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ResistReductionModifier; // offset 0x12B0, size 0x10, align 8
};
