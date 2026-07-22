#pragma once

class CCitadel_Modifier_ZiplineKnockdownImmuneVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xAD0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineEnemyKnockdownProtectionParticle; // offset 0x750, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineSelfKnockdownProtectionParticle; // offset 0x830, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineKnockdownProtectionStatusParticle; // offset 0x910, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineKnockdownProtectionStatusEnemyParticle; // offset 0x9F0, size 0xE0, align 8
};
