#pragma once

class CCitadel_Item_FocusLens_VData : public CCitadel_Item_TrackingProjectileApplyModifierVData /*0x0*/  // sizeof 0x1638, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1608]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // offset 0x1608, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DamageModifier; // offset 0x1618, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ResistReductionModifier; // offset 0x1628, size 0x10, align 8
};
