#pragma once

class CCitadel_Modifier_FlameDashVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x930, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_GroundAuraModifier; // offset 0x750, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ProgressModifier; // offset 0x760, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FlameDashParticle; // offset 0x770, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FlameAuraParticle; // offset 0x850, size 0xE0, align 8
};
