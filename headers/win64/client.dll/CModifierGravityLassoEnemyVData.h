#pragma once

class CModifierGravityLassoEnemyVData : public CCitadel_Modifier_LinkVData /*0x0*/  // sizeof 0x920, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x830]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LassoEffect; // offset 0x830, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_StunModifier; // offset 0x910, size 0x10, align 8 | MPropertyStartGroup
};
