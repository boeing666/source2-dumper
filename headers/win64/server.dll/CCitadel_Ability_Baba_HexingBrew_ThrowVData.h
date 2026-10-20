#pragma once

class CCitadel_Ability_Baba_HexingBrew_ThrowVData : public CBaseTriggerAbilityVData /*0x0*/  // sizeof 0x1330, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1090]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FireTrailParticle; // offset 0x1090, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BarrierTrailParticle; // offset 0x1170, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SilenceTrailParticle; // offset 0x1250, size 0xE0, align 8
};
