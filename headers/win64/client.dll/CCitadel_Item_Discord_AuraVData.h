#pragma once

class CCitadel_Item_Discord_AuraVData : public CCitadelModifierAuraVData /*0x0*/  // sizeof 0xB28, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x7A8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strAreaEffectEnemy; // offset 0x7A8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strAreaEffectFriendly; // offset 0x888, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strAreaEffectSelf; // offset 0x968, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DrainParticle; // offset 0xA48, size 0xE0, align 8
};
