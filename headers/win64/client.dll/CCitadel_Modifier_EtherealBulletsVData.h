#pragma once

class CCitadel_Modifier_EtherealBulletsVData : public CCitadel_Modifier_BaseEventProcVData /*0x0*/  // sizeof 0x8C8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x7C8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x7C8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BulletDamageBuffModifier; // offset 0x7D8, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ProcParticle; // offset 0x7E8, size 0xE0, align 8 | MPropertyGroupName
};
