#pragma once

class CCitadelAbilityDruidPlantHealingTreeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1BB8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_HealingTreeModel; // offset 0x1818, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_HealingFruitModel; // offset 0x18F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FruitGlowParticle; // offset 0x19D8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FruitPickupParticle; // offset 0x1AB8, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_HealingAuraModifier; // offset 0x1B98, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_HealingFruitModifier; // offset 0x1BA8, size 0x10, align 8
};
