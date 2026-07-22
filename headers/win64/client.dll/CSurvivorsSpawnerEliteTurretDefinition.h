#pragma once

class CSurvivorsSpawnerEliteTurretDefinition : public CSurvivorsSpawnerDefinition /*0x0*/  // sizeof 0x230, align 0x8 [vtable] (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    char _pad_0000[0x148]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sInvulnerableParticle; // offset 0x148, size 0xE0, align 8
    CUtlString m_sInvulnerableSkinName; // offset 0x228, size 0x8, align 8
};
