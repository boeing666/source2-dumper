#pragma once

class CCitadelModifierShadowStepVData : public CCitadel_Modifier_InvisVData /*0x0*/  // sizeof 0xC00, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xA18]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // offset 0xA18, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ArmorDebuff; // offset 0xA28, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InvisChangedEffect; // offset 0xA38, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShadowRevealedEffect; // offset 0xB18, size 0xE0, align 8
    float32 m_flMinInvisDuration; // offset 0xBF8, size 0x4, align 4 | MPropertyStartGroup
    char _pad_0BFC[0x4]; // offset 0xBFC
};
